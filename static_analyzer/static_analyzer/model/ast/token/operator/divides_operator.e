note
	description: "Summary description for {DIVIDES_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIVIDES_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE
	-- Constraint

feature
	token_value: STRING
		attribute Result := "/" end
end
