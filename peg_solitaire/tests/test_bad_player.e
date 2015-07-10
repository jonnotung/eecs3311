note
	description: "Tests on bad players."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_BAD_PLAYER

inherit
	ES_TEST

create
	make

feature -- Constructor
	make
		do
			add_boolean_case (agent test_bad_player_loses_easy_board)
			add_boolean_case (agent test_bad_player_loses_pyramid_board)
			add_boolean_case (agent test_bad_player_loses_arrow_board)
			add_boolean_case (agent test_bad_player_loses_diamond_board)
			add_boolean_case (agent test_bad_player_loses_skull_board)
		end

feature -- Tests
	test_bad_player_loses_easy_board: BOOLEAN
		local
			player: BAD_PLAYER
		do
			comment ("test: bad player loses an easy board")
			create player.make

			player.game.make_easy
			player.loses_easy_board
			Result :=
					player.game.is_over
				and not player.game.is_won
			check Result end
		end

    test_bad_player_loses_pyramid_board: BOOLEAN
        local
            player: BAD_PLAYER
        do
            comment ("test: bad player loses a pyramid board")
            create player.make

            player.game.make_pyramid
            player.loses_pyramid_board
            Result :=
                    player.game.is_over
                and not player.game.is_won
            check Result end
        end

    test_bad_player_loses_arrow_board: BOOLEAN
        local
            player: BAD_PLAYER
        do
            comment ("test: bad player loses an arrow board")
            create player.make

            player.game.make_arrow
            player.loses_arrow_board
            Result :=
                    player.game.is_over
                and not player.game.is_won
            check Result end
        end

    test_bad_player_loses_diamond_board: BOOLEAN
        local
            player: BAD_PLAYER
        do
            comment ("test: bad player loses a diamond board")
            create player.make

            player.game.make_diamond
            player.loses_diamond_board
            Result :=
                    player.game.is_over
                and not player.game.is_won
            check Result end
        end

    test_bad_player_loses_skull_board: BOOLEAN
        local
            player: BAD_PLAYER
        do
            comment ("test: bad player loses a skull board")
            create player.make

            player.game.make_skull

            player.loses_skull_board
            Result :=
                    player.game.is_over
                and not player.game.is_won
            check Result end
        end

feature -- Helper methods
     helper_brute_force_solve(game:GAME)
     	 local
     	 	r, c:INTEGER
		do
			from
			until
				game.is_over
			loop
				across 1 |..| game.board.number_of_rows as row_i  loop
					across 1 |..| game.board.number_of_columns as col_i  loop
						if game.board.status_of (row_i.item, col_i.item) ~ game.board.occupied_slot then
							r := row_i.item
							c := col_i.item
							if game.is_valid_move (r, r, c, c + 2) then --right
								game.move_right (r, c)
								print("game.move_right(" + r.out + ", " + c.out + ")%N")
							elseif game.is_valid_move (r, r, c, c - 2) then -- left
								game.move_left (r, c)
								print("game.move_left(" + r.out + ", " + c.out + ")%N")
							elseif game.is_valid_move (r, r + 2, c, c) then -- down
								game.move_down (r, c)
								print("game.move_down(" + r.out + ", " + c.out + ")%N")
							elseif game.is_valid_move (r, r - 2, c, c) then -- up
								game.move_up (r, c)
								print("game.move_up(" + r.out + ", " + c.out + ")%N")
							end
						end
					end
				end

			end


		end

end
