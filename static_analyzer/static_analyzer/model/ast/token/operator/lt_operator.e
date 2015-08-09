note
	description: "Summary description for {LT_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LT_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE
--	CONSTANT_BINARY_CONSTRAINT[INTEGER_TYPE, BOOLEAN_TYPE]

feature
	token_value: STRING
		attribute Result := "<" end
end
