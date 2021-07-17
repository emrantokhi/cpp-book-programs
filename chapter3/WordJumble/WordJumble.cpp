// WordJumble.cpp : Defines the entry point for the application.
//

#include "WordJumble.h"

using namespace std;

const int LEVELS = 5;

int main()
{
	string guess;
	string words[LEVELS] = { "modelsh", "include", "pepperoni", "cheese", "computer" };
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
	cout << "If you want to quit, enter in 'quit'." << endl;

	//For loop is for looping through the levels
	for (int level = 0; level < LEVELS; level++) {
		//Regenerate the seed for each level
		srand(static_cast<unsigned int>(time(0))); 
		
		string jumbled = "";
		string word = words[level];
		//While loop to jumble the word
		//It's inside for loop to get a random jumbling everytime
		while (!word.empty()) {
			//Get the size of the word
			int word_size = word.size();
			//Get a random position of the word
			int random_pos = rand() % word_size;
			//Concantenate the letter to jumbled
			jumbled += word.at(random_pos);
			//Erase the letter from the word so that next
			//iteration can pick letters that have not been chosen
			word.erase(random_pos, 1);
		}

		cout << "\nLevel " << level + 1 << ":\n" << endl;
		cout << "Your word is: " << jumbled << "\n" << endl;

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
				cout << "HINT: " << hints[level] << "\n" << endl;
			}
		}

		//Need this here to break out of for loop 
		if (guess == "quit") {
			break;
		}
	}
	return 0;
}
