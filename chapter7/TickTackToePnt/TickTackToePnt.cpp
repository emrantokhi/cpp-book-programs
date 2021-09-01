// TickTackToePnt.cpp 
// Tic Tac Toe using references, functions, and a bit of AI

#include "TickTackToePnt.h"

void printWelcome();
void printExit(char winCon, char player, char computer);
bool askFirstOrNot();
//Changed references to pointers
void initializeBoard(std::vector<char>* const board);
void printBoard(const std::vector<char>* const board);
void occupySpot(std::vector<char>* const board, int pos, char game_piece);
bool emptySpot(const std::vector<char>* const board, int pos);
bool legalMove(const std::vector<char>* const board, int pos);
int askForMove(const std::vector<char>* const board);
int computerMove(const std::vector<char>* const board, char player, char computer);
char checkWinCon(const std::vector<char>* const board, int remainingPositions);

const int WINNING_ROWS[8][3] = {
	{0, 1, 2},
	{3, 4, 5},
	{6, 7, 8},
	{0, 3, 6},
	{1, 4, 7},
	{2, 5, 8},
	{0, 4, 8},
	{2, 4, 6} };
const int TOTAL_WIN_ROWS = 8;

int main()
{
	std::vector<char> board;
	char player;
	char computer;
	//will be 'T' for tie, 'X' or 'O' for winner, 'N' for no status
	char winCon;
	//there are only a maximum of 9 moves, if 0 then board full
	int remainingPositions = 9;

	initializeBoard(&board);
	printWelcome();
	printBoard(&board);

	bool playerFirst = askFirstOrNot();
	//X's traditionally go first
	if (playerFirst) {
		player = 'X';
		computer = 'O';
	}
	else {
		player = 'O';
		computer = 'X';
	}

	std::cout << "\nYou're the " << player << "'s!" << std::endl;
	std::cout << "Your opponent is the " << computer << "'s!" << std::endl;

	do {
		//If the player goes first
		if (playerFirst) {
			//Players move
			//askforMove checks move with legalMove()
			int playerChoice = askForMove(&board);
			occupySpot(&board, playerChoice, player);

			remainingPositions--;

			std::cout << "\nYour move:\n" << std::endl;
			printBoard(&board);

			//Have to check winCon after the first player's turn
			winCon = checkWinCon(&board, remainingPositions);
			if ((winCon == 'X') || (winCon == 'O') || (winCon == 'T')) {
				break;
			}

			//Opponent's move
			int computerChoice = computerMove(&board, player, computer);
			occupySpot(&board, computerChoice, computer);

			remainingPositions--;

			std::cout << "\nYour opponent's move:\n" << std::endl;
			printBoard(&board);
		}
		else {
			//Opponent's move
			int computerChoice = computerMove(&board, player, computer);
			occupySpot(&board, computerChoice, computer);

			remainingPositions--;

			std::cout << "\nYour opponent's move:\n" << std::endl;
			printBoard(&board);

			//Have to check winCon after the first player's turn
			winCon = checkWinCon(&board, remainingPositions);
			if ((winCon == 'X') || (winCon == 'O') || (winCon == 'T')) {
				break;
			}

			//Player's move
			int playerChoice = askForMove(&board);
			occupySpot(&board, playerChoice, player);

			remainingPositions--;

			std::cout << "\nYour move:\n" << std::endl;
			printBoard(&board);
		}
		//Check winCon for second player
		winCon = checkWinCon(&board, remainingPositions);
	} while (winCon == 'N');

	//Print out win statement
	printExit(winCon, player, computer);
}

void printWelcome() {
	std::cout << "Welcome to:\n\t\tTic-Tac-Toe!\n" << std::endl;
	std::cout << "Here you will be going toe to toe with a computer!" << std::endl;
	std::cout << "Think you got what it takes to win? Here are the instructions:" << std::endl;
	std::cout << "You will be able to choose your spot by entering a position 0-8, of which will "
		<< "correspond to the board as shown:" << std::endl;
	std::cout << std::endl;
}

void printExit(char winCon, char player, char computer) {
	if (winCon == player) {
		std::cout << "\nCongrats! You just beat the computer! You're a genius!!!! See if you can do it again!" << std::endl;
	}
	else if (winCon == computer) {
		std::cout << "\nAwwwh I'm sorry! The computer won this time but...you can do it! Give it another try!" << std::endl;
	}
	else {
		std::cout << "\nWoah...looks like you're evenly matched with a computer! It was a tie, try again after to see if you can outsmart it!" << std::endl;
	}
}

bool askFirstOrNot() {
	char response;

	do {
		std::cout << "\nWould you like to go first? (y/n): ";
		std::cin >> response;
	} while ((response != 'y') && (response != 'n'));

	if (response == 'y') {
		return true;
	}
	else {
		return false;
	}
}

void initializeBoard(std::vector<char>* const board) {
	board->push_back('0');
	board->push_back('1');
	board->push_back('2');
	board->push_back('3');
	board->push_back('4');
	board->push_back('5');
	board->push_back('6');
	board->push_back('7');
	board->push_back('8');
}

//Constant pointer pointing to constant to make sure function cannot change board
void printBoard(const std::vector<char>* const board) {
	std::cout << "\t\t"; //tab the board in
	for (int i = 0; i < board->size(); i++) {
		//If it reaches the end of the board, make a new line
		if ((i + 1) % 3 == 0) {
			std::cout << "  " << (*board)[i];
			std::cout << std::endl;
			//If its the last line of the board, don't print the in between lines
			if ((i + 1) != 9) {
				std::cout << "\t\t";
				for (int j = 0; j < 17; j++) {
					std::cout << "-";
				}
				std::cout << std::endl;
				std::cout << "\t\t";
			}
		}
		else {
			std::cout << "  " << (*(board))[i] << "  |";
		}
	}
}

//Give function position to put piece on board (only be called if legalMove() is true)
inline void occupySpot(std::vector<char>* const board, int pos, char game_piece) {
	(*(board))[pos] = game_piece;
}

//Check if the spot given is empty
bool emptySpot(const std::vector<char>* const board, int pos) {
	if (((*(board))[pos] != 'X') && ((*(board))[pos] != 'O')) {
		return true;
	}
	return false;
}

//Function only allowed to check if the move is legal (read only)
inline bool legalMove(const std::vector<char>* const board, int pos) {
	//if the number is higher than 8 or lower than 0, false
	if ((pos < 0) || (pos > 8)) {
		std::cout << "That's not a valid move." << std::endl;
		return false;
	}
	//if the board position is not taken, true
	else if (((*(board))[pos] != 'X') && ((*(board))[pos] != 'O')) {
		return true;
	}
	//if it is taken, false
	else {
		std::cout << "That's not a valid move." << std::endl;
		return false;
	}
}

//Determine the player's move
int askForMove(const std::vector<char>* const board) {
	int pos;
	//get a legal position
	do {
		std::cout << "\nWhat position would you like to put your piece in? (0-8): ";
		std::cin >> pos;
	} while (!legalMove(board, pos));
	return pos;
}

//Determine the computer's next position
int computerMove(const std::vector<char>* const board, char player, char computer) {
	//Moves in order of priority
	for (int row = 0; row < TOTAL_WIN_ROWS; row++) {
		//Grab the winning conditions and do a check
		char pos0 = WINNING_ROWS[row][0];
		char pos1 = WINNING_ROWS[row][1];
		char pos2 = WINNING_ROWS[row][2];
		//Take the winning spot -Top priority
		if ((emptySpot(board, pos0) && ((*(board))[pos0] == computer) && ((*(board))[pos1] == computer))) {
			return WINNING_ROWS[row][2];
		}
		else if ((emptySpot(board, pos0) && ((*(board))[pos0] == computer) && ((*(board))[pos2] == computer))) {
			return WINNING_ROWS[row][1];
		}
		else if ((emptySpot(board, pos0) && ((*(board))[pos1] == computer) && ((*(board))[pos2] == computer))) {
			return WINNING_ROWS[row][0];
		}
		//Check if player can win, if they can take winning spot -second priority
		else if ((emptySpot(board, pos0) && ((*(board))[pos0] == player) && ((*(board))[pos1] == player))) {
			return WINNING_ROWS[row][2];
		}
		else if ((emptySpot(board, pos0) && ((*(board))[pos0] == player) && ((*(board))[pos2] == player))) {
			return WINNING_ROWS[row][1];
		}
		else if ((emptySpot(board, pos0) && ((*(board))[pos1] == player) && ((*(board))[pos2] == player))) {
			return WINNING_ROWS[row][0];
		}
	}
	//If none of those are possible, then take next best spot
	//Take the center -third priority
	if ((emptySpot(board, 4))) {
		return 4;
	}

	//The corners are even numbers other than 4 -fourth priority
	for (int i = 0; i < (*board).size(); i += 2) {
		//Take the rest of the squares
		if ((emptySpot(board, i))) {
			return i;
		}
	}
	//The rest of the squares are odd numbers -fifth priority
	for (int i = 1; i < (*board).size(); i += 2) {
		//Take the rest of the squares
		if ((emptySpot(board, i))) {
			return i;
		}
	}

}

//Check if there have been any winning moves, and return the char of the winner,  else return 0
char checkWinCon(const std::vector<char>* const board, int remainingPositions) {
	//Check all the Winning rows to see if there is a winner
	for (int row = 0; row < TOTAL_WIN_ROWS; row++) {
		//Grab the winning conditions and do a check
		char pos0 = WINNING_ROWS[row][0];
		char pos1 = WINNING_ROWS[row][1];
		char pos2 = WINNING_ROWS[row][2];
		if (((*(board))[pos0] == 'X') && ((*(board))[pos1] == 'X') && ((*(board))[pos2] == 'X')) {
			return 'X';
		}
		else if (((*(board))[pos0] == 'O') && ((*(board))[pos1] == 'O') && ((*(board))[pos2] == 'O')) {
			return 'O';
		}
	}
	//Return 'T' for Tie if there are no more remaining spots on the board
	if (remainingPositions == 0) {
		return 'T';
	}
	return 'N';
}

