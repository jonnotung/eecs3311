note
	description: "Summary description for {SET_ENUMERATION_NOT_SPECIFIED_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_ENUMERATION_NOT_SPECIFIED_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Set enumeration is not being specified" end
end
