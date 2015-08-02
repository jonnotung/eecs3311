note
	description: "Summary description for {MINUS_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MINUS_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "-" end
end
