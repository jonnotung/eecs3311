note
	description: "Summary description for {CONSTRAINT_RESOLVER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONSTRAINT_RESOLVER[H -> HASHABLE]


feature
	--type_definitions: HASH_TABLE[OPERATOR_INTERFACE, H ]
	resolve(operator: OPERATOR_INTERFACE)
	do

--		if attached {AND_OPERATOR} then

--        elseif attached {DIFFERENCE_OPERATOR} then
--        elseif attached {DIVIDES_OPERATOR} then
--        elseif attached {EQUAL_OPERATOR} then
--        elseif attached {EXISTS_OPERATOR} then
--        elseif attached {FORALL_OPERATOR} then
--        elseif attached {GT_OPERATOR} then
--        elseif attached {IMPLIES_OPERATOR} then
--        elseif attached {INTERSECT_OPERATOR} then
--        elseif attached {LT_OPERATOR} then
--        elseif attached {MINUS_OPERATOR} then
--        elseif attached {NEGATION_OPERATOR} then
--        elseif attached {NEGATIVE_OPERATOR} then
--        elseif attached {OR_OPERATOR} then
--        elseif attached {PLUS_OPERATOR} then
--        elseif attached {SUM_OPERATOR} then
--        elseif attached {TIMES_OPERATOR} then
--        elseif attached {UNION_OPERATOR} then
--        else

--		end

	end
--	
--	binary_resolve(operator: BINARY_OPERATOR_INTERFACE): BINARY_CONSTRAINT_INTERFACE
--		do

--		end

--	unary_resolve(operator: UNARY_OPERATOR_INTERFACE): UNARY_CONSTRAINT_INTERFACE
--		do

--		end


end
