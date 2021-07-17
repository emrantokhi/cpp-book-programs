// WordJumble.cpp : Defines the entry point for the application.
//

#include "WordJumble.h"

using namespace std;

const int LEVELS = 5;

int main()
{
	string guess;
	int level;
	/*
	string words[LEVELS] = { "model", "include", "pepperoni", "cheese", "computer" };
	string hints[LEVELS] = {
		"Someone who poses for a camera.",
		"When you allow someone into your group.",
		"Topping on a pizza.",
		"Dairy product.",
		"What you are most likely using to play this game."
	};
	*/

	enum fields{WORD, HINT, NUM_FIELDS};
	//row field will give you the level
	//col field will give you if you want a hint or a word
	string words[LEVELS][NUM_FIELDS] = {
		{"model", "Someone who poses for a camera."},
		{"include", "When you allow someone into your group."},
		{"pepperoni", "Topping on a pizza."},
		{"cheese", "Dairy product."},
		{"computer", "What you are most likely using to play this game."}
	};
	
	cout << "\t\tWord Jumble!" << endl;
	cout << "Try to unjumble the letters and guess the word!" << endl;
	cout << "If you need a hint, enter in 'hint'." << endl;
	cout << "If you want to quit, enter in 'quit'." << endl;

	//For loop is for looping through the levels
	for (level = 0; level < LEVELS; level++) {
		//Regenerate the seed for each level
		srand(static_cast<unsigned int>(time(0))); 
		
		string jumbled = "";
		string word = words[level][WORD];
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
		while (guess != words[level][WORD]) {
			cout << "Your guess: ";
			cin >> guess;

			if (guess == "quit") {
				//breaks out of while loops
				break;
			}
			else if (guess == "hint") {
				//prints the hint for this level
				cout << "HINT: " << words[level][HINT] << "\n" << endl;
			}
		}

		//Need this here to break out of for loop 
		if (guess == "quit") {
			break;
		}
		else {
			cout << "\nAwesome guess! You got it right!" << endl;
		}
	}
	
	if (guess == "quit") {
		cout << "\nAwwh, you almost had it! You made it to level: " << level 
			<< " out of " << LEVELS << " total levels." << endl;
		cout << "That's " << (level / (LEVELS + 0.0)) * 100 << "% of the game!" << endl;
		cout << "Try again next time!" << endl;
	}
	else {
		cout << "\nCongrats! You beat the game and all of its levels! You must be a genius!" << endl;
	}
	return 0;
}
