note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TRANSFER
inherit 
	ETF_TRANSFER_INTERFACE
		redefine transfer end
create
	make
feature -- command 
	transfer(id1: STRING ; id2: STRING ; amount: REAL ; date: TUPLE[d: INTEGER; m: INTEGER; y: INTEGER])
		require else 
			transfer_precond(id1, id2, amount, date)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
