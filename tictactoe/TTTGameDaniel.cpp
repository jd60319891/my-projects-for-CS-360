/*#include "TicTacToeBoard.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    TicTacToeBoard TicTacToeGameDaniel;
    int move = 0;
    cout <<TicTacToeGameDaniel;
    cout <<"let's play tic tac toe, X goes first\n";
    
    while(!TicTacToeGameDaniel.gameOver()){
    
        cout <<"It's X's turn. Give me a position\n";
        cin >>move;
        TicTacToeGameDaniel.makeMove(move, 'X');
        if(TicTacToeGameDaniel.winner()){
            cout <<"X, you win!!!";
            cout <<TicTacToeGameDaniel;
            return 0;
        }
        cout <<TicTacToeGameDaniel;
    
        cout <<"It's 0's turn. Give me a position\n";
        cin >>move;
        TicTacToeGameDaniel.makeMove(move, '0');
        if(TicTacToeGameDaniel.winner()){
            cout <<"0, you win!!!!";
            cout <<TicTacToeGameDaniel;
            return 0;
      
        }
        cout <<TicTacToeGameDaniel;
           
    }   
    return 0;
}

*/