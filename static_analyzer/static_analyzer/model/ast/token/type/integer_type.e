note
	description: "Summary description for {INTEGER_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_TYPE

inherit
	ASSIGNABLE_TYPE_INTERFACE
	NON_ENUMERABLE_TYPE_INTERFACE

create
	make

feature
	make(v: INTEGER)
		do
			value := v
		end

feature
	value: INTEGER

feature

	is_equal(other: like Current): BOOLEAN
		do
			Result := value ~ other.value
		end
	token_value: STRING
		attribute Result := value.out end
end
