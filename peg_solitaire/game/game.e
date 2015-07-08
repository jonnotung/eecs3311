note
	description: "A game of peg solitaire."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME

inherit
	ANY
		redefine
			out
		end

create
	make_from_board,
	make_easy,
	make_cross,
	make_plus,
	make_pyramid,
	make_arrow,
	make_diamond,
	make_skull

feature -- Constructors
	make_from_board (new_board: BOARD)
			-- Initialize a game with 'new_board'.
		do
			board := new_board
		ensure
			board_set:
				board ~ new_board
		end

	make_easy
			-- Initialize a game with easy board.
		do
			create board.make_easy
		ensure
			board_set:
				board ~ bta.templates.easy_board
		end

	make_cross
			-- Initialize a game with Cross board.
		do
			create board.make_cross
		ensure
			board_set:
				board ~ bta.templates.cross_board
		end

	make_plus
			-- Initialize a game with Plus board.
		do
			create board.make_plus
		ensure
			board_set:
				board ~ bta.templates.plus_board
		end

	make_pyramid
			-- Initialize a game with Pyramid board.
		do
			create board.make_pyramid
		ensure
			board_set:
				board ~ bta.templates.pyramid_board
		end

	make_arrow
			-- Initialize a game with Arrow board.
		do
			create board.make_arrow
		ensure
			board_set:
				board ~ bta.templates.arrow_board
		end


	make_diamond
			-- Initialize a game with Diamond board.
		do
			create board.make_diamond
		ensure
			board_set:
				board ~ bta.templates.diamond_board
		end

	make_skull
			-- Initialize a game with Skull board.
		do
			create board.make_skull
		ensure
			board_set:
				board ~ bta.templates.skull_board
		end

feature -- Commands
	move_left (r, c: INTEGER)
		require
			from_slot_valid_row:
				board.is_valid_row (r)
			from_slot_valid_column:
				board.is_valid_column (c)
			middle_slot_valid_column:
				board.is_valid_column (c - 1)
			to_slot_valid_column:
				board.is_valid_column (c - 2)
			from_slot_occupied:
				board.status_of (r, c) ~ board.occupied_slot
			middle_slot_occupied:
				board.status_of (r, c - 1) ~ board.occupied_slot
			to_slot_unoccupied:
				board.status_of (r, c - 2) ~ board.unoccupied_slot
		do
			board.set_status (r, c, board.unoccupied_slot)
			board.set_status (r, c - 1, board.unoccupied_slot)
			board.set_status (r, c - 2, board.occupied_slot)
		ensure
			slots_properly_set:
				board.status_of (r, c) ~ board.unoccupied_slot and
				board.status_of (r, c - 1) ~ board.unoccupied_slot and
				board.status_of (r, c - 2) ~ board.occupied_slot
			other_slots_unchanged:
				board.matches_slots_except (old board.deep_twin, r, r, c - 2, c)
		end

	move_right (r, c: INTEGER)
		require
			from_slot_valid_row:
				board.is_valid_row (r)
			from_slot_valid_column:
				board.is_valid_column (c)
			middle_slot_valid_column:
				board.is_valid_column (c + 1)
			to_slot_valid_column:
				board.is_valid_column (c + 2)
			from_slot_occupied:
				board.status_of (r, c) ~ board.occupied_slot
			middle_slot_occupied:
				board.status_of (r, c + 1) ~ board.occupied_slot
			to_slot_unoccupied:
				board.status_of (r, c + 2) ~ board.unoccupied_slot
		do
			board.set_status (r, c, board.unoccupied_slot)
			board.set_status (r, c + 1, board.unoccupied_slot)
			board.set_status (r, c + 2, board.occupied_slot)
		ensure
			slots_properly_set:
				board.status_of (r, c) ~ board.unoccupied_slot and
				board.status_of (r, c + 1) ~ board.unoccupied_slot and
				board.status_of (r, c + 2) ~ board.occupied_slot
			other_slots_unchanged:
				board.matches_slots_except (old board.deep_twin, r, r, c, c + 2)
		end


	move_up (r, c: INTEGER)
		require
			from_slot_valid_column:
				board.is_valid_column (c)
			from_slot_valid_row:
				board.is_valid_column (r)
			middle_slot_valid_row:
				board.is_valid_row (r - 1)
			to_slot_valid_row:
				board.is_valid_row (r - 2)
			from_slot_occupied:
				board.status_of (r, c) ~ board.occupied_slot
			middle_slot_occupied:
				board.status_of (r - 1, c) ~ board.occupied_slot
			to_slot_unoccupied:
				board.status_of (r - 2, c) ~ board.unoccupied_slot
		do
			board.set_status (r, c, board.unoccupied_slot)
			board.set_status (r - 1, c, board.unoccupied_slot)
			board.set_status (r - 2, c, board.occupied_slot)
		ensure
			slots_properly_set:
				board.status_of (r, c) ~ board.unoccupied_slot and
				board.status_of (r - 1, c) ~ board.unoccupied_slot and
				board.status_of (r - 2, c) ~ board.occupied_slot
			other_slots_unchanged:
				board.matches_slots_except (old board.deep_twin, r - 2, r, c, c)
		end

	move_down (r, c: INTEGER)
		require
			from_slot_valid_column:
				board.is_valid_column (c)
			from_slot_valid_row:
				board.is_valid_column (r)
			middle_slot_valid_row:
				board.is_valid_row (r + 1)
			to_slot_valid_row:
				board.is_valid_row (r + 2)
			from_slot_occupied:
				board.status_of (r, c) ~ board.occupied_slot
			middle_slot_occupied:
				board.status_of (r + 1, c) ~ board.occupied_slot
			to_slot_unoccupied:
				board.status_of (r + 2, c) ~ board.unoccupied_slot
		do
			board.set_status (r, c, board.unoccupied_slot)
			board.set_status (r + 1, c, board.unoccupied_slot)
			board.set_status (r + 2, c, board.occupied_slot)
		ensure
			slots_properly_set:
				board.status_of (r, c) ~ board.unoccupied_slot and
				board.status_of (r + 1, c) ~ board.unoccupied_slot and
				board.status_of (r + 2, c) ~ board.occupied_slot
			other_slots_unchanged:
				board.matches_slots_except (old board.deep_twin, r, r + 2, c, c)
		end

feature -- Status Queries
	is_over: BOOLEAN
			-- Is the current game 'over'?
			-- i.e., no further movements are possible.
		do
			Result := across 1 |..| board.number_of_rows as row_i  all
					across 1 |..| board.number_of_columns as col_i  all
						board.status_of (row_i.item, col_i.item) ~ board.occupied_slot implies not is_movable (row_i.item, col_i.item)
					end
				end
		ensure
			correct_result:
				Result = across 1 |..| board.number_of_rows as ri  all
					across 1 |..| board.number_of_columns as ci  all
						board.status_of (ri.item, ci.item) ~ board.occupied_slot implies not is_movable (ri.item, ci.item)
					end
				end
		end

	is_won: BOOLEAN
			-- Has the current game been won?
			-- i.e., there's only one occupied slot on the board.
		do
			Result := board.number_of_occupied_slots = 1
		ensure
			game_won_iff_one_occupied_slot_left:
				Result implies board.number_of_occupied_slots = 1
			winning_a_game_means_game_over:
				Result implies is_over
		end

feature -- Output
	out: STRING
			-- String representation of current game.
			-- Do not modify this feature!
		do
			create Result.make_empty
			Result.append ("Game is over: " + boolean_to_yes_no (is_over) + "%N")
			Result.append ("Game is won : " + boolean_to_yes_no (is_won) + "%N")
			Result.append ("Board Status:%N")
			Result.append (board.out)
		end

feature -- Auxiliary Routines
	boolean_to_yes_no (b: BOOLEAN): STRING
			-- 'Yes' or 'No' corresponding to 'b'.
		do
			if b then
				Result := "Yes"
			else
				Result := "No"
			end
		end
	is_movable (r, c: INTEGER): BOOLEAN
		do
			Result :=
				is_valid_move (r, r, c, c + 2) or is_valid_move (r, r, c, c - 2) or -- right or left
				is_valid_move (r, r + 2, c, c) or is_valid_move (r, r - 2, c, c) -- down or up
		end

	is_valid_move (r1, r2, c1, c2: INTEGER): BOOLEAN
			-- Returns true if a peg in r1, c1 can be moved to r2, c2
		require
			valid_interval:
				((r1 - r2).abs = 0 and (c1 - c2).abs = 2) or
				((r1 - r2).abs = 2 and (c1 - c2).abs = 0)
			valid_start:
				board.is_valid_column (c1) and  board.is_valid_row (r1) and
				board.status_of (r1, c1) ~ board.occupied_slot
		do
			Result := board.is_valid_column (c2) and board.is_valid_row (r2) and then (
					(c1 > c2 implies board.status_of(r1, c1 - 1) ~ board.occupied_slot) and
					(c1 < c2 implies board.status_of(r1, c1 + 1) ~ board.occupied_slot) and
					(r1 > r2 implies board.status_of(r1 - 1, c1) ~ board.occupied_slot) and
					(r1 < r2 implies board.status_of(r1 + 1, c1) ~ board.occupied_slot) and
					board.status_of (r2, c2) ~ board.unoccupied_slot)
		ensure
			correct_result:
				Result implies board.is_valid_column (c2) and board.is_valid_row (r2) and then (
					(c1 > c2 implies board.status_of(r1, c1 - 1) ~ board.occupied_slot) and
					(c1 < c2 implies board.status_of(r1, c1 + 1) ~ board.occupied_slot) and
					(r1 > r2 implies board.status_of(r1 - 1, c1) ~ board.occupied_slot) and
					(r1 < r2 implies board.status_of(r1 + 1, c1) ~ board.occupied_slot) and
					board.status_of (r2, c2) ~ board.unoccupied_slot)
		end

feature -- Board
	bta: BOARD_TEMPLATES_ACCESS
	board: BOARD
end
