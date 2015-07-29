note
	description: "Summary description for {SOLITAIRE_USER_INTERFACE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SOLITAIRE_USER_INTERFACE

inherit
	ANY
	redefine
		out
	end

create
	new_cross_game, new_plus_game, new_pyramid_game, new_arrow_game, new_diamond_game, new_skull_game

feature -- Attributes

	ga: GAME_ACCESS

	game: GAME

	history: HISTORY

	message: STRING

feature -- Events

	new_cross_game
			-- Start a cross game.
		do
			message := success
			create history.make
			game := ga.game
			game.make_cross
		end

	new_plus_game
			-- Start a plus game.
		do
			message := success
			create history.make
			game := ga.game
			game.make_plus
		end

	new_pyramid_game
			-- Start a pyramid game.
		do
			message := success
			create history.make
			game := ga.game
			game.make_pyramid
		end

	new_arrow_game
			-- Start a new arrow game.
		do
			message := success
			create history.make
			game := ga.game
			game.make_arrow
		end

	new_diamond_game
			-- Start a new diamond game.
		do
			message := success
			create history.make
			game := ga.game
			game.make_diamond
		end

	new_skull_game
			-- Start a new skull game.
		do
			message := success
			create history.make
			game := ga.game
			game.make_skull
		end

	move_left (r, c: INTEGER)
			-- User decides to move slot at (r, c) left.
		local
			retried: BOOLEAN
		do
			if not retried then
				perform (create {COMMAND_MOVE_LEFT}.make (r, c))
			end
		rescue
			retried := true
			handle_violation_exception (r, c, r, c - 1, r, c - 2)
			retry
		end

	move_right (r, c: INTEGER)
			-- User decides to move slot at (r, c) right.
		local
			retried: BOOLEAN
		do
			if not retried then
				perform (create {COMMAND_MOVE_RIGHT}.make (r, c))
			end
		rescue
			retried := true
			handle_violation_exception (r, c, r, c + 1, r, c + 2)
			retry
		end

	move_up (r, c: INTEGER)
		local
			retried: BOOLEAN
		do
			if not retried then
				perform (create {COMMAND_MOVE_UP}.make (r, c))
			end
		rescue
			retried := true
			handle_violation_exception (r, c, r - 1, c, r - 2, c)
			retry
		end

	move_down (r, c: INTEGER)
		local
			retried: BOOLEAN
		do
			if not retried then
				perform (create {COMMAND_MOVE_DOWN}.make (r, c))
			end
		rescue
			retried := true
			handle_violation_exception (r, c, r + 1, c, r + 2, c)
			retry
		end

	undo
		do
			if history.on_item then
				history.item.undo
				history.back
				message := success
			else
				message := error_nothing_to_undo
			end
		end

	redo
		do
			if not history.is_last then
				history.forth
				history.item.redo
				message := success
			else
				message := error_nothing_to_redo
			end
		end

feature -- Output
	out: STRING
	do
		create Result.make_empty
		Result.append ("Message     : " + message + "%N")
		Result.append (game.out)
	end
feature -- Messages

	success: STRING
		do
			Result := "Operation successfully completed."
		end

	error_row_not_valid (r: INTEGER): STRING
		do
			create Result.make_from_string ("Row " + r.out + " is not valid.")
		end

	error_column_not_valid (c: INTEGER): STRING
		do
			create Result.make_from_string ("Column " + c.out + " is not valid.")
		end

	error_slot_not_of_status (r, c: INTEGER; status: SLOT_STATUS): STRING
		do
			create Result.make_from_string ("Slot at (" + r.out + ", " + c.out + ") is not " + status.out)
		end

	error_nothing_to_undo: STRING
		do
			Result := "Nothing to undo."
		end

	error_nothing_to_redo: STRING
		do
			Result := "Nothing to redo."
		end

	error_unknown: STRING
		do
			Result := "Unknown error occurred."
		end

feature {NONE} -- Helpers


	perform (command: COMMAND)
		do
			command.execute
			history.extend_history (command)
			message := success
		end

	handle_violation_exception (from_row, from_col, middle_row, middle_col, to_row, to_col: INTEGER)
		local
			tag: STRING
		do
			if attached {PRECONDITION_VIOLATION} (create {EXCEPTION_MANAGER}).last_exception as l_exception then
				if attached {READABLE_STRING_GENERAL} l_exception.description as tag_raw then
					tag := tag_raw.to_string_8
					if tag ~ "from_slot_valid_row" then
						message := error_row_not_valid (from_row)
					elseif tag ~ "from_slot_valid_column" then
						message := error_column_not_valid (from_col)
					elseif tag ~ "middle_slot_valid_row" then
						message := error_row_not_valid (middle_row)
					elseif tag ~ "middle_slot_valid_column" then
						message := error_column_not_valid (middle_col)
					elseif tag ~ "to_slot_valid_row" then
						message := error_row_not_valid (to_row)
					elseif tag ~ "to_slot_valid_column" then
						message := error_column_not_valid (to_col)
					elseif tag ~ "from_slot_occupied" then
						message := error_slot_not_of_status (from_row, from_col, game.board.occupied_slot)
					elseif tag ~ "middle_slot_occupied" then
						message := error_slot_not_of_status (middle_row, middle_col, game.board.occupied_slot)
					elseif tag ~ "to_slot_unoccupied" then
						message := error_slot_not_of_status (to_row, to_col, game.board.unoccupied_slot)
					else
						message := error_unknown
					end
				else
					message := error_unknown
				end
			else
				message := error_unknown
			end
		end

end
