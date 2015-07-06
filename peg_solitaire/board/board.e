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
			parse_slot_map (bta.templates.cross_board_out)
		ensure
			board_set:
				Current ~ bta.templates.cross_board
		end

	make_plus
			-- Initialize a Plus board.
		do
			make_default
			parse_slot_map (bta.templates.plus_board_out)
		ensure
			board_set:
				Current ~ bta.templates.plus_board
		end

	make_pyramid
			-- Initialize a Pyramid board.
		do
			make_default
			parse_slot_map (bta.templates.pyramid_board_out)
		ensure
			board_set:
				Current ~ bta.templates.pyramid_board
		end

	make_arrow
			-- Initialize a Arrow board.
		do
			make_default
			parse_slot_map (bta.templates.arrow_board_out)
		ensure
			board_set:
				Current ~ bta.templates.arrow_board
		end

	make_diamond
			-- Initialize a Diamond board.
		do
			make_default
			parse_slot_map (bta.templates.diamond_board_out)
		ensure
			board_set:
				Current ~ bta.templates.diamond_board
		end

	make_skull
			-- Initialize a Skull board.
		do
			make_default
			parse_slot_map (bta.templates.skull_board_out)
		ensure
			board_set:
				Current ~ bta.templates.skull_board
		end

feature -- Auxiliary Commands
	set_status (r, c: INTEGER; status: SLOT_STATUS)
			-- Set the status of slot at row 'r' and column 'c' to 'status'.
		require
			valid_row: True
				-- Your task.
			valid_column: True
				-- Your task.
		do
			-- Your task.
		ensure
			slot_set: True
				-- Your task.
			slots_not_in_range_unchanged: True
				-- Your task.
				-- Hint: Use query 'matches_slots_except'.
		end

	set_statuses (r1, r2, c1, c2: INTEGER; status: SLOT_STATUS)
			-- Set the range of slots to 'status':
			-- intersection of rows 'r1' to 'r2' and
			-- columns 'c1' to 'c2'.
		require
			valid_rows: True
				-- Your task.
			valid_columns: True
				-- Your task.
			valid_row_range: True
				-- Your task.
			valid_column_range: True
				-- Your task.
		do
			-- Your task.
		ensure
			slots_in_range_set: True
				-- Your task.
			slots_not_in_range_unchanged: True
				-- Your task.
				-- Hint: Use query 'matches_slots_except'.
		end

	parse_slot_map (map: STRING)
			-- Parses a string of slots
		require
			valid_input:
				map.split ('%N').count = 6 and
				across map.split ('%N') as line_iter
				all
					line_iter.item.count = 7 and
					across line_iter.item as character_iter
					all
						character_iter ~ unavailable_slot.out or else
						character_iter ~ occupied_slot.out or else
						character_iter ~ unoccupied_slot.out
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
					if slot_iterator.item ~ unavailable_slot.out then
						set_status (r, c, unavailable_slot)
					elseif  slot_iterator.item ~ occupied_slot.out then
						set_status (r, c, occupied_slot)
					elseif  slot_iterator.item ~ unoccupied_slot.out then
						set_status (r, c, unoccupied_slot)
					end
				end
				c := 0
			end
		end

feature -- Auxiliary Queries
	matches_slots_except (
		other: BOARD; r1, r2, c1, c2: INTEGER)
	: BOOLEAN
			-- Do slots outside the intersection of
			-- rows 'r1' to 'r2' and columns 'c1' and 'c2'
			-- match in Current and 'other'.
		require
			consistent_row_numbers: True
				-- Your task.
			consistent_column_numbers: True
				-- Your task.
			valid_rows: True
				-- Your task.
			valid_columns: True
				-- Your task.
			valid_row_range: True
				-- Your task.
			valid_column_range: True
				-- Your task.
		do
			-- Your task.
		ensure
			correct_result: True
				-- Your task.
				-- Hint: write two nested across expressions to
				-- iterate through all slots. Each slot is identified
				-- by its row and column numbers. If the slot location
				-- is not witin 'r1', 'r2', 'c1', and 'c2', then
				-- its value in 'Current' is equal to that in 'other'.
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
			-- Your task.
		ensure
			correct_result: True
				-- Your task.
		end

	number_of_columns: INTEGER
			-- Number of columns in the board of game.
		do
			-- Your task.
		ensure
			correct_result: True
				-- Your task.
		end

	is_valid_row (r: INTEGER): BOOLEAN
			-- Is 'r' a valid row number?
		do
			-- Your task.
		ensure
			correct_result: True
				-- Your task.
		end

	is_valid_column (c: INTEGER): BOOLEAN
			-- Is 'x' a valid column number?
		do
			-- Your task.
		ensure
			correct_result: True
				-- Your task.
		end

	status_of (r, c: INTEGER): SLOT_STATUS
			-- Is the slot at row 'r' and column 'c'
			-- unavailable, occupied, or unoccupied?
		require
			valid_row: True
				-- Your task.
			valid_column: True
				-- Your task.
		do
			Result := ssa.unavailable_slot
			-- Your task: the current implementation
			-- may not be correct.
		ensure
			correct_result: True
				-- Your task.
		end

	number_of_occupied_slots: INTEGER
			-- Number of slots occupied by pegs on current board.
		do
			-- Your task.
			-- No postcondition is needed for this auxiliary query.
		end

feature -- Equality
	is_equal (other: like Current): BOOLEAN
			-- Is current board equal to 'other'?
		do
			-- Your task.
		ensure then
			correct_result: True
				-- Your task.
		end

feature -- Output
	out: STRING
			-- String representation of current board.
		do
			create Result.make_empty
			-- Your task: the current implementation
			-- may not be correct.
			-- No postcondition is needed for this query.
		end

feature {NONE} -- Implementation

	ssa:SLOT_STATUS_ACCESS
	bta: BOARD_TEMPLATES_ACCESS

	-- Note: ARRAY2 takes row (y) and then column (x)
	imp: ARRAY2[SLOT_STATUS]
end
