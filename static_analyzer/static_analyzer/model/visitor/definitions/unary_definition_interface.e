note
	description: "Summary description for {UNARY_DEFINITION_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	UNARY_DEFINITION_INTERFACE

inherit
	DEFINITION_INTERFACE

feature
	validate(type: TYPE[TYPE_INTERFACE]):BOOLEAN
		deferred end

end
