note
	description: "Summary description for {NIL_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIL_TYPE

inherit
	TYPE_INTERFACE
	NON_ENUMERABLE_TYPE_INTERFACE

feature
	token_value: STRING
		attribute Result := "nil" end

end
