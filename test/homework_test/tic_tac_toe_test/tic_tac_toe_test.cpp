#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify tic_tac_toe Game")
{
	TicTacToe a;
	a.start_game("x");
	a.mark_board(1);
	a.mark_board(2);
	a.mark_board(3);
	a.mark_board(4);
	a.mark_board(5);
	a.mark_board(6);
	a.mark_board(7);
	a.mark_board(8);
	a.mark_board(9);
	REQUIRE(a.game_over == true);
}
