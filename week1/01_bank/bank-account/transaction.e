note
	description: "an account deposit or withdrawal"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class
	TRANSACTION
inherit

create
	make
feature {NONE}
	make (v: INTEGER; d: DATE)
			-- create a transaction with value `v' and date `d'
		do
		

		end
feature
	value: INTEGER

	date: DATE



end
