/*#include "TicTacToeBoard.h"
#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;
// initializes the board to an empty board
TicTacToeBoard::TicTacToeBoard(){
clearBoard();
}
// initializes the board to a given configuration
TicTacToeBoard::TicTacToeBoard(string b){
strcpy(board, b.c_str());
}
void TicTacToeBoard::clearBoard(){
strcpy(board, "123456789");
}
// is the game over?
bool TicTacToeBoard::gameOver(){
return winner() || noMoves();
}
// no moves available?
bool TicTacToeBoard::noMoves(){
int empty_count = 0;
for (int i=0; i< BOARD_SIZE; i++){
if (isdigit(board[i]))
empty_count++;
}
return empty_count <1;
}
// makes a move: places token in position
bool TicTacToeBoard::makeMove(int position, char token){
board[position] = token;
if(position>=0 && position<=8){
board[position]=token;
return true;
}
else{
return false;
}
}
// is position available?bool TicTacToeBoard::available(int position){
bool TicTacToeBoard::available(int position){
return isdigit(board[position]);
}
// overloaded assignment operator
TicTacToeBoard& TicTacToeBoard::operator= (const string &b)
{
strcpy(board, b.c_str());
return *this;
}
// overloaded output operator
std::ostream& operator<< (std::ostream &out, const TicTacToeBoard &b)
{
out << b.board[0] << ", " << b.board[1] << ", " << b.board[2] << endl;
out << b.board[3] << ", " << b.board[4] << ", " << b.board[5] << endl;
out << b.board[6] << ", " << b.board[7] << ", " << b.board[8] << endl;
//your code here
return out;
}
// returns true if the board is a winning board
bool TicTacToeBoard::winner(){
if(board[0] == board[1] && board[1] == board[2])
return true;
else if(board[3] == board[4] && board[4] == board[5])
return true;
else if(board[6] == board[7] && board[7] == board[8])
return true;
else if(board[0] == board[3] && board[3]==board[6])
return true;
else if(board[1] == board[4] && board[4] == board[7])
return true;
else if(board[2] == board[5] && board[5] == board[8])
return true;
else if(board[0] == board[4] && board[4] == board[8])
return true;
else if(board[6] == board[4] && board[4] == board[2])
return true;
else {
return false;
}
}
 */