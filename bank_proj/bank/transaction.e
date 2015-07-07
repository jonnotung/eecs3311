note
	description: "A transaction encapsulates a pair of deposit/withdraw value with a timestamp."
	author: "Raj Perera"
	date: "$Date$"
	revision: "$Revision$"

class
	TRANSACTION
inherit
	ANY
	redefine
		is_equal
	end

create
	make

feature -- Attributes
	value: INTEGER
	date : DATE

feature -- Constructor

	make (v: INTEGER; d: DATE)
			-- Initialize a transaction with value 'v' and date 'd'
		do
			value := v
			date := d
		ensure
			set_value:
				value = v
			set_date:
				date = d
		end

feature -- Equality

	is_equal (other: like Current): BOOLEAN -- anchor types!
			-- Compare if 't' has sthe same value and date
		do
			Result := other.date ~ date and other.value ~ value
		end

invariant
	valid_value:
		value > 0

end
