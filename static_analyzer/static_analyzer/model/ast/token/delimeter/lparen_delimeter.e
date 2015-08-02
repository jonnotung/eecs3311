note
	description: "Summary description for {LPAREN_DELIMETER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LPAREN_DELIMETER

inherit
	DELIMITER_INTERFACE

feature
    token_value: STRING
        attribute Result := "(" end

end
