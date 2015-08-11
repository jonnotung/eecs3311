note
	description: "Summary description for {EXPRESSION_VISITOR_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION_VISITOR_INTERFACE

inherit
	VISITOR_INTERFACE

feature
	visit(expr: EXPRESSION_INTERFACE)
		do
			if attached {BINARY_EXPRESSION} expr as binary_e then
				visit_binary_expression (binary_e)
			elseif attached {UNARY_EXPRESSION} expr as unary_e then
				visit_unary_expression (unary_e)
			elseif attached {CONSTANT_EXPRESSION} expr as constant_e then
				visit_constant_expression (constant_e)
			elseif attached {SET_EXPRESSION} expr as set_e then
				visit_set_expression (set_e)
			elseif attached {NIL_EXPRESSION} expr as nil_e then
				visit_nil_expression (nil_e)
			else
				(create {UNHANDLED_EXPRESSION_EXCEPTION}).raise
			end
		end

feature {NONE}

	visit_constant_expression(expression: CONSTANT_EXPRESSION)
		deferred end

	visit_binary_expression(expression: BINARY_EXPRESSION)
		deferred end

	visit_unary_expression(expression: UNARY_EXPRESSION)
		deferred end

	visit_nil_expression(expression: NIL_EXPRESSION)
		deferred end

	visit_set_expression(expression: SET_EXPRESSION)
		deferred end

feature
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
