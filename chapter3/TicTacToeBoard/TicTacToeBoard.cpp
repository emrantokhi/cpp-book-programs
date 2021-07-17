// TicTacToeBoard.cpp 
// Shows how to use multidimensional arrays

#include "TicTacToeBoard.h"

using namespace std;

const int ROWS = 3;
const int COLUMNS = 3;

int main()
{
	char board[ROWS][COLUMNS] = {
		{'X', 'X', 'O'},
		{' ', ' ', 'X'},
		{'X', 'O', 'O'}
	};
	cout << "Here's the tic-tac-toe board:" << endl;
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLUMNS; col++) {
			cout << board[row][col] << " ";
		}
		cout << endl;
	}

	cout << "\nNow O will have the next move:" << endl;
	board[1][1] = 'O';
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLUMNS; col++) {
			cout << board[row][col] << " ";
		}
		cout << endl;
	}

	cout << "\nNow X will have the next move:" << endl;
	board[1][0] = 'X';
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLUMNS; col++) {
			cout << board[row][col] << " ";
		}
		cout << endl;
	}

	cout << "\nX has won!";

	return 0;
}
