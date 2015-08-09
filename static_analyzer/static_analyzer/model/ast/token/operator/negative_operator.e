note
	description: "Summary description for {NEGATIVE_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATIVE_OPERATOR

inherit
	UNARY_OPERATOR_INTERFACE
--	CONSTANT_UNARY_CONSTRAINT[INTEGER_TYPE, INTEGER_TYPE]
feature
	token_value: STRING
		attribute Result := "-" end
end
