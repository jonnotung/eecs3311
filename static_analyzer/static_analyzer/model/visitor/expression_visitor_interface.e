note
	description: "Summary description for {EXPRESSION_VISITOR_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION_VISITOR_INTERFACE

inherit
	VISITOR_INTERFACE[EXPRESSION_INTERFACE]

feature
	visit(expression: EXPRESSION_INTERFACE)
		do
			expression.accept (Current)
		end
		

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
