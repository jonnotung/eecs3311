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

feature -- Visitor

	accept(visitor: EXPRESSION_VISITOR_INTERFACE)
		do
			visitor.visit_constant_expression (Current)
		end
	value: TYPE_INTERFACE assign set_value

feature {NONE}



	set_value(v: TYPE_INTERFACE)
		do
			value := v
		end
end
