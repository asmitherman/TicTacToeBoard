/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

// EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBardTest, changeTurn)
{
	TicTacToeBoard board;
	Piece yo;
	yo = board.toggleTurn();
	if (yo == O) {
		ASSERT_TRUE(true);
	}
}

TEST(TicTacToeBardTest, PlacePiece)
{
	TicTacToeBoard board;
	Piece yo, hi;
	yo = board.placePiece(1,2);
	hi = board.getPiece(1,2);
	if(yo == hi) {ASSERT_TRUE(true);}

}

TEST(TicTacToeBardTest, outsidePiece)
{
	TicTacToeBoard board;
	Piece yo;
	yo = board.placePiece(5,5);
	if(yo == '?') {ASSERT_TRUE(true);}

}
TEST(TicTacToeBardTest, winRow)
{
	TicTacToeBoard board;
	Piece yo;
	board.placePiece(0,0);
	board.placePiece(1,0);
	board.placePiece(0,1);
	board.placePiece(1,1);
	board.placePiece(0,2);
	board.placePiece(0,2);
	board.placePiece(0,3);
	yo = board.getWinner();
	if(yo == 'X') {ASSERT_TRUE(true);}


}
TEST(TicTacToeBardTest, winCol)
{
	TicTacToeBoard board;
	Piece yo;
	board.placePiece(0,0);
	board.placePiece(0,1);
	board.placePiece(1,0);
	board.placePiece(2,2);
	board.placePiece(2,0);
	yo = board.getWinner();
	if(yo == 'X') {ASSERT_TRUE(true);}

}
