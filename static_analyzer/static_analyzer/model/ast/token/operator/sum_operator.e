note
	description: "Summary description for {SUM_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUM_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "+" end
end
