note
	description: "Summary description for {EXPRESSION_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION_INTERFACE

inherit
	VISITABLE_INTERFACE
	undefine
		is_equal
	end

feature
	is_equal(other: like Current): BOOLEAN
		deferred end



end
