note
	description: "Summary description for {EXPRESSION_FULLY_SPECIFIED_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EXPRESSION_FULLY_SPECIFIED_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Expression is already fully specified" end
end
