// GameStats.cpp
// Arithemetic operation intro and variables
//

#include "GameStats.h"

using namespace std;

int main()
{
	int score;
	double distance, engineTemp;
	char playAgain;
	bool shieldsUp;
	
	short lives, aliensKilled;

	//Initialize variables
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	engineTemp = 6453.23;

	//Display variables
	cout << "\nScore: " << score << endl;
	cout << "Distance: " << distance << endl;
	cout << "Play Again? " << playAgain << endl;
	if (shieldsUp)
		cout << "Shields are up!" << endl;
	else
		cout << "Shields are down!" << endl;
	cout << "Lives: " << lives << endl;
	cout << "Aliens killed: " << aliensKilled << endl;
	cout << "Engine temperature: " << engineTemp << endl;
	
	//Input from user into variable
	int fuel;
	cout << "How much fuel: ";
	cin >> fuel;
	cout << "Fuel refilled: " << fuel << endl;

	//Creating typedef type and using it
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nBonus: " << bonus << endl;

	//What short and long does to the size of the integer
	cout << "Long int size: " << sizeof(long int) << endl;
	cout << "Short int size: " << sizeof(short int) << endl;
	cout << "Int size: " << sizeof(int) << endl;

	return 0;
}
