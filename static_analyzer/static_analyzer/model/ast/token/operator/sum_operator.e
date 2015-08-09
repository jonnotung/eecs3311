note
	description: "Summary description for {SUM_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUM_OPERATOR

inherit
	UNARY_OPERATOR_INTERFACE
--	SET_UNARY_CONSTRAINT[INTEGER_TYPE, INTEGER_TYPE]

feature
	token_value: STRING
		attribute Result := "+" end
end
