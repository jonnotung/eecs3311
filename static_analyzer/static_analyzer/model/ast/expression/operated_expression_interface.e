note
	description: "Summary description for {OPERATED_EXPRESSION_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	OPERATED_EXPRESSION_INTERFACE

inherit
	EXPRESSION_INTERFACE

feature
	operator: OPERATOR_INTERFACE
		deferred end
end
