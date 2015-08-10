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
	undefine
		is_equal
	end

create
	make

feature
	make
		do
			closed := FALSE
			create value.make
		end


feature
	add(element: EXPRESSION_INTERFACE)
		do
			value.extend (element)
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
			Result := value.count
		end

feature
	is_equal(other: like Current): BOOLEAN
		do
			Result := other.closed = closed and then other.value ~ value
		end
feature
	new_cursor: SET_EXPRESSION_CURSOR[EXPRESSION_INTERFACE]
		do
			Result := create {SET_EXPRESSION_CURSOR[EXPRESSION_INTERFACE]}.make (value.new_cursor)
		end


feature
	closed: BOOLEAN

	can_close: BOOLEAN
		do
			Result := value.count > 0
		end

	value: SET_TYPE[TYPE_INTERFACE]


end
