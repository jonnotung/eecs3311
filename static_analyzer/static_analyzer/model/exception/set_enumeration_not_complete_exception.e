note
	description: "Summary description for {SET_ENUMERATION_NOT_COMPLETE_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_ENUMERATION_NOT_COMPLETE_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Set enumeration must be non-empty" end

end
