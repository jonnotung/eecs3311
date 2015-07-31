note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_WITHDRAW
inherit 
	ETF_WITHDRAW_INTERFACE
		redefine withdraw end
create
	make
feature -- command 
	withdraw(id: STRING ; amount: REAL ; date: TUPLE[d: INTEGER; m: INTEGER; y: INTEGER])
		require else 
			withdraw_precond(id, amount, date)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
