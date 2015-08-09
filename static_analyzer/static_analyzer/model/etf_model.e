note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	STATEMENT
	redefine
		out
	end

create {ETF_MODEL_ACCESS}
	make

feature
	out: STRING
		local
			padding: STRING
		do
			create Result.make_empty
			padding := "  "
			-- Line 1
			Result := Result + padding + "Expression currently specified: " + pretty_print
			Result := Result + "%N"
			-- Line 2
			Result := Result + padding + "Report: " + status

		end
end




