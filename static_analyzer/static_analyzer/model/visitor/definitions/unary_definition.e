note
	description: "Summary description for {UNARY_DEFINITION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNARY_DEFINITION[G -> TYPE_INTERFACE, H -> TYPE_INTERFACE]

inherit
	UNARY_DEFINITION_INTERFACE

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
