note
	description: "Summary description for {TIMES_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TIMES_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "*" end
end
