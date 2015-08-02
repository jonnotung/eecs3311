note
	description: "Summary description for {UNION_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNION_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "\/" end
end
