note
	description: "A board for the peg solitaire game."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOARD

inherit
	ANY
		redefine
			out, is_equal
		end

create
	make_default,
	make_easy,
	make_cross,
	make_plus,
	make_pyramid,
	make_arrow,
	make_diamond,
	make_skull


feature -- Constructor
	make_default
			-- Initialize a default board with all slots unavailable.
		do
			create imp.make_filled (unavailable_slot, 7, 7)
		ensure
			board_set:
				Current ~ bta.templates.default_board
		end

	make_easy
			-- Initialize an easy board.
		do
			make_default
			set_status (1, 4, unoccupied_slot)
			set_status (4, 4, unoccupied_slot)
			set_status (6, 4, unoccupied_slot)

			set_statuses (2, 3, 4, 4, occupied_slot)
			set_status (5, 4, occupied_slot)
		ensure
			board_set:
				Current ~ bta.templates.easy_board
		end

	make_cross
			-- Initialize a Cross board.
		do
			make_default
			parse_slot_map ("[
				**...**
				**.O.**
				..OOO..
				...O...
				...O...
				**...**
				**...**
				]")
		ensure
			board_set:
				Current ~ bta.templates.cross_board
		end

	make_plus
			-- Initialize a Plus board.
		do
			make_default
			parse_slot_map ( "[
				**...**
				**.O.**
				...O...
				.OOOOO.
				...O...
				**.O.**
				**...**
				]")
		ensure
			board_set:
				Current ~ bta.templates.plus_board
		end

	make_pyramid
			-- Initialize a Pyramid board.
		do
			make_default
			parse_slot_map ("[
				**...**
				**.O.**
				..OOO..
				.OOOOO.
				OOOOOOO
				**...**
				**...**
				]")
		ensure
			board_set:
				Current ~ bta.templates.pyramid_board
		end

	make_arrow
			-- Initialize a Arrow board.
		do
			make_default
			parse_slot_map ("[
				**.O.**
				**OOO**
				.OOOOO.
				...O...
				...O...
				**OOO**
				**OOO**
				]")
		ensure
			board_set:
				Current ~ bta.templates.arrow_board
		end

	make_diamond
			-- Initialize a Diamond board.
		do
			make_default
			parse_slot_map ("[
				**.O.**
				**OOO**
				.OOOOO.
				OOO.OOO
				.OOOOO.
				**OOO**
				**.O.**
				]")
		ensure
			board_set:
				Current ~ bta.templates.diamond_board
		end

	make_skull
			-- Initialize a Skull board.
		do
			make_default
			parse_slot_map ("[
				**OOO**
				**OOO**
				.OOOOO.
				.O.O.O.
				.OOOOO.
				**OOO**
				**OOO**
				]")
		ensure
			board_set:
				Current ~ bta.templates.skull_board
		end

feature -- Auxiliary Commands
	set_status (r, c: INTEGER; status: SLOT_STATUS)
			-- Set the status of slot at row 'r' and column 'c' to 'status'.
		require
			valid_row:
				is_valid_row (r)
			valid_column:
				is_valid_column (c)
		do
			imp.put (status, r, c)
		ensure
			slot_set:
				imp.item (r, c).is_equal (status)
			slots_not_in_range_unchanged:
				matches_slots_except (old Current.deep_twin, r, r, c, c)
		end

	set_statuses (r1, r2, c1, c2: INTEGER; status: SLOT_STATUS)
			-- Set the range of slots to 'status':
			-- intersection of rows 'r1' to 'r2' and
			-- columns 'c1' to 'c2'.
		require
			valid_rows:
				is_valid_row (r1) and is_valid_row (r2)
			valid_columns:
				is_valid_column (c1) and is_valid_column (c2)
			valid_row_range:
				r1 <= r2
			valid_column_range:
				c1 <= c2
		do
			across r1 |..| r2 as row_iter loop
				across c1 |..| c2 as col_iter  loop
					set_status(row_iter.item, col_iter.item, status)
				end
			end
		ensure
			slots_in_range_set:
				across r1 |..| r2 as rr  all
					across c1 |..| c2 as cc  all
						imp.item (rr.item, cc.item).is_equal (status)
					end
				end
			slots_not_in_range_unchanged:
				matches_slots_except (old Current.deep_twin, r1, r2, c1, c2)
		end

	parse_slot_map (map: STRING)
			-- Parses a string containing slot definitions to the current board
		require
			valid_input:
					-- String dimensions must match the row and column sizs of the current board
				map.split ('%N').count = number_of_rows and
				across map.split ('%N') as line_iter
				all
					line_iter.item.count = number_of_columns and
					across line_iter.item as character_iter
					all
						character_iter.item.out ~ unavailable_slot.out or else
						character_iter.item.out ~ occupied_slot.out or else
						character_iter.item.out ~ unoccupied_slot.out
					end
				end
		local
			r, c: INTEGER
		do
		across map.split ('%N') as line_iterator
			loop
				r := r + 1
				across line_iterator.item as slot_iterator
				loop
					c := c + 1
					if slot_iterator.item.out ~ unavailable_slot.out then
						set_status (r, c, unavailable_slot)
					elseif  slot_iterator.item.out ~ occupied_slot.out then
						set_status (r, c, occupied_slot)
					elseif  slot_iterator.item.out ~ unoccupied_slot.out then
						set_status (r, c, unoccupied_slot)
					end
				end
				c := 0
			end
		ensure
			correct_slots_assigned:
					-- Each slot in the board must be assigned the slot represented by the specific character in the input map
				across 1 |..| number_of_rows as rr all
					across 1 |..| number_of_columns as cc  all
						imp.item (rr.item, cc.item).out ~ map.at(((rr.item - 1) * (number_of_rows + 1)) + cc.item).out
					end
				end
		end

feature -- Auxiliary Queries
	matches_slots_except (other: BOARD; r1, r2, c1, c2: INTEGER): BOOLEAN
			-- Do slots outside the intersection of
			-- rows 'r1' to 'r2' and columns 'c1' and 'c2'
			-- match in Current and 'other'.
		require
			consistent_row_numbers:
				number_of_columns = other.number_of_columns
			consistent_column_numbers:
				number_of_rows = other.number_of_rows
			valid_rows:
				is_valid_row (r1) and is_valid_row (r2)
			valid_columns:
				is_valid_column (c1) and is_valid_column (c2)
			valid_row_range:
				r1 <= r2
			valid_column_range:
				c1 <= c2
		do
			Result :=
				across 1 |..| number_of_columns as col_iter  all
					across 1 |..| number_of_rows as  row_iter all
						(col_iter.item < c1 and col_iter.item > c2) or (row_iter.item < r1 and row_iter.item > r2) implies
							other.status_of (row_iter.item, col_iter.item).is_equal (status_of (row_iter.item, col_iter.item))
					end
				end
		ensure
			correct_result:
					-- Each entry outside the given ranges must have the same status
				Result ~ across 1 |..| number_of_columns as col_iter  all
					across 1 |..| number_of_rows as  row_iter all
						(col_iter.item < c1 and col_iter.item > c2) or (row_iter.item < r1 and row_iter.item > r2) implies
							other.status_of (row_iter.item, col_iter.item).is_equal (status_of (row_iter.item, col_iter.item))
					end
				end
		end

	unavailable_slot: UNAVAILABLE_SLOT
			-- A slot not available for movement.
		do
			Result := ssa.unavailable_slot
		ensure
			Result = ssa.unavailable_slot
		end

	occupied_slot: OCCUPIED_SLOT
			-- A slot available for moment but currently occupied.
		do
			Result := ssa.occupied_slot
		ensure
			Result = ssa.occupied_slot
		end

	unoccupied_slot: UNOCCUPIED_SLOT
			-- A slot available for moment and currently unoccupied.
		do
			Result := ssa.unoccupied_slot
		ensure
			Result = ssa.unoccupied_slot
		end

feature -- Queries
	number_of_rows: INTEGER
			-- Number of rows in the board of game.
		do
			Result := imp.height
		ensure
			correct_result:
				Result = imp.height
		end

	number_of_columns: INTEGER
			-- Number of columns in the board of game.
		do
			Result := imp.width
		ensure
			correct_result:
				Result = imp.width
		end

	is_valid_row (r: INTEGER): BOOLEAN
			-- Is 'r' a valid row number?
		do
			Result := r > 0 and r <= number_of_rows
		ensure
			correct_result: True
				Result = (r > 0 and r <= number_of_rows)
		end

	is_valid_column (c: INTEGER): BOOLEAN
			-- Is 'x' a valid column number?
		do
			Result := c > 0 and c <= number_of_columns
		ensure
			correct_result:
				Result = (c > 0 and c <= number_of_columns)
		end

	status_of (r, c: INTEGER): SLOT_STATUS
			-- Is the slot at row 'r' and column 'c'
			-- unavailable, occupied, or unoccupied?
		require
			valid_row:
				is_valid_row (r)
			valid_column:
				is_valid_column (c)
		do
			Result := imp.item (r, c)
		ensure
			correct_result: True
				Result ~ imp.item (r, c)
		end

	number_of_occupied_slots: INTEGER
			-- Number of slots occupied by pegs on current board.
		do
			across 1 |..| number_of_rows as row_iter  loop
				across 1 |..| number_of_columns as col_iter loop
					if status_of (row_iter.item, col_iter.item) ~ occupied_slot then
						Result := Result + 1
					end
				end
			end
		end

feature -- Equality
	is_equal (other: like Current): BOOLEAN
			-- Is current board equal to 'other'?
		do
			Result:= out ~ other.out
		ensure then
			correct_result:
				Result = (out ~ other.out)
		end

feature -- Output
	out: STRING
			-- String representation of current board.
		do
			Result := ""
			across 1 |..| number_of_rows as row_iter loop
				across 1 |..| number_of_columns as col_iter loop
					 Result.append_string (status_of (row_iter.item, col_iter.item).out)
				end
				Result.append_character ('%N')
			end
			Result.remove_tail (1)
		end

feature {NONE} -- Implementation

	ssa:SLOT_STATUS_ACCESS
	bta: BOARD_TEMPLATES_ACCESS

	-- Note: ARRAY2 takes row (y) and then column (x)
	imp: ARRAY2[SLOT_STATUS]
end
