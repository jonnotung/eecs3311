note
	description: "Summary description for {INITIAL_EXPRESSION_RESET_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INITIAL_EXPRESSION_RESET_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Initial expression cannot be reset" end

end
