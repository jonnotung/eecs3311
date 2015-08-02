note
	description: "Summary description for {NEGATIVE_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATIVE_OPERATOR

inherit
	UNARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "-" end
end
