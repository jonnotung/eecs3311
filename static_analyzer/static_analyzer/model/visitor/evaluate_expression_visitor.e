note
	description: "Summary description for {EVALUATE_EXPRESSION_VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EVALUATE_EXPRESSION_VISITOR

inherit

	EXPRESSION_VISITOR_INTERFACE

create
	make

feature

	make
		do
			create {LINKED_STACK [EVALUATED_EXPRESSION_INTERFACE]} eval_stack.make
			create hash_set.make (18)
			hash_set.put (agent evaluate_and(?, ?), {AND_OPERATOR})
			hash_set.put (agent evaluate_difference(?, ?), {DIFFERENCE_OPERATOR})
			hash_set.put (agent evaluate_divides(?, ?), {DIVIDES_OPERATOR})
			hash_set.put (agent evaluate_equal(?, ?), {EQUAL_OPERATOR})
			hash_set.put (agent evaluate_exists(?), {EXISTS_OPERATOR})
			hash_set.put (agent evaluate_forall(?), {FORALL_OPERATOR})
			hash_set.put (agent evaluate_gt(?, ?), {GT_OPERATOR})
			hash_set.put (agent evaluate_implies(?, ?), {IMPLIES_OPERATOR})
			hash_set.put (agent evaluate_intersect(?, ?), {INTERSECT_OPERATOR})
			hash_set.put (agent evaluate_lt(?, ?), {LT_OPERATOR})
			hash_set.put (agent evaluate_minus(?, ?), {MINUS_OPERATOR})
			hash_set.put (agent evaluate_negation(?), {NEGATION_OPERATOR})
			hash_set.put (agent evaluate_negative(?), {NEGATIVE_OPERATOR})
			hash_set.put (agent evaluate_or(?, ?), {OR_OPERATOR})
			hash_set.put (agent evaluate_plus(?, ?), {PLUS_OPERATOR})
			hash_set.put (agent evaluate_sum(?), {SUM_OPERATOR})
			hash_set.put (agent evaluate_times(?, ?), {TIMES_OPERATOR})
			hash_set.put (agent evaluate_union(?, ?), {UNION_OPERATOR})
		end

feature {NONE}

	agent_type: detachable FUNCTION [EVALUATE_EXPRESSION_VISITOR, TUPLE [EVALUATED_EXPRESSION_INTERFACE], EVALUATED_EXPRESSION_INTERFACE]
	hash_set: HASH_TABLE [like agent_type, TYPE [OPERATOR_INTERFACE]]


feature
	visit_constant_expression (expression: CONSTANT_EXPRESSION)
		do
			stack_push (expression)
		end

	visit_binary_expression (expression: BINARY_EXPRESSION)
		local
			left_exp: EVALUATED_EXPRESSION_INTERFACE
			right_exp: EVALUATED_EXPRESSION_INTERFACE
		do
			if attached {like agent_type} hash_set.at (resolve_operator (expression.operator)) as evaluator then
				expression.left.accept (Current)
				left_exp := stack_pop
				expression.right.accept (Current)
				right_exp := stack_pop
				stack_push (evaluator.item (left_exp, right_exp))
			else
				(create {UNHANDLED_EXPRESSION_EXCEPTION}).raise
			end
		end

	visit_unary_expression (expression: UNARY_EXPRESSION)
		do
			if attached {like agent_type} hash_set.at (resolve_operator (expression.operator)) as evaluator then
				expression.exp.accept (Current)
				stack_push (evaluator.item (stack_pop))
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
			set: SET_EXPRESSION
		do
			if not expression.closed then
				(create {EXPRESSION_INCOMPLETE_EXCEPTION}).raise
			end
			create set.make
			across
				expression as set_iterator
			loop
				set_iterator.item.accept (Current)
				set.add (stack_pop)
			end
			stack_push (evaluate_set (set))
		end

feature {NONE}

	cast_as_constant_expr (object: EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		require
			type_correct: attached {CONSTANT_EXPRESSION} object
		do
			Result := create {CONSTANT_EXPRESSION}.make (create {INTEGER_TYPE}.make (0))
			if attached {CONSTANT_EXPRESSION} object as const then
				Result := const
			end
		end

	cast_as_set_expr (object: EXPRESSION_INTERFACE): SET_EXPRESSION
		require
			type_correct: attached {SET_EXPRESSION} object
		do
			Result := create {SET_EXPRESSION}.make
			if attached {SET_EXPRESSION} object as set then
				Result := set
			end
		end

	cast_as_integer_type (object: TYPE_INTERFACE): INTEGER_TYPE
		require
			type_correct: attached {INTEGER_TYPE} object
		do
			Result := create {INTEGER_TYPE}.make (0)
			if attached {INTEGER_TYPE} object as int then
				Result := int
			end
		end

	cast_as_boolean_type (object: TYPE_INTERFACE): BOOLEAN_TYPE
		require
			type_correct: attached {BOOLEAN_TYPE} object
		do
			Result := create {BOOLEAN_TYPE}.make (true)
			if attached {BOOLEAN_TYPE} object as bool then
				Result := bool
			end
		end

	convert_to_arrayed_set(set: SET_EXPRESSION): ARRAYED_SET[EXPRESSION_INTERFACE]
		do
			create Result.make(0)
			Result.compare_objects
			across
				set as i
			loop
				Result.extend (i.item)
			end
		ensure
			compare_objects:
				Result.object_comparison
		end

	convert_to_set_expression (arrayed: ARRAYED_SET[EXPRESSION_INTERFACE]): SET_EXPRESSION
		do
			create Result.make
			across
				arrayed as iter
			loop
				Result.add (iter.item)
			end
		end

feature
	eval_stack: STACK [EVALUATED_EXPRESSION_INTERFACE]
	last_result: EVALUATED_EXPRESSION_INTERFACE
		require
			has_result: eval_stack.count = 1
		do
			Result := eval_stack.item.deep_twin
		ensure
			has_result: eval_stack.count = old eval_stack.count
			copied: Result /= eval_stack.item
		end

feature {NONE}

	evaluate_set (object: EVALUATED_EXPRESSION_INTERFACE): SET_EXPRESSION
		do
			Result := convert_to_set_expression (convert_to_arrayed_set (cast_as_set_expr (object)))
			Result.close
		end

	evaluate_and (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: BOOLEAN_TYPE
			r: BOOLEAN_TYPE
		do
			l := cast_as_boolean_type (left.value)
			r := cast_as_boolean_type (right.value)
			create {CONSTANT_EXPRESSION} Result.make (create {BOOLEAN_TYPE}.make (l.value and r.value))
		end

	evaluate_difference (left, right: EVALUATED_EXPRESSION_INTERFACE): SET_EXPRESSION
		local
			set_l: ARRAYED_SET [EXPRESSION_INTERFACE]
			set_r: ARRAYED_SET [EXPRESSION_INTERFACE]
		do
			set_l := convert_to_arrayed_set (cast_as_set_expr (left))
			set_r := convert_to_arrayed_set (cast_as_set_expr (right))

			set_l.symdif (set_r)

			Result := convert_to_set_expression(set_l)
		end

	evaluate_divides (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: INTEGER_TYPE
			r: INTEGER_TYPE
		do
			l := cast_as_integer_type (left.value)
			r := cast_as_integer_type (right.value)
			if r.value = 0 then
				(create {DIVISION_BY_ZERO_EXCEPTION}).raise
			end

			create Result.make (create {INTEGER_TYPE}.make ((l.value / r.value).floor))
		end

	evaluate_equal (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		do
			Result := (create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (left ~ right)))
		end

	evaluate_exists (object: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			set: SET_EXPRESSION
			ret: BOOLEAN
		do
			set := cast_as_set_expr (object)
			across
				set as set_iter
			loop
				if not ret then
					ret := cast_as_boolean_type (cast_as_constant_expr (set_iter.item).value).value
				end
			end
			Result := (create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (ret)))
		end

	evaluate_forall (object: EVALUATED_EXPRESSION_INTERFACE): EVALUATED_EXPRESSION_INTERFACE
		local
			set: SET_EXPRESSION
			ret: BOOLEAN
		do
			set := cast_as_set_expr (object)
			ret := true
			across
				set as set_iter
			loop
				if ret then
					ret := cast_as_boolean_type (cast_as_constant_expr (set_iter.item).value).value
				end
			end
			Result := (create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (ret)))
		end

	evaluate_gt (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: INTEGER_TYPE
			r: INTEGER_TYPE
		do
			l := cast_as_integer_type (left.value)
			r := cast_as_integer_type (right.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (l.value > r.value))
		end

	evaluate_implies (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: BOOLEAN_TYPE
			r: BOOLEAN_TYPE
		do
			l := cast_as_boolean_type (left.value)
			r := cast_as_boolean_type (right.value)
			Result := (create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (l.value implies r.value)))
		end

	evaluate_intersect (left, right: EVALUATED_EXPRESSION_INTERFACE): SET_EXPRESSION
		local
			set_l: ARRAYED_SET[EXPRESSION_INTERFACE]
			set_r: ARRAYED_SET[EXPRESSION_INTERFACE]
		do
			set_l := convert_to_arrayed_set (cast_as_set_expr (left))
			set_r := convert_to_arrayed_set (cast_as_set_expr (right))

			set_l.intersect (set_r)

			Result := convert_to_set_expression (set_l)
		end

	evaluate_lt (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: INTEGER_TYPE
			r: INTEGER_TYPE
		do
			l := cast_as_integer_type (left.value)
			r := cast_as_integer_type (right.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (l.value < r.value))
		end

	evaluate_minus (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: INTEGER_TYPE
			r: INTEGER_TYPE
		do
			l := cast_as_integer_type (left.value)
			r := cast_as_integer_type (right.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {INTEGER_TYPE}.make (l.value - r.value))
		end

	evaluate_negation (object: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			type: BOOLEAN_TYPE
		do
			type := cast_as_boolean_type (object.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (not type.value))
		end

	evaluate_negative (object: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			type: INTEGER_TYPE
		do
			type := cast_as_integer_type (object.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {INTEGER_TYPE}.make (type.value * -1))
		end

	evaluate_or (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: BOOLEAN_TYPE
			r: BOOLEAN_TYPE
		do
			l := cast_as_boolean_type (left.value)
			r := cast_as_boolean_type (right.value)
			Result := (create {CONSTANT_EXPRESSION}.make (create {BOOLEAN_TYPE}.make (l.value or r.value)))
		end

	evaluate_plus (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: INTEGER_TYPE
			r: INTEGER_TYPE
		do
			l := cast_as_integer_type (left.value)
			r := cast_as_integer_type (right.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {INTEGER_TYPE}.make (l.value + r.value))
		end

	evaluate_sum (object: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			set: SET_EXPRESSION
			ret: INTEGER
		do
			set := cast_as_set_expr (object)
			ret := 0
			across
				set as iter
			loop
				ret := ret + cast_as_integer_type (cast_as_constant_expr (iter.item).value).value
			end

			Result := create {CONSTANT_EXPRESSION}.make (create {INTEGER_TYPE}.make (ret))
		end

	evaluate_times (left, right: EVALUATED_EXPRESSION_INTERFACE): CONSTANT_EXPRESSION
		local
			l: INTEGER_TYPE
			r: INTEGER_TYPE
		do
			l := cast_as_integer_type (left.value)
			r := cast_as_integer_type (right.value)

			Result := create {CONSTANT_EXPRESSION}.make (create {INTEGER_TYPE}.make (l.value * r.value))
		end

	evaluate_union (left, right: EVALUATED_EXPRESSION_INTERFACE): SET_EXPRESSION
		local
			set_l: ARRAYED_SET[EXPRESSION_INTERFACE]
			set_r: ARRAYED_SET[EXPRESSION_INTERFACE]
		do
			set_l := convert_to_arrayed_set (cast_as_set_expr (left))
			set_r := convert_to_arrayed_set (cast_as_set_expr (right))

			set_l.merge (set_r)

			Result := convert_to_set_expression (set_l)
		end

feature

	stack_push (item: like eval_stack.item)
		do
			eval_stack.put (item)
		end

	stack_pop: like eval_stack.item
		do
			Result := eval_stack.item
			eval_stack.remove
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
