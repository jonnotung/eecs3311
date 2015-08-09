note
	description: "Summary description for {STATEMENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STATEMENT

inherit
	ANY

create
	make

feature {NONE}
	make
		do
			create {NIL_EXPRESSION} expression
			create pretty_printer.make
			create assigner.make
			create set_closer.make
			create type_checker.make
			create evaluator.make
			create status.make_empty


			set_status(status_init)
			is_initialized := false
		end

feature -- Model Operations

	add_addition
		do
			perform_add_binary(create {PLUS_OPERATOR})
		end

	add_boolean_constant(c: BOOLEAN)
		do
			perform_add_constant(create {BOOLEAN_TYPE}.make(c))
		end

	add_conjunction
		do
			perform_add_binary (create {AND_OPERATOR})
		end

	add_difference
		do
			perform_add_binary (create {DIFFERENCE_OPERATOR})
		end

	add_disjunction
		do
			perform_add_binary (create {OR_OPERATOR})
		end

	add_division
		do
			perform_add_binary (create {DIVIDES_OPERATOR})
		end

	add_equality
		do
			perform_add_binary (create {EQUAL_OPERATOR})
		end

	add_generalized_and
		do
			perform_add_unary (create {FORALL_OPERATOR})
		end

	add_generalized_or
		do
			perform_add_unary (create {EXISTS_OPERATOR})
		end

	add_greater_than
		do
			perform_add_binary (create {GT_OPERATOR})
		end

	add_implication
		do
			perform_add_binary (create {IMPLIES_OPERATOR})
		end

	add_integer_constant(i: INTEGER)
		do
			perform_add_constant (create {INTEGER_TYPE}.make(i))
		end

	add_intersection
		do
			perform_add_binary (create {INTERSECT_OPERATOR})
		end

	add_less_than
		do
			perform_add_binary (create {LT_OPERATOR})
		end

	add_multiplication
		do
			perform_add_binary (create {TIMES_OPERATOR})
		end

	add_negation
		do
			perform_add_unary (create {NEGATION_OPERATOR})
		end

	add_negative
		do
			perform_add_unary (create {NEGATIVE_OPERATOR})
		end

	add_subtraction
		do
			perform_add_binary (create {MINUS_OPERATOR})
		end

	add_sum
		do
			perform_add_unary (create {SUM_OPERATOR})
		end

	add_union
		do
			perform_add_binary (create {UNION_OPERATOR})
		end

	start_set_enumeration
		do
			perform_add_set
		end

	end_set_enumeration
		do
			perform_set_close
		end

	evaluate
		do
			perform_evaluate
		end

	type_check
		do
			perform_type_check
		end
	reset
		do
			perform_reset
		end

	pretty_print: STRING
		do
		 	pretty_printer.dispatch (expression)
			Result := pretty_printer.out
		end


feature {NONE} -- Helpers

	perform_evaluate
		local
			retried: BOOLEAN
		do
			 -- Set evaluation -> no duplicates!
			 -- equality { 1, 2, 1} = { 2, 1 , 1} ==> TRUE!
			 -- (+ {1, 2, 1, 2}) ==> 3
			 --
			if not retried then
				type_checker.dispatch (expression)
				evaluator.dispatch (expression)
				pretty_printer.dispatch (evaluator.last_result)
				set_status(pretty_printer.out)
			end
		rescue
			retried := true
			handle_exception
			retry
		end

	perform_reset
		local
			retried: BOOLEAN
		do
			if not retried then
				if is_initialized then
					make
					set_status(status_success)
				else
					(create {INITIAL_EXPRESSION_RESET_EXCEPTION}).raise
				end
			end
		rescue
			retried := true
			handle_exception
			retry
		end

	perform_set_close
		local
			retried: BOOLEAN
		do
			if not retried then
				set_closer.dispatch (expression)
				set_status(status_success)
			end
		rescue
			retried := true
			handle_exception
			retry
		end

	perform_type_check
		local
			retried: BOOLEAN
		do
			if not retried then
				type_checker.dispatch (expression)
				set_status (pretty_print + " is type-correct.")
			end
		rescue
			retried := true
			if attached {TYPE_CHECK_EXCEPTION} (create {EXCEPTION_MANAGER}).last_exception then
				set_status (pretty_print + " is not type-correct.")
			else
				handle_exception
			end
			retry
		end

	perform_add_set
		do
			perform_add(create {SET_EXPRESSION}.make)
		end

	perform_add_constant(type: ASSIGNABLE_TYPE_INTERFACE)
		do
			perform_add(create {CONSTANT_EXPRESSION}.make (type))
		end

	perform_add_unary(operator: UNARY_OPERATOR_INTERFACE)
		do
			perform_add(create {UNARY_EXPRESSION}.make (operator))
		end

	perform_add_binary(operator: BINARY_OPERATOR_INTERFACE)
		do
			perform_add(create {BINARY_EXPRESSION}.make (operator))
		end

	perform_add(exp: EXPRESSION_INTERFACE)
		local
			retried: BOOLEAN
		do
			if not retried then
				if not is_initialized then
					expression := exp
					is_initialized := true
				else
					assigner.set_to_assign (exp)
					assigner.dispatch (expression)
				end
				set_status(status_success)
			end
		rescue
			retried := true
			handle_exception
			retry
		end



	set_status(msg: STRING)
		do
			status := msg
		end

feature {NONE} -- Exception Handling
	handle_exception
		local
			status_msg: STRING
			exception_manager: EXCEPTION_MANAGER
		do
			create exception_manager
			status_msg := "Unknown error"

			if attached {STATEMENT_EXCEPTION} exception_manager.last_exception as exception then
				status_msg := exception.tag.out
			--else
				-- print(raw_exception.tag + "%N" + raw_exception.trace)	
			end

			set_status("Error (" + status_msg + ").")
		end


feature -- Output

	status: STRING assign set_status

feature {NONE}

	status_init: STRING
		attribute Result := "Expression is initialized." end

	status_success: STRING
		attribute Result := "OK." end

	is_initialized: BOOLEAN
	expression: EXPRESSION_INTERFACE
	pretty_printer: PRETTY_PRINT_EXPRESSION_VISITOR
	assigner: ASSIGN_EXPRESSION_VISITOR
	set_closer: CLOSE_SET_EXPRESSION_VISITOR
	type_checker: TYPE_CHECK_EXPRESSION_VISITOR
	evaluator: EVALUATE_EXPRESSION_VISITOR

end
