note
	description: "Summary description for {COMMA_DELIMETER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMA_DELIMETER

inherit
	DELIMITER_INTERFACE

feature
    token_value: STRING
        attribute Result := "," end

end
