note
	description: "Summary description for {TYPE_CHECK_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECK_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Expression is not type-correct" end

end
