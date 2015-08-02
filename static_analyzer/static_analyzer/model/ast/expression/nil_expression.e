note
	description: "Summary description for {NIL_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIL_EXPRESSION

inherit
	CONSTANT_EXPRESSION
	redefine
		accept,
		value
	end

feature -- Visitor
	value: TYPE_INTERFACE
		attribute
			create {NIL_TYPE} Result
		end

	accept(visitor: EXPRESSION_VISITOR_INTERFACE)
		do
			visitor.visit_nil_expression (Current)
		end
end
