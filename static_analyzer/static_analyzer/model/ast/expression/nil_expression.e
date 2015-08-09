note
	description: "Summary description for {NIL_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIL_EXPRESSION

inherit
	EXPRESSION_INTERFACE

feature -- Visitor
	value: TYPE_INTERFACE
		attribute
			create {NIL_TYPE} Result
		end

feature

	is_equal(other: like Current): BOOLEAN
		do
			Result := attached {NIL_TYPE} other
		end

end
