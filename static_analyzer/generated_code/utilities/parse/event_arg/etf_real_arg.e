note
	description: "Summary description for {ETF_REAL_ARG}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REAL_ARG

inherit
	ETF_PRIMITIVE_ARG
		redefine
			out
		end

create
	make

feature -- Constructor
	make (r: REAL)
	  do
	  	create src_out.make_empty
	    value := r
	  end

feature -- Queries
	value : REAL

feature -- Output
	out : STRING
		do
			Result := value.out
		end
end


