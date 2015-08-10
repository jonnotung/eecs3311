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
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {AND_OPERATOR})
			hash_set.put (create {SET_BINARY_CONSTRAINT [TYPE_INTERFACE, SET_TYPE [TYPE_INTERFACE]]}, {DIFFERENCE_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [INTEGER_TYPE, INTEGER_TYPE]}, {DIVIDES_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [TYPE_INTERFACE, BOOLEAN_TYPE]}, {EQUAL_OPERATOR})
			hash_set.put (create {SET_BINARY_CONSTRAINT [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {EXISTS_OPERATOR})
			hash_set.put (create {SET_UNARY_CONSTRAINT [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {FORALL_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [INTEGER_TYPE, BOOLEAN_TYPE]}, {GT_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {IMPLIES_OPERATOR})
			hash_set.put (create {SET_BINARY_CONSTRAINT [INTEGER_TYPE, SET_TYPE [INTEGER_TYPE]]}, {INTERSECT_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [INTEGER_TYPE, BOOLEAN_TYPE]}, {LT_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [INTEGER_TYPE, INTEGER_TYPE]}, {MINUS_OPERATOR})
			hash_set.put (create {CONSTANT_UNARY_CONSTRAINT [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {NEGATION_OPERATOR})
			hash_set.put (create {CONSTANT_UNARY_CONSTRAINT [INTEGER_TYPE, INTEGER_TYPE]}, {NEGATIVE_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [BOOLEAN_TYPE, BOOLEAN_TYPE]}, {OR_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [INTEGER_TYPE, INTEGER_TYPE]}, {PLUS_OPERATOR})
			hash_set.put (create {SET_UNARY_CONSTRAINT [INTEGER_TYPE, INTEGER_TYPE]}, {SUM_OPERATOR})
			hash_set.put (create {CONSTANT_BINARY_CONSTRAINT [INTEGER_TYPE, INTEGER_TYPE]}, {TIMES_OPERATOR})
			hash_set.put (create {SET_BINARY_CONSTRAINT [BOOLEAN_TYPE, SET_TYPE [BOOLEAN_TYPE]]}, {UNION_OPERATOR})
		end

feature

	type_stack: STACK [TYPE [TYPE_INTERFACE]]

	hash_set: HASH_TABLE [CONSTRAINT_INTERFACE, TYPE [OPERATOR_INTERFACE]]

	visit_constant_expression (expression: CONSTANT_EXPRESSION)
		local
			type: TYPE [TYPE_INTERFACE]
		do
			if attached {INTEGER_TYPE} expression.value then
				type := {INTEGER_TYPE}
			elseif attached {BOOLEAN_TYPE} expression.value then
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
			if attached {BINARY_CONSTRAINT_INTERFACE} hash_set.at (resolve_operator (expression.operator)) as constraints then
				expression.left.accept (Current)
				left_type := stack_pop
				expression.right.accept (Current)
				right_type := stack_pop
				if constraints.validate (left_type, right_type) then
					stack_push (constraints.return_type)
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
			if attached {UNARY_CONSTRAINT_INTERFACE} hash_set.at (resolve_operator (expression.operator)) as constraints then
				expression.exp.accept (Current)
				type := stack_pop
				if constraints.validate (type) then
					stack_push (constraints.return_type)
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
			int_found: BOOLEAN
			bool_found: BOOLEAN
		do
			if not expression.closed then
				(create {EXPRESSION_INCOMPLETE_EXCEPTION}).raise
			end
			across
				expression as set_iterator
			loop
				set_iterator.item.accept (Current)
				type := stack_pop
				if attached {TYPE[INTEGER_TYPE]} type then
					int_found := true
				elseif attached {TYPE[BOOLEAN_TYPE]} type then
					bool_found := true
				end
			end
			if int_found and not bool_found then
				stack_push ({SET_TYPE [INTEGER_TYPE]})
			elseif bool_found and not int_found then
				stack_push ({SET_TYPE [BOOLEAN_TYPE]})
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

	resolve_operator (op: OPERATOR_INTERFACE): TYPE [OPERATOR_INTERFACE]
		do
			if attached {AND_OPERATOR} op then
				Result := {AND_OPERATOR}
			elseif attached {DIFFERENCE_OPERATOR} op then
				Result := {DIFFERENCE_OPERATOR}
			elseif attached {DIVIDES_OPERATOR} op then
				Result := {DIVIDES_OPERATOR}
			elseif attached {EQUAL_OPERATOR} op then
				Result := {EQUAL_OPERATOR}
			elseif attached {EXISTS_OPERATOR} op then
				Result := {EXISTS_OPERATOR}
			elseif attached {FORALL_OPERATOR} op then
				Result := {FORALL_OPERATOR}
			elseif attached {GT_OPERATOR} op then
				Result := {GT_OPERATOR}
			elseif attached {IMPLIES_OPERATOR} op then
				Result := {IMPLIES_OPERATOR}
			elseif attached {INTERSECT_OPERATOR} op then
				Result := {INTERSECT_OPERATOR}
			elseif attached {LT_OPERATOR} op then
				Result := {LT_OPERATOR}
			elseif attached {MINUS_OPERATOR} op then
				Result := {MINUS_OPERATOR}
			elseif attached {NEGATION_OPERATOR} op then
				Result := {NEGATION_OPERATOR}
			elseif attached {NEGATIVE_OPERATOR} op then
				Result := {NEGATIVE_OPERATOR}
			elseif attached {OR_OPERATOR} op then
				Result := {OR_OPERATOR}
			elseif attached {PLUS_OPERATOR} op then
				Result := {PLUS_OPERATOR}
			elseif attached {SUM_OPERATOR} op then
				Result := {SUM_OPERATOR}
			elseif attached {TIMES_OPERATOR} op then
				Result := {TIMES_OPERATOR}
			elseif attached {UNION_OPERATOR} op then
				Result := {UNION_OPERATOR}
			else
				Result := {OPERATOR_INTERFACE}
			end
		end

end
