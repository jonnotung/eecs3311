note
	description: "Tests on peg solitaire games."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_PEG_SOLITAIRE

inherit
	ES_TEST

create
	make

feature -- Constructor
	make
		do

			-- Game manipulation
			add_boolean_case (agent test_easy_game_creation)
			add_boolean_case (agent test_game_over)
			add_boolean_case (agent test_game_player_movement)
			add_boolean_case (agent test_game_winning)
			add_violation_case_with_tag ("middle_slot_occupied", agent test_game_move_to_unavailable)
			add_violation_case_with_tag ("to_slot_unoccupied", agent test_game_move_to_occupied)

			-- Board validation
			add_boolean_case (agent test_board_equality)
			add_violation_case_with_tag ("valid_row", agent test_board_set_invalid_coordinate_status)
			add_violation_case_with_tag ("valid_row_range", agent test_board_set_invalid_range_statuses)
			add_boolean_case (agent test_board_parse_slot_map)
			add_violation_case_with_tag ("valid_input", agent test_board_slot_map_parse_size_constraints)
			add_violation_case_with_tag ("valid_input", agent test_board_slot_map_parse_invalid_slot_types)




		end

feature -- Templates
	bta: BOARD_TEMPLATES_ACCESS

feature -- Tests of Creation

	-- Use Cases

	test_easy_game_creation: BOOLEAN
		local
			g: GAME
		do
			comment ("test: game creation with easy board")
			create g.make_easy
			Result :=
					g.board ~ bta.templates.easy_board
				and not g.is_over
				and not g.is_won
			check Result end

			Result := g.out ~ "[
			Game is over: No
			Game is won : No
			Board Status:
			***.***
			***O***
			***O***
			***.***
			***O***
			***.***
			*******
			]"
			check Result end
		end

feature -- Tests of game manipulation

	test_game_player_movement: BOOLEAN
		local
			g: GAME
		do
			comment ("test: player movements")
			create g.make_from_board (fixture_dummy_board)
			g.move_down (4, 4)
			Result := g.board.out ~ "[
				*******
				***.***
				***O***
				*.O.O.*
				***.***
				***O***
				*******
			]"
			check Result end

			create g.make_from_board (fixture_dummy_board)
			g.move_up (4, 4)
			Result := g.board.out ~ "[
				*******
				***O***
				***.***
				*.O.O.*
				***O***
				***.***
				*******
			]"
			check Result end

			create g.make_from_board (fixture_dummy_board)
			g.move_left (4, 4)
			Result := g.board.out ~ "[
				*******
				***.***
				***O***
				*O..O.*
				***O***
				***.***
				*******
			]"
			check Result end

			create g.make_from_board (fixture_dummy_board)
			g.move_right (4, 4)
			Result := g.board.out ~ "[
				*******
				***.***
				***O***
				*.O..O*
				***O***
				***.***
				*******
			]"
			check Result end

		end

	test_game_move_to_unavailable
		local
			g: GAME
		do
			comment ("test: game move to unavailable slot")
			create g.make_from_board (fixture_dummy_board)
			g.move_left (3, 4)

		end

	test_game_move_to_occupied
		local
			g: GAME
		do
			comment ("test: game move to occupied slot")
			create g.make_from_board (fixture_dummy_board)
			g.move_down (3, 4)
		end

	test_game_winning: BOOLEAN
		local
			g: GAME
			b: BOARD
		do
			comment ("test: game winning")
			create b.make_default
			b.parse_slot_map ("[
				*******
				*******
				*******
				***O***
				***O***
				***.***
				*******
			]")

			create g.make_from_board (b)

			g.move_down (4, 4)

			Result := g.is_won
			check Result end

			Result := g.out ~ "[
				Game is over: Yes
				Game is won : Yes
				Board Status:
				*******
				*******
				*******
				***.***
				***.***
				***O***
				*******
			]"
			check Result end

		end

	test_game_over: BOOLEAN
		local
			g: GAME
			b: BOARD
		do
			comment ("test: game over")
			create b.make_default
			b.parse_slot_map ("[
				*******
				*******
				***O***
				***O***
				***O***
				***.***
				*******
			]")

			create g.make_from_board (b)

			g.move_down (4, 4)

			Result := g.is_over
			check Result end

			Result := not g.is_won
			check Result end

			Result := g.out ~ "[
				Game is over: Yes
				Game is won : No
				Board Status:
				*******
				*******
				***O***
				***.***
				***.***
				***O***
				*******
			]"
			check Result end

		end


feature -- Tests auxilary commands and queries

	test_board_set_invalid_coordinate_status
		local
			b: BOARD
		do
			comment ("test: board set invalid status")
			b := fixture_dummy_board
			b.set_status (10, 4, b.unavailable_slot)
		end

	test_board_set_invalid_range_statuses
		local
			b: BOARD
		do
			comment ("test: board set invalid status range")
			b := fixture_dummy_board
			b.set_statuses (4, 3, 4, 7, b.unavailable_slot)
		end

	test_board_parse_slot_map: BOOLEAN
		local
			b: BOARD
			map1, map2: STRING
		do
			comment ("test: board parses slot map")
			create b.make_default

			map1 := "[
				*.*.*.*
				*O*O*O*
				*.*.*.*
				*O*O*O*
				*.*.*.*
				*O*O*O*
				*.*.*.*
			]"

			b.parse_slot_map (map1)
			Result := b.out ~ map1
			check Result end

			map2 := "[
				O*O*O*O
				.*.*.*.
				O*O*O*O
				.*.*.*.
				O*O*O*O
				.*.*.*.
				O*O*O*O
			]"
			b.parse_slot_map (map2)
			Result := b.out ~ map2
			check Result end


		end

	test_board_slot_map_parse_size_constraints
		local
			b: BOARD
		do
			comment ("test: board parses proper dimensioned slot maps")
			b:= fixture_dummy_board

			b.parse_slot_map ("[
				***
				*0*
				*.*
				*.*
				***
			]")
		end

	test_board_slot_map_parse_invalid_slot_types
		local
			b: BOARD
		do
			comment ("test: board parses properly formatted slot maps")
			b:= fixture_dummy_board

			b.parse_slot_map ("[
				*******
				*T*.*T*
				***O***
				*.OOO.*
				***O***
				***.***
				*******
			]")
		end


	test_board_equality: BOOLEAN
		local
			b1: BOARD
			b2: BOARD
		do
			comment ("test: board equality")
			b1 := fixture_dummy_board
			b2 := fixture_dummy_board

			Result := b1 ~ b2
			check Result end

			b1.set_status (1, 1, b1.occupied_slot)
			Result := not (b1 ~ b2)
			check Result end
		end

feature -- Fixtures

	fixture_dummy_board: BOARD
		do
			create Result.make_default
			Result.parse_slot_map ("[
				*******
				***.***
				***O***
				*.OOO.*
				***O***
				***.***
				*******
			]")
		end

end
