note
	description: "Summary description for {CONSTANT_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONSTANT_EXPRESSION

inherit
	EVALUATED_EXPRESSION_INTERFACE

create
	make

feature

	make(tv: TYPE_INTERFACE)
		do
			set_value (tv)
		end

feature

	value: TYPE_INTERFACE assign set_value

feature

	is_equal(other: like Current): BOOLEAN
		do
			Result := attached {like value} other.value and then value ~ other.value
		end

feature {NONE}



	set_value(v: TYPE_INTERFACE)
		do
			value := v
		end
end
