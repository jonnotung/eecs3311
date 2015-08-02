note
	description: "Summary description for {TOKEN_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TOKEN_INTERFACE

inherit
	ANY
	redefine
		out
	end
	
feature

	token_value: STRING
		deferred end

	out: STRING
		do
			Result := token_value.out
		end
end
