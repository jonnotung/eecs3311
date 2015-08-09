note
	description: "Summary description for {UNHANDLED_EXPRESSION_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNHANDLED_EXPRESSION_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message: STRING
		do
			Result := "Encountered an unknown expression."
		end
end
