note
	description: "Summary description for {NEGATION_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION_OPERATOR

inherit
	UNARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "!" end
end
