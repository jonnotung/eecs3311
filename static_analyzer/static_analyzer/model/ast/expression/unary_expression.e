note
	description: "Summary description for {UNARY_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNARY_EXPRESSION

inherit
	EXPRESSION_INTERFACE


create
	make

feature -- Constructor

	make(op: UNARY_OPERATOR_INTERFACE)
		do
			operator := op
		end

feature -- Visitor

	accept(visitor: EXPRESSION_VISITOR_INTERFACE)
		do
			visitor.visit_unary_expression (Current)
		end

feature -- Setters


	set_expression(ex: EXPRESSION_INTERFACE)
		do
			exp := ex
		end
feature

	operator: UNARY_OPERATOR_INTERFACE

	exp: EXPRESSION_INTERFACE assign set_expression
		attribute create {NIL_EXPRESSION} Result end




end
