note
	description: "Summary description for {BINARY_CONSTRAINT_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BINARY_CONSTRAINT_INTERFACE

inherit
	CONSTRAINT_INTERFACE

feature
	validate(left, right: TYPE[TYPE_INTERFACE]): BOOLEAN
		deferred end

end
