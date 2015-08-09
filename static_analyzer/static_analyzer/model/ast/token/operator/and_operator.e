note
	description: "Summary description for {AND_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	AND_OPERATOR

inherit
	BINARY_OPERATOR_INTERFACE




feature
	token_value: STRING
		attribute Result := "&&" end

end
