class
 	 ETF_TYPE_CONSTRAINTS

feature -- type queries 

	is_day(v: INTEGER): BOOLEAN 
		require
			comment("v: DAY = 1 .. 31")
		do
			 Result := 
				(1 <= v) and then (v <= 31)
		ensure
			 Result = 
				(1 <= v) and then (v <= 31)
		end

	is_month(v: INTEGER): BOOLEAN 
		require
			comment("v: MONTH = 1 .. 12")
		do
			 Result := 
				(1 <= v) and then (v <= 12)
		ensure
			 Result = 
				(1 <= v) and then (v <= 12)
		end

	is_year(v: INTEGER): BOOLEAN 
		require
			comment("v: YEAR = 1800 .. 2500")
		do
			 Result := 
				(1800 <= v) and then (v <= 2500)
		ensure
			 Result = 
				(1800 <= v) and then (v <= 2500)
		end

	is_date(v: TUPLE[d: INTEGER; m: INTEGER; y: INTEGER]): BOOLEAN 
		require
			comment("v: DATE = TUPLE[d: DAY = 1 .. 31; m: MONTH = 1 .. 12; y: YEAR = 1800 .. 2500]")
		do
			 Result := 
				         is_day(v.d)
				and then is_month(v.m)
				and then is_year(v.y)
		ensure
			 Result = 
				         is_day(v.d)
				and then is_month(v.m)
				and then is_year(v.y)
		end
feature -- list of enumeratd constants
	enum_items : HASH_TABLE[INTEGER, STRING]
		do
			create Result.make (10)
		end

	enum_items_inverse : HASH_TABLE[STRING, INTEGER]
		do
			create Result.make (10)
		end
feature -- query on declarations of event parameters
	evt_param_types : HASH_TABLE[HASH_TABLE[ETF_PARAM_TYPE, STRING], STRING]
		local
			new_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			deposit_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			withdraw_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			transfer_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
		do
			create Result.make (10)
			Result.compare_objects
			create new_param_types.make (10)
			new_param_types.compare_objects
			new_param_types.extend (create {ETF_STR_PARAM}, "id")
			Result.extend (new_param_types, "new")
			create deposit_param_types.make (10)
			deposit_param_types.compare_objects
			deposit_param_types.extend (create {ETF_STR_PARAM}, "id")
			deposit_param_types.extend (create {ETF_REAL_PARAM}, "amount")
			deposit_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("DATE", create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("d", create {ETF_NAMED_PARAM_TYPE}.make("DAY", create {ETF_INTERVAL_PARAM}.make(1, 31))), create {ETF_PARAM_DECL}.make("m", create {ETF_NAMED_PARAM_TYPE}.make("MONTH", create {ETF_INTERVAL_PARAM}.make(1, 12))), create {ETF_PARAM_DECL}.make("y", create {ETF_NAMED_PARAM_TYPE}.make("YEAR", create {ETF_INTERVAL_PARAM}.make(1800, 2500)))>>)), "date")
			Result.extend (deposit_param_types, "deposit")
			create withdraw_param_types.make (10)
			withdraw_param_types.compare_objects
			withdraw_param_types.extend (create {ETF_STR_PARAM}, "id")
			withdraw_param_types.extend (create {ETF_REAL_PARAM}, "amount")
			withdraw_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("DATE", create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("d", create {ETF_NAMED_PARAM_TYPE}.make("DAY", create {ETF_INTERVAL_PARAM}.make(1, 31))), create {ETF_PARAM_DECL}.make("m", create {ETF_NAMED_PARAM_TYPE}.make("MONTH", create {ETF_INTERVAL_PARAM}.make(1, 12))), create {ETF_PARAM_DECL}.make("y", create {ETF_NAMED_PARAM_TYPE}.make("YEAR", create {ETF_INTERVAL_PARAM}.make(1800, 2500)))>>)), "date")
			Result.extend (withdraw_param_types, "withdraw")
			create transfer_param_types.make (10)
			transfer_param_types.compare_objects
			transfer_param_types.extend (create {ETF_STR_PARAM}, "id1")
			transfer_param_types.extend (create {ETF_STR_PARAM}, "id2")
			transfer_param_types.extend (create {ETF_REAL_PARAM}, "amount")
			transfer_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("DATE", create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("d", create {ETF_NAMED_PARAM_TYPE}.make("DAY", create {ETF_INTERVAL_PARAM}.make(1, 31))), create {ETF_PARAM_DECL}.make("m", create {ETF_NAMED_PARAM_TYPE}.make("MONTH", create {ETF_INTERVAL_PARAM}.make(1, 12))), create {ETF_PARAM_DECL}.make("y", create {ETF_NAMED_PARAM_TYPE}.make("YEAR", create {ETF_INTERVAL_PARAM}.make(1800, 2500)))>>)), "date")
			Result.extend (transfer_param_types, "transfer")
		end
feature -- comments for contracts
	comment(s: STRING): BOOLEAN
		do
			Result := TRUE
		end
end