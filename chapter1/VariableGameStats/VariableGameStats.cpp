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
	enum class difficulty {NOVICE, EASY, NORMAL, HARD, LEGEND};
	difficulty myDiff = difficulty::LEGEND;

	enum class strength {WEAK, STRONG, INVINCIBLE};
	strength myStrength = strength::WEAK;

	enum class shipCost { FIGHTER = 25, BOMBER, CRUISER = 50 };
	shipCost myShip = shipCost::BOMBER;

	cout << "\nDifficulty: " << (int)myDiff << endl;
	cout << "Difficulty size: " << sizeof(myDiff) << endl;
	cout << "Easy Difficulty size: " << sizeof(difficulty::NOVICE) << endl;
	cout << "Difficulty - 1: " << ((int)myDiff) - 1 << endl;
	cout << "Fighter - 2: " << ((int)shipCost::FIGHTER) - 2 << endl;

	cout << "My ship: " << ((int)myShip) << endl;
	cout << "Ship upgrade cost: " << ((int)shipCost::CRUISER) - ((int)myShip) << endl;
	cout << "Size of myShip: " << sizeof(myShip) << endl;
	cout << "Size of Difficulty and shipCost: " << sizeof(difficulty) << ", " << sizeof(shipCost)
		<< endl;
	
	cout << "\nStrength: " << ((int)myStrength) << endl;
	if (((int)strength::WEAK) == ((int)difficulty::NOVICE))
		cout << "Weak and novice are the same number but not comparable w/o cast!" << endl;
	if (strength::WEAK < strength::STRONG)
		cout << "Strength is comparable to strength w/o a cast";

	return 0;
}
