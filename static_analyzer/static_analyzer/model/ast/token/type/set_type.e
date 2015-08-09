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


feature {SET_EXPRESSION}
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
	token_value: STRING
		attribute Result := "{?}" end

end
