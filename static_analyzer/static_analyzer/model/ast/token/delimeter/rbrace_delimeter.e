note
	description: "Summary description for {RBRACE_DELIMETER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	RBRACE_DELIMETER

inherit
	DELIMITER_INTERFACE

feature
    token_value: STRING
        attribute Result := "}" end

end
