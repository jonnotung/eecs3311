note
	description: "Summary description for {BINARY_DEFINITION_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BINARY_DEFINITION_INTERFACE

inherit
	DEFINITION_INTERFACE

feature
	validate(left, right: TYPE[TYPE_INTERFACE]): BOOLEAN
		deferred end

end
