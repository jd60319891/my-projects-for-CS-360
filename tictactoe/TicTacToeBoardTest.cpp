/*#include "TicTacToeBoard.h"
#include <iostream>
#include <cassert>
using namespace std;

int main2 ()
{
  //Testing winning ROWS possibilities
  cout << "\nRunning 1/4 set of tests ... \n";
  TicTacToeBoard ttt("000X0XX00");
  assert(ttt.winner());
  ttt = "1O3XXXXOO";
  assert(ttt.winner());
  ttt = "123456XXX";
  assert(ttt.winner());
  cout << "\nPassed.\n";

  //Testing winning COLS possibilities
  cout << "\nRunning 2/4 set of tests ... \n";
  ttt = "O23O56OXX";
  assert(ttt.winner());
  ttt = "0X34X67X0";
  assert(ttt.winner());
  ttt = "O2X4OX78X";
  //cout << ttt<< endl;
  assert(ttt.winner());
  cout << "\nPassed.\n";

  //Testing winning DIAGONALS possibilities
  cout << "\nRunning 3/4 set of tests ... \n";
  ttt = "OX34O67XO";
  assert(ttt.winner());
  ttt = "12X4X6X00";
  assert(ttt.winner());
  cout << "\nPassed.\n";

  //Testing non-winning boards
  cout << "\nRunning 4/4 set of tests ... \n";
  ttt = "X134O67XO";
  assert(!ttt.winner());
  ttt = "12X4O6X00";
  assert(!ttt.winner());
  cout << "\nPassed.\n";
  
  
  
  
  
}
*/