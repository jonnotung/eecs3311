note
	description: "Summary description for {SET_EXPRESSION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_EXPRESSION_CURSOR[G]

inherit
	ITERATION_CURSOR[G]

create {SET_EXPRESSION}
	make

feature {SET_EXPRESSION}
	make(c: INDEXABLE_ITERATION_CURSOR[G])
		do
			cursor := c
		end

feature

	after: BOOLEAN
		do
			Result := cursor.after
		end

	forth
		do
			cursor.forth
		end

	item: G
		do
			Result := cursor.item
		end

	is_last: BOOLEAN
		do
			Result := cursor.is_last
		end

feature {NONE}
	cursor: INDEXABLE_ITERATION_CURSOR[G]
end
