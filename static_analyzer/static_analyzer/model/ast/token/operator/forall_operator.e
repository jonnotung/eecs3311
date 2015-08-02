note
	description: "Summary description for {FORALL_OPERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FORALL_OPERATOR

inherit
	UNARY_OPERATOR_INTERFACE

feature
	token_value: STRING
		attribute Result := "&&" end

end
