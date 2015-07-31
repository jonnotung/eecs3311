note
	description: "[
		Calculate sum and product of 
		iterable collections of numbers
		]"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	ITERABLE_ARITHMETIC[G -> NUMERIC create default_create end]

feature
	zero: G
		do
			create Result
			Result := Result.zero
		end

	one: G
		do
			create Result
			Result := Result.one
		end

	sum(collection: ITERABLE[G]): G
		do
			Result := zero
			across collection as it loop
				Result := Result + it.item
			end
		end

	product(collection: ITERABLE[G]): G
		do
			Result := one
			across collection as it loop
				Result := Result * it.item
			end
		end


note
	secret: "[
		A client of this class does not need to know what kind of
		collection to operate on arithmetically, only that 
		the collection is iterable and its elements are of 
		numeric type
		]"

end
-- agents for summation and product
-- max/min with precoditions that the collection
-- should contain at least one element
