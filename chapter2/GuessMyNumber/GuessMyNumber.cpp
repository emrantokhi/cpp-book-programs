// GuessMyNumber.cpp
// Guess the random number generated (using game loop)

#include "GuessMyNumber.h"

using namespace std;

//adjustable number of tries and range of numbers
const int NUM_TRIES = 5;
const int GUESS_RANGE = 100;

int main()
{
	//Game loop stage: Setup
	cout << "Welcome to Guess the Number!\n" << endl;
	cout << "You have " << NUM_TRIES << " guesses to guess the number correctly.\n" << endl;
	
	srand(static_cast<unsigned int>(time(0))); //generate seed

	int randomNum = rand() % GUESS_RANGE + 1; //number between 0-(GUESS_RANGE - 1) adding 1 makes it (1 - GUESS_RANGE)
	int tries = 0;
	int guess;
	bool win = false;
	
	//Game Loop stage: Player input
	while (tries != NUM_TRIES) {
		cout << "Guess #" << tries + 1 << ": ";
		cin >> guess;
		//Game loop stage: update game internals/display & if game is over
		if (guess == randomNum) {
			win = true;
			break;
		}
		else {
			//if guess too high
			if (guess > randomNum)
				cout << "\nGuess was too high!" << endl;
			//if guess too low
			if(guess < randomNum)
				cout << "\nGuess was too low!" << endl;
			
			cout << "\nTry again!\n" << endl;
			++tries;
		}
	}
	//Game loop stage: shutting down
	if (win) {
		cout << "\nCongrats! You guessed the random number in " << tries + 1 << " tries! The number was " << randomNum << "!\n" << endl;
	}
	else {
		cout << "\nGood try! But you lost. The correct number was: " << randomNum << "\n" << endl;
	}
	return 0;
}
