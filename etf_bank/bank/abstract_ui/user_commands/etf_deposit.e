note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DEPOSIT
inherit 
	ETF_DEPOSIT_INTERFACE
		redefine deposit end
create
	make
feature -- command 
	deposit(id: STRING ; amount: REAL ; date: TUPLE[d: INTEGER; m: INTEGER; y: INTEGER])
		require else 
			deposit_precond(id, amount, date)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
