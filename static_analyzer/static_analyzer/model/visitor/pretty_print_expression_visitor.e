note
	description: "Summary description for {PRETTY_PRINT_EXPRESSION_VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRETTY_PRINT_EXPRESSION_VISITOR

inherit
	EXPRESSION_VISITOR_INTERFACE
	redefine
		out
	end

create
	make

feature
	make
		do
			create s.make_empty
			found_next_input := false
		end

feature {EXPRESSION_INTERFACE}
	visit_constant_expression(expression: CONSTANT_EXPRESSION)
		do
			s := s + expression.type.out
		end

	visit_binary_expression(expression: BINARY_EXPRESSION)
		do
			s := s + "("
			expression.left.accept(Current)
			s := s + " " + expression.operator.out + " "
			expression.right.accept(Current)
			s := s + ")"
		end

	visit_unary_expression(expression: UNARY_EXPRESSION)
		do
			s := s + "("
			s := s + expression.operator.out + " "
			expression.exp.accept(Current)
			s := s + ")"
		end

	visit_nil_expression(expression: NIL_EXPRESSION)
		local
			to_append: STRING
		do
			if not found_next_input then
				to_append := next_input_token
				found_next_input := true
			else
				to_append := expression.value.out
			end
			s := s + to_append
		end

	visit_set_expression(expression: SET_EXPRESSION)
		do
			s := s + "{"
			across expression as iterator
			loop
				iterator.item.accept (Current)
				if not iterator.is_last then
					s := s + ", "
				end
			end
			if not expression.closed and not found_next_input then
				if expression.count > 0 then
					s := s + ", "
				end
				s := s + next_input_token
				found_next_input := True
			end
			s := s + "}"
		end
feature
	out: STRING
		do
			create Result.make_from_string (s)
		end

feature {NONE}
	s: STRING
	found_next_input: BOOLEAN
	next_input_token: STRING
		attribute Result := "?" end
end
