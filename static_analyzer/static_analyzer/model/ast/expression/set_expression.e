note
	description: "Summary description for {SET_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_EXPRESSION

inherit
	EVALUATED_EXPRESSION_INTERFACE
	ITERABLE[EXPRESSION_INTERFACE]

create
	make

feature
	make
		do
			closed := FALSE
			create {ARRAYED_LIST[EXPRESSION_INTERFACE]} elements.make (0)
			add(create {NIL_EXPRESSION})
		end

feature -- Visitor

	accept(visitor: EXPRESSION_VISITOR_INTERFACE)
		do
			visitor.visit_set_expression (Current)
		end

feature
--	add(element: EXPRESSION_INTERFACE)
--		require
--			not_closed: not closed
--		local
--			new_elements: like elements
--		do
--			new_elements := strip_last_element(elements)

--			new_elements.extend (element)
--			new_elements.extend (create {NIL_EXPRESSION})
--			elements := new_elements
--		end
	add(element: EXPRESSION_INTERFACE)
		do
			elements.extend (element)
		end

	close
		require
			not_closed: not closed
			closable: can_close
		do
			closed := TRUE
		ensure
			closed: closed
		end

	count: INTEGER
		do
			Result := elements.count
		end
feature
	new_cursor: SET_EXPRESSION_CURSOR
		do
			Result := create {SET_EXPRESSION_CURSOR}.make (elements.new_cursor)
		end


feature
	closed: BOOLEAN

	can_close: BOOLEAN
		do
			Result := elements.count > 0
		end
feature {NONE}
	elements: LIST[EXPRESSION_INTERFACE]
	strip_last_element(e: like elements): like elements
		do
			create {ARRAYED_LIST[EXPRESSION_INTERFACE]} Result.make (0)

			across e.index_set.lower |..| (e.index_set.upper - 1)
			as
				idx_iter
			loop
				Result.extend (e.at (idx_iter.item))
			end
		end

end
