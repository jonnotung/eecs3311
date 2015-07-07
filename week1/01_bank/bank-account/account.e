note
	description: "[
		bank accounts for tracking the balance of a client.
		Maintains deposit and withdraw data.
		]"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class ACCOUNT create
	make

feature {NONE} -- Initialization

	make(a_credit: INTEGER)
			-- create an account with `a_balance' and credit limet `a_credit'
		require
			credit_limit_non_negative:  a_credit >= 0
		do

		end

feature {ANY} -- queries

	balance: INTEGER
		do

		end


	credit: INTEGER
		-- credit limit

	daily_max: INTEGER = 5000
		-- daily maximum on withdrawals

	total_deposits: INTEGER
		do

		end

	total_withdrawals: INTEGER
		do

		end

	withdraws_today: INTEGER
			-- Total withdrawals today
		
		do


		end

feature -- Commands

	deposit (a: INTEGER)
			-- deposit amount `a' into the account

		do

		end

	withdraw (a: INTEGER)
			-- withdraw amount `a' from account
		do


		end


feature {TELLER, ES_TEST} -- export to class TELLER
	deposit_on_date (a: INTEGER; a_date: DATE)
			-- deposit amount `a' into the account

		do

		end

	withdraw_on_date (amount: INTEGER; date: DATE)
			-- withdraw  `amount' from account

		do

		end

	withdraws_on(d: DATE): ARRAY[TRANSACTION]

		do

		end

feature {NONE} -- Implementation
	comment(s:STRING):BOOLEAN  do Result := true end

	deposits: LIST [TRANSACTION]

	withdrawals: LIST[TRANSACTION]


invariant
	comment("invariants for requirement R1")


end
