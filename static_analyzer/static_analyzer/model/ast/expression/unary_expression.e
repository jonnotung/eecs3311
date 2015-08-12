note
	description: "Summary description for {UNARY_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNARY_EXPRESSION

inherit
	OPERATED_EXPRESSION_INTERFACE


create
	make

feature -- Constructor

	make(op: UNARY_OPERATOR_INTERFACE)
		do
			operator := op
		end

feature -- Setters


	set_expression(ex: EXPRESSION_INTERFACE)
		do
			exp := ex
		end
feature -- Impl

	is_equal(other: like Current): BOOLEAN
		do
			Result := exp ~ other.exp and then
					 attached {like operator} other.operator
		end

feature

	operator: UNARY_OPERATOR_INTERFACE

	exp: EXPRESSION_INTERFACE assign set_expression
		attribute create {NIL_EXPRESSION} Result end




end
