note
	description: "Summary description for {UNARY_CONSTRAINT_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	UNARY_CONSTRAINT_INTERFACE

inherit
	CONSTRAINT_INTERFACE

feature
	validate(type: TYPE[TYPE_INTERFACE]):BOOLEAN
		deferred end

end
