note
	description: "[
		A class that represents a bank account that allows customers to deposit and withdraw.
		R1: Account balances never exceed the credit limit
		R2: Clients can deposit and withdraw dollars
		R3: Tellers (but not clients) can date a dollar deposit or withdrawal differently than today (e.g. as "tomorrow")
		R4: Tellers (but not clients) can access withdrawals on a given date
		R5: Maximum total withdrawal per day is $5000
		R6: Clients can access the total amount of dollars deposited and dollars withdrawn from their account
	]"
	author: "Raj Perera"
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT

create
	make

feature -- Attributes

	balance : INTEGER
		-- Calculate balance by iterating depostis and withdraws list
		do
			across deposits as deposit_cursor
			loop

				Result := Result + deposit_cursor.item.value
			end

			across withdraws as withdraws_curor
			loop
				Result := Result - withdraws_curor.item.value
			end
			if attached {LINKED_LIST[TRANSACTION]} withdraws as wd then
				print ("OK")
			end
--			
--			from
--				deposits.start
--			until
--				deposits.after
--			loop
--				Result := Result + deposits.item.value
--				deposits.forth
--			end

--			from
--				withdraws.start
--			until
--				withdraws.after
--			loop
--				Result := Result - withdraws.item.value
--				withdraws.forth
--			end
		end
	credit  : INTEGER

	deposits : LIST[TRANSACTION]
	withdraws: LIST[TRANSACTION]

feature -- Constructor

	make (a_credit: INTEGER)
			-- Initialize an account with 'a_credit' for credit and '0' for balance
		do
			credit := a_credit
			create {LINKED_LIST[TRANSACTION]} deposits.make
			create {LINKED_LIST[TRANSACTION]} withdraws.make
		ensure
			zero_balance:
				balance = 0
			credits_properly_set:
				credit = a_credit
			empty_deposits:
				deposits.is_empty
			empty_withdraws:
				withdraws.count = 0
		end

feature -- Commands

	withdraw (a: INTEGER)
			-- Withdraw an amount 'a' from current account.
		require
			not_too_small:
				a > 0
			less_than_balance:
				a <= balance + credit
		local
			t: TRANSACTION
			d: DATE
		do
			create d.make_now
			withdraw_on_date (a, d)
		ensure
			balance_set:
				balance = old balance - a
			credit_set:
				credit = old credit
			withdraws_extended:
				withdraws.count = old withdraws.count + 1
			deposits_not_changed:
				deposits.count = old deposits.count
			date_set:
				withdraws.last.date ~ create {DATE}.make_now
		end

	withdraw_on_date (a: INTEGER; d: DATE)
			-- Withdraw an amount 'a' from current account.
		require
			not_too_small:
				a > 0
			less_than_balance:
				a <= balance + credit
		local
			t: TRANSACTION
		do
			create t.make (a, d)
			withdraws.extend (t)
		ensure
			balance_set:
				balance = old balance - a
			credit_set:
				credit = old credit
			withdraws_extended:
				withdraws.count = old withdraws.count + 1
			deposits_not_changed:
				deposits.count = old deposits.count
			date_set:
				withdraws.last.date ~ d
		end

	deposit (a: INTEGER)
			-- Deposit an amount 'a' to current account on date 'd'.
		require
			not_too_small:
				a > 0

		local
			t: TRANSACTION
			d: DATE
		do
			create d.make_now
			deposit_on_date (a, d)
		ensure
			balance_set:
				balance = old balance + a
			credit_set:
				credit = old credit
			deposits_extended:
				deposits.count = old deposits.count + 1
			withdraws_not_changed:
				withdraws.count = old withdraws.count
			date_set:
				deposits.last.date ~ create {DATE}.make_now
		end

	deposit_on_date (a: INTEGER; d: DATE)
			-- Deposit an amount 'a' to current account on date 'd'.
		require
			not_too_small:
				a > 0

		local
			t: TRANSACTION
		do
			create t.make (a, d)
			deposits.extend (t)
		ensure
			balance_set:
				balance = old balance + a
			credit_set:
				credit = old credit
			deposits_extended:
				deposits.count = old deposits.count + 1
			withdraws_not_changed:
				withdraws.count = old withdraws.count
			date_set:
				deposits.last.date ~ d
		end

feature -- Queries

	withdrawals_on (d: DATE): ARRAY[TRANSACTION]
			-- Return a list of deposits for the day 'd'
		local
			t: TRANSACTION
			i: INTEGER
		do
			create Result.make_empty
			Result.compare_objects
			from
				i := Result.lower
				withdraws.start
			until
				withdraws.after
			loop
				t := withdraws.item
				if t.date ~ d then
					Result.force (t, i)
					i := i + 1
				end
				withdraws.forth
			end
		ensure
			-- forall tr: withdrawals @ tr.date = d iff Result.has(tr)
		end

	withdrawals_today: INTEGER
			-- Return the sum of withdrawals performed today
		local
			i : INTEGER
			t : TRANSACTION
			ta: ARRAY[TRANSACTION]
			d : DATE
		do
			Result := 0
			create d.make_now
			ta := withdrawals_on(d)
			from
				i := ta.lower
			until
				i > ta.upper
			loop
				t := ta[i]

				i := i + 1
				Result := Result + t.value
			end
		ensure
			state_unchanged:
				balance = old balance and credit = old credit
		end
invariant

	credit_non_negative:
		credit >= 0

	balance_not_exceeding_credit:
		balance + credit >= 0
end
