note
	description: "A history of executed commands."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	HISTORY

create
	make

feature{COMMAND}
	make
		do
			history := create {ARRAYED_LIST[COMMAND]}.make (0)
		end

feature -- history
	history: LIST[COMMAND]

	extend_history(new_cmd: COMMAND)
			-- Remove all operations to the right of the current
			-- cursor to history, then extend with the new command.
		local
			new_history: ARRAYED_LIST[COMMAND]
		do
			remove_right
			history.extend (new_cmd)
			history.forth
		ensure
			cursor_is_at_last:
				not history.is_empty implies history.islast
			last_item_is_new_cmd:
				history.at (history.count) ~ new_cmd
			history_is_trimmed:
				history.count = (old history.deep_twin).index + 1
		end


	item: COMMAND
			-- Item at the current cursor position.
		do
			Result := history.item
		end

	on_item: BOOLEAN
			-- Is currsor at a valid position?
		do
			Result := history.valid_index (history.index)
		end

	forth
			-- Move the cursor forward.
		do
			history.forth
		end

	back
			-- Move the cursor backward.
		do
			history.back
		end

	is_empty: BOOLEAN
			-- Is there at least one command in the history?
		do
			Result := history.is_empty
		end

	is_last: BOOLEAN
			-- Is cursor at the last position?
		do
			Result := history.is_empty or else history.islast
		end
feature {NONE}
	remove_right
			--Remove all elements to the right of the current cursor in history.
		local
			new_history: ARRAYED_LIST[COMMAND]
		do
			create new_history.make (0)
			across history.index_set.lower |..| history.index as idx
			loop
				new_history.extend (history.at (idx.item))
			end
			new_history.go_i_th (history.index)
			history := new_history
		ensure
			cursor_is_at_last:
						not history.is_empty implies history.islast
			history_is_trimmed:
						history.index_set.upper = (old history.deep_twin).index
		end
end
