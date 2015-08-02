note
	description: "Summary description for {GT_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GT_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := ">" end
end
