note
	description: "Summary description for {DIVISION_BY_ZERO_EXCEPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIVISION_BY_ZERO_EXCEPTION

inherit
	STATEMENT_EXCEPTION

feature
	error_message:STRING
		attribute Result := "Divisor is zero" end
end
