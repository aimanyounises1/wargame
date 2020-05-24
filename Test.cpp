
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Board.hpp"
#include "doctest.h"
#include <iostream>



#include <cassert>

using namespace std;
using namespace WarGame;
	
TEST_CASE("soldiers health")
    	{
    		Board  	board (8, 8);
   
    		assert(!board.has_soldiers(1));
			board[{0,1}] = new FootSoldier(1);
			board[{0,3}] = new FootCommander(1);
			board[{0,5}] = new FootSoldier(1);
			assert(board.has_soldiers(1));

			// Add soldiers for player 2:
			assert(!board.has_soldiers(2));
			board[{7,1}] = new FootSoldier(2);
			board[{7,3}] = new FootCommander(2);
			board[{7,5}] = new FootSoldier(2);
			assert(board.has_soldiers(2));
			
				board.move(1, {0,1}, Board::MoveDIR::Up);      // FootSoldier of player 1 moves forward and attacks.

			board.move(2, {7,1}, Board::MoveDIR::Down);    // FootSoldier of player 2 moves forward and attacks.

			board.move(1, {0,3}, Board::MoveDIR::Up);      // FootCommander of player 1 moves forward, and all soldiers of player 1 attack.

			board.move(2, {7,3}, Board::MoveDIR::Down);    // FootCommander of player 2 moves left, and all soldiers of player 2 attack.

			
			
			
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

	
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
			
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
    	
    		
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
				
			CHECK(board.board[1][1]->HP==90);
				CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);

			CHECK(board.board[1][1]->HP==90);
}
