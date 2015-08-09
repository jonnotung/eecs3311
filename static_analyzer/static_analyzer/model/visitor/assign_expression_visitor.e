note
	description: "Summary description for {ASSIGN_EXPRESSION_VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ASSIGN_EXPRESSION_VISITOR


inherit
	EXPRESSION_VISITOR_INTERFACE


create
	make

feature
	-- Stub
	make
		do

		end


feature

	to_assign: EXPRESSION_INTERFACE assign set_to_assign
		attribute create {NIL_EXPRESSION} Result end

	set_to_assign(assignor: EXPRESSION_INTERFACE)
		do
			to_assign := assignor
		end
feature {EXPRESSION_INTERFACE}


	visit_constant_expression(expression: CONSTANT_EXPRESSION)

		do
			(create {NO_VALID_ASSIGNEE_EXCEPTION}).raise
		end

	visit_binary_expression(expression: BINARY_EXPRESSION)
		local
			left_failed: BOOLEAN
			target_expression: EXPRESSION_INTERFACE
		do

			if left_failed then
				if attached {NIL_EXPRESSION} expression.right then
					expression.right := to_assign.deep_twin
				else
					expression.right.accept (Current)
				end

			else
				if attached {NIL_EXPRESSION} expression.left then
					expression.left := to_assign.deep_twin
				else
					expression.left.accept (Current)
				end
			end


		rescue
			if attached {NO_VALID_ASSIGNEE_EXCEPTION} (create {EXCEPTION_MANAGER}).last_exception as lx then
				if not left_failed then
					left_failed := true
					retry
				else
					lx.raise
				end
			end
		end

	visit_unary_expression(expression: UNARY_EXPRESSION)
		do
			if attached {NIL_EXPRESSION} expression.exp then
				expression.exp := to_assign.deep_twin
			else
				expression.exp.accept (Current)
			end
		end

	visit_nil_expression(expression: NIL_EXPRESSION)
		do
			check False end
			-- We should really crash at this point
		end

	visit_set_expression(expression: SET_EXPRESSION)
		do
			if not expression.closed then
				if not across expression as iterator
					some
						each_set_item_assigned(iterator.item)
					end	then
					expression.add (to_assign.deep_twin)
				end
			else
				(create {NO_VALID_ASSIGNEE_EXCEPTION}).raise
			end
		end

feature -- Helpers
	each_set_item_assigned(expression: EXPRESSION_INTERFACE): BOOLEAN
		local
			retried: BOOLEAN
		do
			if not retried then
				expression.accept(Current)
			end
			Result := not retried
		rescue
			if attached {NO_VALID_ASSIGNEE_EXCEPTION} (create {EXCEPTION_MANAGER}).last_exception then
				retried := true
				retry
			end
		end
end
