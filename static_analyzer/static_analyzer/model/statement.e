note
	description: "Summary description for {STATEMENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STATEMENT

inherit
	ANY
	redefine
		out
	end

create
	make

feature {NONE}
	make
		do
			create {NIL_EXPRESSION} expression
			create pretty_printer.make
			create assigner.make
			is_initialized := false
		end

feature -- Model Operations

	add_addition
		do
			add_binary(create {PLUS_OPERATOR})
		end

	add_boolean_constant(c: BOOLEAN)
		do
			add_constant(create {BOOLEAN_TYPE}.make(c))
		end

	add_conjunction
		do
			add_unary (create {FORALL_OPERATOR})
		end

	add_difference
		do
			add_binary (create {DIFFERENCE_OPERATOR})
		end

	add_disjunction
		do
			add_unary (create {EXISTS_OPERATOR})
		end

	add_division
		do
			add_binary (create {DIVIDES_OPERATOR})
		end

	add_equality
		do
			add_binary (create {EQUAL_OPERATOR})
		end

	add_generalized_and
		do
			add_binary (create {AND_OPERATOR})
		end

	add_generalized_or
		do
			add_binary (create {OR_OPERATOR})
		end

	add_greater_than
		do
			add_binary (create {GT_OPERATOR})
		end

	add_implication
		do
			add_binary (create {IMPLIES_OPERATOR})
		end

	add_integer_constant(i: INTEGER)
		do
			add_constant (create {INTEGER_TYPE}.make(i))
		end

	add_intersection
		do
			add_binary (create {INTERSECT_OPERATOR})
		end

	add_less_than
		do
			add_binary (create {LT_OPERATOR})
		end

	add_multiplication
		do
			add_binary (create {TIMES_OPERATOR})
		end

	add_negation
		do
			add_unary (create {NEGATION_OPERATOR})
		end

	add_negative
		do
			add_unary (create {NEGATIVE_OPERATOR})
		end

	add_subtraction
		do
			add_binary (create {MINUS_OPERATOR})
		end

	add_sum
		do
			add_unary (create {SUM_OPERATOR})
		end

	add_union
		do
			add_binary (create {UNION_OPERATOR})
		end

	add_start_set_enumeration
		do
			-- TODO
		end

	add_end_set_enumeration
		do
			-- TODO
		end

	evaluate
		do
			-- TODO
		end

	type_check
		do
			-- TODO
		end
	reset
		do
			make
		end

	pretty_print: STRING
		do
			pretty_printer.visit (expression)
			Result := pretty_printer.out
		end

	default_update
		do

		end

feature {NONE} -- Helpers

	add_constant(type: ASSIGNABLE_TYPE_INTERFACE)
		do
			add(create {CONSTANT_EXPRESSION}.make (type))
		end
	add_unary(operator: UNARY_OPERATOR_INTERFACE)
		do
			add(create {UNARY_EXPRESSION}.make (operator))
		end

	add_binary(operator: BINARY_OPERATOR_INTERFACE)
		do
			add(create {BINARY_EXPRESSION}.make (operator))
		end

	add(exp: EXPRESSION_INTERFACE)
		do
			if not is_initialized then
				expression := exp
				is_initialized := true
			else
				assigner.set_to_assign (exp)
				assigner.visit (expression)
			end
		end
feature -- Output
	out: STRING
		do
			Result := pretty_print
		end
feature {NONE}
	is_initialized: BOOLEAN
	expression: EXPRESSION_INTERFACE
	pretty_printer: PRETTY_PRINT_EXPRESSION_VISITOR
	assigner: ASSIGN_EXPRESSION_VISITOR
end
