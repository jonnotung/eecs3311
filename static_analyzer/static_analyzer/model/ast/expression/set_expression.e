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
			create type.make
		end


feature
	add(element: EXPRESSION_INTERFACE)
		do
			type.extend (element)
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

	force_close
		do
			closed := TRUE
		ensure
			closed: closed
		end

	count: INTEGER
		do
			Result := type.count
		end

feature
	is_equal(other: like Current): BOOLEAN
		do
			Result := other.closed = closed and then other.type ~ type
		end
feature
	new_cursor: SET_EXPRESSION_CURSOR[EXPRESSION_INTERFACE]
		do
			Result := create {SET_EXPRESSION_CURSOR[EXPRESSION_INTERFACE]}.make (type.new_cursor)
		end


feature
	type: SET_TYPE[TYPE_INTERFACE] 

	closed: BOOLEAN

	can_close: BOOLEAN
		do
			Result := type.count > 0
		end




end
