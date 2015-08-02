note
	description: "Summary description for {VISITABLE_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITABLE_INTERFACE[G]

feature
	accept(visitor: VISITOR_INTERFACE[G])
		deferred end
end
