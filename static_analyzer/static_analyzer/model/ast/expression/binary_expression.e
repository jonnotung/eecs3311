note
	description: "Summary description for {BINARY_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BINARY_EXPRESSION

inherit
	EXPRESSION_INTERFACE

create
	make

feature -- Constructor

	make(op: BINARY_OPERATOR_INTERFACE)
		do
			operator := op
			create {NIL_EXPRESSION} left
			create {NIL_EXPRESSION} right
		end

feature -- Setters

	set_left(ex: EXPRESSION_INTERFACE)
		do
			left := ex
		end

	set_right(ex: EXPRESSION_INTERFACE)
		do
			right := ex
		end

feature -- Deferred Implementations

	is_equal(other: like Current): BOOLEAN
		do
			Result := left ~ other.left and right ~ other.right and then
					 attached {like operator} other.operator
		end



feature

	operator: BINARY_OPERATOR_INTERFACE

	left: EXPRESSION_INTERFACE assign set_left


	right: EXPRESSION_INTERFACE assign set_right





end
