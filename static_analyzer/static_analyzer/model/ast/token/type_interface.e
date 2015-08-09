note
	description: "Summary description for {TYPE_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TYPE_INTERFACE

inherit
	TOKEN_INTERFACE
	undefine
		is_equal
	end

feature
	is_equal(other: like Current): BOOLEAN
		deferred end
end
