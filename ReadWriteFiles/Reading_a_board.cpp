#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

enum class State {kEmpty, kObstacle};

vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    
    vector<State> row;
    while (sline >> n >> c && c == ',') {
      // a State::kEmpty if n is 0, and push_back
      // a State::kObstacle otherwise.
      switch(n)
      {
        case(1): 
          row.push_back(State::kObstacle);
          break;
        case(0):
          row.push_back(State::kEmpty);
          break;
      }

    }
    return row;
}


vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  //  board declarationto store State objects
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}


// cells with State type instead of int type.
string CellString(State cell) {
  switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   "; 
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      //call CellString on each element of the board before streaming to cout.
      cout<< CellString(board[i][j]);
      
    }
    cout << "\n";
  }
}

int main() {
  vector<vector<State>> board = ReadBoardFile("board.txt");
  PrintBoard(board);
}
