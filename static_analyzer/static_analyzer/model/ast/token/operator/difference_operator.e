note
	description: "Summary description for {DIFFERENCE_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIFFERENCE_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "\" end
end
