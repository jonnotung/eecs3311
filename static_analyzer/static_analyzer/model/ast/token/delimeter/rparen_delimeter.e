note
	description: "Summary description for {RPAREN_DELIMETER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	RPAREN_DELIMETER

inherit
	DELIMITER_INTERFACE

feature
    token_value: STRING
        attribute Result := ")" end

end
