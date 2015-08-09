note
	description: "Summary description for {VISITOR_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR_INTERFACE

feature
	make
		deferred end

feature 
	dispatch(visitable: VISITABLE_INTERFACE)
		do
			make -- Initialize
			visitable.accept (Current)
		end

feature {VISITABLE_INTERFACE}
	visit(visitable: VISITABLE_INTERFACE)
		deferred end

end
