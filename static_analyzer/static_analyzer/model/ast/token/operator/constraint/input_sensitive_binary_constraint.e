note
	description: "Summary description for {INPUT_SENSITIVE_BINARY_CONSTRAINT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INPUT_SENSITIVE_BINARY_CONSTRAINT[G -> TYPE_INTERFACE]

inherit
	BINARY_CONSTRAINT_INTERFACE
	UNARY_CONSTRAINT[G, G]
	rename
		validate as unary_validate
	undefine
		return_type
	end

feature
	validate(left, right: TYPE[TYPE_INTERFACE]): BOOLEAN
		do
			Result := unary_validate(left) and then unary_validate(right) and then
					  attached {like right} left and then attached {like left} right
		end

	return_type: TYPE[G]
		do
			Result := {G}
		end
end
