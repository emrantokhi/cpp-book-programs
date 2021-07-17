// WordJumble.cpp : Defines the entry point for the application.
//

#include "WordJumble.h"

using namespace std;

const int LEVELS = 5;

int main()
{
	string guess;
	string words[LEVELS] = { "model", "include", "pepperoni", "cheese", "computer" };
	string hints[LEVELS] = {
		"Someone who poses for a camera.",
		"When you allow someone into your group.",
		"Topping on a pizza.",
		"Dairy product.",
		"What you are most likely using to play this game."
	};

	cout << "\t\tWord Jumble!" << endl;
	cout << "Try to unjumble the letters and guess the word!" << endl;
	cout << "If you need a hint, enter in 'hint'." << endl;
	cout << "If you want to quit, enter in 'quit'.\n" << endl;

	//For loop is for looping through the levels
	for (int level = 0; level < LEVELS; level++) {
		srand(static_cast<unsigned int>(time(0))); //regenerate seed
		
		string jumbled;
		int word_size = words[level].size();
		for (int letter_pos = 0; letter_pos < word_size; letter_pos++) {
			
		}

		cout << "Level " << level + 1 << ":\n" << endl;

		//While loop is for looping through guesses
		while (guess != words[level]) {
			cout << "Your guess: ";
			cin >> guess;

			if (guess == "quit") {
				//breaks out of while loops
				break;
			}
			else if (guess == "hint") {
				//prints the hint for this level
				cout << hints[level] << "\n" << endl;
			}
		}

		//Need this here to break out of for loop 
		if (guess == "quit") {
			break;
		}
	}
	return 0;
}
