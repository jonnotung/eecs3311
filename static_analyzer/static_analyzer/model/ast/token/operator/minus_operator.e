note
	description: "Summary description for {MINUS_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MINUS_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE
--	CONSTANT_BINARY_CONSTRAINT[INTEGER_TYPE, INTEGER_TYPE]
feature
	token_value: STRING
		attribute Result := "-" end
end
