note
	description: "Summary description for {VISITABLE_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITABLE_INTERFACE

feature
	accept(visitor: VISITOR_INTERFACE)
		do
			visitor.visit (Current)
		end
end
