note
	description: "Summary description for {IMPLIES_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	IMPLIES_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "=>" end
end
