#include "Maze.h"
#include <iostream>
#include <stack>
using namespace std;

// Creates a Maze with no blocked cells; start = (0, 0); goal = (SIZE, SIZE)
Maze::Maze(){
  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++) {
          maze[row][col] = EMPTY;
    }
  }
  startCellRow = startCellCol = 0;
  endCellRow = endCellCol = SIZE-1;
  setStartCell(0,0);
  setEndCell(SIZE-1, SIZE-1);
}

// Puts obstacle on the cell (row, col)
void Maze::blockCell(int row, int col){
  maze[row][col] = BLOCKED;
}

// Sets start cell to (row, col)
void Maze::setStartCell(int row, int col){
  maze[startCellRow][startCellCol] = EMPTY;
  startCellRow = row;
  startCellCol = col;
  maze[startCellRow][startCellCol] = START;
}

// Sets goal cell to (row, col)
void Maze::setEndCell(int row, int col){
  maze[endCellRow][endCellCol] = EMPTY;
  endCellRow = row;
  endCellCol = col;
  maze[endCellRow][endCellCol] = END;
}

// is position (row, col) clear?
bool Maze::isClear(int row, int col) const{
  return maze[row][col] == EMPTY;
}

// returns the size of the Maze
int Maze::size() const{
  return SIZE;
}

// clear the maze: erase all obstacles
void Maze::clearAllCells(){
    for (int row = 0; row < SIZE; row++) {
      for (int col = 0; col < SIZE; col++) {
        if (maze[row][col]!= 'S' || maze[row][col]!= 'G')
            maze[row][col] = EMPTY;
      }
    }
}

// overloaded output operator
std::ostream& operator<< (std::ostream &out, const Maze &m){
  for (int row = 0; row <= m.size()+1; row++) out << "_";
  for (int row = 0; row < m.size(); row++) {
    out << "\n|";
    for (int col = 0; col < m.size(); col++) {
      out << m.maze[row][col];
    }
    out << "|\n";
  }
  for (int row = 0; row <= m.size()+1; row++) out << "-";
  return out;
}

std::string solveBacktracking(){
    
    
    
//your code here
   string result = "";
   
    return "";
}