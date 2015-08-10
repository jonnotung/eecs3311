note
	description: "Summary description for {CONSTANT_UNARY_CONSTRAINT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONSTANT_UNARY_CONSTRAINT[G -> TYPE_INTERFACE, H -> TYPE_INTERFACE]

inherit
	UNARY_CONSTRAINT_INTERFACE

feature
	validate(type: TYPE[TYPE_INTERFACE]): BOOLEAN
		do
			Result := attached {TYPE[G]} type
		end

	return_type: TYPE[H]
		do
			Result := {H}
		end


end
