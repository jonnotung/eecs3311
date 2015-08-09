note
	description: "Summary description for {STATEMENT_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	STATEMENT_EXCEPTION

inherit
	DEVELOPER_EXCEPTION
	redefine
		tag
	end

feature
	tag: IMMUTABLE_STRING_32
		do Result := error_message end

feature {NONE}
	error_message: STRING
		deferred end
end
