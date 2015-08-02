note
	description: "Summary description for {EQUAL_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EQUAL_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "=" end
end
