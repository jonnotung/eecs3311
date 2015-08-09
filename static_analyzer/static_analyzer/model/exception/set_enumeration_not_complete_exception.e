note
	description: "Summary description for {SET_ENUMERATION_NOT_COMPLETE_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_ENUMERATION_NOT_COMPLETE_EXCEPTION

inherit
	STATEMENT_EXCEPTION

create
	make

feature
	make
	do
		alternate_format := true
	end
feature

	error_message:STRING
		attribute Result := "Set enumeration must be non-empty" end

end
