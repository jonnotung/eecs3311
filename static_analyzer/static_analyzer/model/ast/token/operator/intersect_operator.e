note
	description: "Summary description for {INTERSECT_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTERSECT_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "/\" end
end
