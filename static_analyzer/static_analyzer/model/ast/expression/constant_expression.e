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
			set_type (tv)
		end

feature

	type: TYPE_INTERFACE assign set_type

feature

	is_equal(other: like Current): BOOLEAN
		do
			Result := attached {like type} other.type and then type ~ other.type
		end

feature {NONE}

	set_type(v: TYPE_INTERFACE)
		do
			type := v
		end
end
