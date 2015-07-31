note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_WITHDRAW_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent withdraw(? , ? , ?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {STRING} etf_cmd_args[1] as id and then attached {REAL} etf_cmd_args[2] as amount and then attached {TUPLE[d: INTEGER; m: INTEGER; y: INTEGER]} etf_cmd_args[3] as date
			then
				out := "withdraw(" + etf_event_argument_out("withdraw", "id", id) + "," + etf_event_argument_out("withdraw", "amount", amount) + "," + etf_event_argument_out("withdraw", "date", date) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	withdraw_precond(id: STRING ; amount: REAL ; date: TUPLE[d: INTEGER; m: INTEGER; y: INTEGER]): BOOLEAN
		do  
			Result := 
				         is_date(date)
					-- (1 <= date.d) and then (date.d <= 31)
					-- and then (1 <= date.m) and then (date.m <= 12)
					-- and then (1800 <= date.y) and then (date.y <= 2500)
		ensure then  
			Result = 
				         is_date(date)
					-- (1 <= date.d) and then (date.d <= 31)
					-- and then (1 <= date.m) and then (date.m <= 12)
					-- and then (1800 <= date.y) and then (date.y <= 2500)
		end 
feature -- command 
	withdraw(id: STRING ; amount: REAL ; date: TUPLE[d: INTEGER; m: INTEGER; y: INTEGER])
		require 
			withdraw_precond(id, amount, date)
    	deferred
    	end
end
