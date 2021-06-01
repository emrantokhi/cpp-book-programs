// VariableGameStats.cpp
// Have a variables that are changeable during runtime

#include "VariableGameStats.h"

using std::cout;
using std::endl;

int main()
{
	unsigned int score = 5000;
	cout << "Score: " << score << endl;

	//alter the score
	score += 100;
	cout << "Score: " << score << endl;

	//increment lives
	int lives = 3;
	cout << "Lives: " << lives << endl;
	cout << "Lives: " << ++lives << endl;

	lives = 3;
	cout << "Lives: " << lives << endl;
	cout << "Lives: " << lives++ << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "Lives, Bonus: " << lives << "," << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "Lives, Bonus: " << lives << "," << bonus << endl;

	//int wrap around
	score = 4294967295;
	cout << "\nScore: " << score << endl;
	++score;
	cout << "Score: " << score << endl;

	//Enum operation
	enum difficulty {NOVICE, EASY, NORMAL, HARD, LEGEND};
	difficulty myDiff = LEGEND;

	enum shipCost { FIGHTER = 25, BOMBER, CRUISER = 50 };
	shipCost myShip = BOMBER;

	cout << "\nDifficulty: " << myDiff << endl;
	cout << "Difficulty size: " << sizeof(myDiff) << endl;
	cout << "Easy Difficulty size: " << sizeof(NOVICE) << endl;
	cout << "Difficulty - 1: " << myDiff - 1 << endl;

	cout << "My ship: " << myShip << endl;
	cout << "Ship upgrade cost: " << CRUISER - myShip << endl;
	cout << "Size of myShip: " << sizeof(myShip) << endl;
	cout << "Size of Difficulty and shipCost: " << sizeof(difficulty) << ", " << sizeof(shipCost)
		<< endl;

	return 0;
}
