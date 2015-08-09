note
	description: "Summary description for {EXPRESSION_INCOMPLETE_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EXPRESSION_INCOMPLETE_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Expression is not yet fully specified" end
end
