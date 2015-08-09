note
	description: "Summary description for {BOOLEAN_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_TYPE

inherit
	ASSIGNABLE_TYPE_INTERFACE
	NON_ENUMERABLE_TYPE_INTERFACE

create
	make

feature
	make(v: BOOLEAN)
		do
			value := v
		end

feature

	value: BOOLEAN

feature

	is_equal(other: like Current): BOOLEAN
		do
			Result := value ~ other.value
		end

	token_value: STRING
		attribute
			if value then
				Result := "True"
			else
				Result := "False"
			end
		end


end
