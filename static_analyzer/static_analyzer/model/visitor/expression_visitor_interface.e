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

end
