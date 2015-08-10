note
	description: "Summary description for {SET_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_TYPE[G -> TYPE_INTERFACE]


inherit
	TYPE_INTERFACE
	ENUMERABLE_TYPE_INTERFACE


create
	make


feature
	make
		do
			create {ARRAYED_LIST[EXPRESSION_INTERFACE]} values.make (0)
		end


	new_cursor: INDEXABLE_ITERATION_CURSOR[EXPRESSION_INTERFACE]
		do
			Result := values.new_cursor
		end

	extend(v: EXPRESSION_INTERFACE)
		do
			values.extend (v)
		end
	count: INTEGER
		do
			Result := values.count
		end
	values: LIST[EXPRESSION_INTERFACE]

feature
	is_equal(other: like Current): BOOLEAN
		do
			Result := other.count = count and then other.values.for_all ((agent (exp: EXPRESSION_INTERFACE):BOOLEAN do
				Result := across values as value_iter  some exp ~ value_iter.item  end
			end))
		end
	token_value: STRING
		attribute Result := "{?}" end

end
