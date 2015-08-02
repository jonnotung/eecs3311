note
	description: "Summary description for {LT_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LT_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "<" end
end
