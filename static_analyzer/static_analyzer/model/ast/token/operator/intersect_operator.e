note
	description: "Summary description for {INTERSECT_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTERSECT_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE
--	SET_BINARY_CONSTRAINT[INTEGER_TYPE, SET_TYPE[INTEGER_TYPE]]

feature
	token_value: STRING
		attribute Result := "/\" end
end
