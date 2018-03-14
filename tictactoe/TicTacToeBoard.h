#include <string>

#ifndef TICTACTOEBOARD_H
#define TICTACTOEBOARD_H

class TicTacToeBoard
{
  public:
    // initializes the board to an empty board
    TicTacToeBoard(); 

    // initializes the board to a given configuration
    TicTacToeBoard(std::string b);

    // returns true if the board has a winner play
    bool winner();

    // clears the board (sets it to an empty board)
    void clearBoard();

    // is the game over?
    bool gameOver();

    // no moves available?
    bool noMoves();

     // makes a move: places token in position
     bool makeMove(int position, char token);

    //is position available?
    bool available(int position);

    // overloaded assignment operator
    TicTacToeBoard& operator= (const std::string &b);

    // overloaded output operator
    friend std::ostream& operator<< (std::ostream &out, const TicTacToeBoard &b);


  private:
    static const int BOARD_SIZE = 9;
    char board[BOARD_SIZE];
    /****
    0 1 2
    3 4 5
    6 7 8
    ****/
};

#endif // TICTACTOEBOARD_H
