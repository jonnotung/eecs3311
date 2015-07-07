note
	description: "Test the ACCOUNT class."
	author: "Raj Perera"
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_ACCOUNT

inherit
	ES_TEST

create

	make

feature -- Collect all tests for ACCOUNT

	make
			-- Add test cases for ACCOUNT.
	do

			-- Method tests
			add_boolean_case (agent test_account_creation)
			add_boolean_case (agent test_account_withdraw)

			-- Pre condition tests
			add_violation_case_with_tag ("less_than_balance", agent test_account_withdraw_precondition_is_not_too_weak)
			add_boolean_case (agent test_account_withdraw_precondition_is_not_too_strong)

			-- Post condition tests
			add_boolean_case (agent test_account_withdraw_postcondition_is_not_too_weak)

			-- Specification tests
			add_boolean_case (agent test_transaction_value_and_date)
		end

feature -- Test cases for ACCOUNT.

	test_account_creation: BOOLEAN
			-- Test the creation of an account.
		require

		local
			acc, acc2: ACCOUNT
		do

			comment ("t0:test the creation of an account.")
			-- instantiate a new ACCOUNT object using a creation instruction
			-- initial credit 10 for the new account credit
			create acc.make (10)
			Result := acc.balance = 0 and acc.credit = 10
			check Result end

			create acc2.make (1000) -- initialize an object
			Result := acc.balance = 0 and acc2.credit = 1000
			check Result end

		end

	test_account_withdraw: BOOLEAN
			-- Test the withdraw command of an account.
		local
			acc: ACCOUNT
		do
			comment ("t1:test the withdraw command of an account.")

			create acc.make (10)
			Result := acc.balance = 0 and acc.credit = 10
			check Result end

			acc.withdraw (5)
			Result := acc.balance = -5 and acc.credit = 10
		end

	test_account_withdraw_precondition_is_not_too_weak
			-- Test to determine if the precondition of withdraw method
			-- it too weak to cause invariant violations
		local
			acc: ACCOUNT
		do
			comment ("t2: withdraw precondition not too weak")
			create acc.make (10)

			acc.withdraw (11)

		end

	test_account_withdraw_precondition_is_not_too_strong: BOOLEAN
			-- Test to determine if the precondition of withdraw method
			-- it too strong to cause post-condition violations
		local
			acc: ACCOUNT
		do
			comment ("t3: withdraw precondition not too strong")
			create acc.make (10)

			acc.withdraw (10)

			Result:= acc.balance = -10 and acc.credit = 10

		end

	test_account_withdraw_postcondition_is_not_too_weak: BOOLEAN
			-- Test to determine if the postcondition of withdraw method
			-- it too weak to cause invariant violations
		local
			acc: ACCOUNT
		do
			comment ("t4: withdraw postcondition not too weak")
			create acc.make (10)

			acc.withdraw (6)
			Result := acc.balance = -6 and acc.credit = 10
			check Result end

		end

feature -- Specification Tests

	test_transaction_value_and_date: BOOLEAN
		local
			a: ACCOUNT
			w1,w2,w3: TRANSACTION
			today, tomorrow: DATE
			withdrawals_today: ARRAY[TRANSACTION]
		do
			comment ("t5: withdrawals today amounts only todays withdrawals")
			-- Initialize today
			create today.make_now

			-- Initialize tomorrow
			create tomorrow.make_now
			tomorrow.day_forth

			-- Initialize account
			create a.make (0)
			a.deposit (5000)

			-- Perform withdraw transactions
			a.withdraw (1000)
			a.withdraw (2000)
			a.withdraw_on_date (500, tomorrow)

			Result := a.balance = 1500 and a.withdrawals_today = 3000
			check Result end

			withdrawals_today := a.withdrawals_on (today)
			Result := withdrawals_today.count = 2
			check Result end

			create w1.make (1000, today)
			create w2.make (2000, today)
			create w3.make (500, tomorrow)

			Result:=
				withdrawals_today.has (w1) and
				withdrawals_today.has (w2) and
				not withdrawals_today.has (w3)
			check Result end



		end
end
