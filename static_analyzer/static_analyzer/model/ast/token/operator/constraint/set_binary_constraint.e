note
	description: "Summary description for {SET_BINARY_CONSTRAINT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_BINARY_CONSTRAINT[G -> TYPE_INTERFACE, H -> TYPE_INTERFACE]

inherit
	BINARY_CONSTRAINT_INTERFACE
	SET_UNARY_CONSTRAINT[G, H]
	rename
		validate as unary_validate
	end

feature
	validate(left, right: TYPE[TYPE_INTERFACE]): BOOLEAN
		do
			Result := unary_validate(left) and then unary_validate(right) and then left ~ right
		end
end
