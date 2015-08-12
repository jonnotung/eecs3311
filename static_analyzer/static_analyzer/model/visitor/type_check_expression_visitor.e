note
	description: "Summary description for {TYPE_CHECK_EXPRESSION_VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECK_EXPRESSION_VISITOR

inherit

	EXPRESSION_VISITOR_INTERFACE

create
	make

feature

	make
		do
			create {LINKED_STACK [TYPE [TYPE_INTERFACE]]} type_stack.make
			create hash_set.make (18)
			hash_set.put (create {BINARY_DEFINITION [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {AND_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {IMPLIES_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {OR_OPERATOR})

			hash_set.put (create {BINARY_DEFINITION [INTEGER_TYPE, BOOLEAN_TYPE]}, {GT_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [INTEGER_TYPE, BOOLEAN_TYPE]}, {LT_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [TYPE_INTERFACE, BOOLEAN_TYPE]}, {EQUAL_OPERATOR})

			hash_set.put (create {BINARY_DEFINITION [INTEGER_TYPE, INTEGER_TYPE]}, {DIVIDES_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [INTEGER_TYPE, INTEGER_TYPE]}, {MINUS_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [INTEGER_TYPE, INTEGER_TYPE]}, {PLUS_OPERATOR})
			hash_set.put (create {BINARY_DEFINITION [INTEGER_TYPE, INTEGER_TYPE]}, {TIMES_OPERATOR})

			hash_set.put (create {INPUT_SENSITIVE_BINARY_DEFINITION [SET_TYPE[TYPE_INTERFACE]]}, {DIFFERENCE_OPERATOR})
			hash_set.put (create {INPUT_SENSITIVE_BINARY_DEFINITION [SET_TYPE[TYPE_INTERFACE]]}, {UNION_OPERATOR})
			hash_set.put (create {INPUT_SENSITIVE_BINARY_DEFINITION [SET_TYPE[TYPE_INTERFACE]]}, {INTERSECT_OPERATOR})

			hash_set.put (create {UNARY_DEFINITION [SET_TYPE[BOOLEAN_TYPE], BOOLEAN_TYPE]}, {EXISTS_OPERATOR})
			hash_set.put (create {UNARY_DEFINITION [SET_TYPE[BOOLEAN_TYPE], BOOLEAN_TYPE]}, {FORALL_OPERATOR})
			hash_set.put (create {UNARY_DEFINITION [SET_TYPE[INTEGER_TYPE], INTEGER_TYPE]}, {SUM_OPERATOR})

			hash_set.put (create {UNARY_DEFINITION [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {NEGATION_OPERATOR})
			hash_set.put (create {UNARY_DEFINITION [INTEGER_TYPE, INTEGER_TYPE]}, {NEGATIVE_OPERATOR})
		end

feature

	type_stack: STACK [TYPE [TYPE_INTERFACE]]

	hash_set: HASH_TABLE [DEFINITION_INTERFACE, TYPE [OPERATOR_INTERFACE]]

	visit_constant_expression (expression: CONSTANT_EXPRESSION)
		local
			type: TYPE [TYPE_INTERFACE]
		do
			if attached {INTEGER_TYPE} expression.type then
				type := {INTEGER_TYPE}
			elseif attached {BOOLEAN_TYPE} expression.type then
				type := {BOOLEAN_TYPE}
			else
				type := {TYPE_INTERFACE}
			end
			stack_push (type)
		end

	visit_binary_expression (expression: BINARY_EXPRESSION)
		local
			left_type: TYPE [TYPE_INTERFACE]
			right_type: TYPE [TYPE_INTERFACE]
		do
			if attached {BINARY_DEFINITION_INTERFACE} hash_set.at (resolve_operator (expression.operator)) as definition then
				expression.left.accept (Current)
				left_type := stack_pop
				expression.right.accept (Current)
				right_type := stack_pop
				if definition.validate (left_type, right_type) then
					if attached {INPUT_SENSITIVE_BINARY_DEFINITION[TYPE_INTERFACE]} definition then
						stack_push(left_type)
					else
						stack_push (definition.return_type)
					end
				else
					(create {TYPE_CHECK_EXCEPTION}).raise
				end
			else
				(create {UNHANDLED_EXPRESSION_EXCEPTION}).raise
			end
		end

	visit_unary_expression (expression: UNARY_EXPRESSION)
		local
			type: TYPE [TYPE_INTERFACE]
		do
			if attached {UNARY_DEFINITION_INTERFACE} hash_set.at (resolve_operator (expression.operator)) as definition then
				expression.exp.accept (Current)
				type := stack_pop
				if definition.validate (type) then
					stack_push (definition.return_type)
				else
					(create {TYPE_CHECK_EXCEPTION}).raise
				end
			else
				(create {UNHANDLED_EXPRESSION_EXCEPTION}).raise
			end
		end

	visit_nil_expression (expression: NIL_EXPRESSION)
		do
			(create {EXPRESSION_INCOMPLETE_EXCEPTION}).raise
		end

	visit_set_expression (expression: SET_EXPRESSION)
		local
			type: TYPE [TYPE_INTERFACE]
			type_assigned: BOOLEAN

		do
			type := {TYPE_INTERFACE}
			if not expression.closed then
				(create {EXPRESSION_INCOMPLETE_EXCEPTION}).raise
			end
			across
				expression as set_iterator
			loop
				set_iterator.item.accept (Current)
				if type_assigned then
					if not (stack_pop ~ type) then
						(create {TYPE_CHECK_EXCEPTION}).raise
					end
				else
					type := stack_pop
					type_assigned := true
				end
			end
			if attached {TYPE[BOOLEAN_TYPE]} type then
				stack_push ({SET_TYPE[BOOLEAN_TYPE]})
			elseif attached {TYPE[INTEGER_TYPE]} type then
				stack_push({SET_TYPE[INTEGER_TYPE]})
			elseif attached {TYPE[SET_TYPE[BOOLEAN_TYPE]]} type then
				stack_push({SET_TYPE[SET_TYPE[BOOLEAN_TYPE]]})
			elseif attached {TYPE[SET_TYPE[INTEGER_TYPE]]} type then
				stack_push({SET_TYPE[SET_TYPE[INTEGER_TYPE]]})
			else
				(create {TYPE_CHECK_EXCEPTION}).raise
			end
		end

feature

	stack_push (item: like type_stack.item)
		do
			type_stack.put (item)
		end

	stack_pop: like type_stack.item
		do
			Result := type_stack.item
			type_stack.remove
		end



end
