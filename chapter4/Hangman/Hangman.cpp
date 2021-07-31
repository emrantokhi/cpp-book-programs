// Hangman.cpp : Defines the entry point for the application.
//

#include "Hangman.h"

using namespace std;

int main()
{
	vector<string> words;
	words.push_back("Ghost of Tsushima");
	words.push_back("Yakuza Like a Dragon");
	words.push_back("Doom Eternal");
	words.push_back("Kingdom Hearts");
	words.push_back("Deus Ex");

	int score;
	string guess;
	string answer;
	string values_not_found = "";
	string guessed_values = "";

	unsigned int word_chosen;

	//srand(static_cast<unsigned int>(time(0)));
	//number between [0, words.size) (noninclusive)
	word_chosen = rand() % words.size();

	answer = words[word_chosen];

	//Create an iterator for the answer
	string::const_iterator iter;
	//Fill the guessed_values up with correct symbols
	//This will allow for words with spaces
	for (iter = answer.begin(); iter != answer.end(); iter++) {
		//If the current value is not a space, put in an underscore
		if (*iter != ' ') {
			guessed_values.append("-");
			values_not_found.push_back(tolower(*iter, locale()));
		}
		//If it is not, add in a space to correspond with spaces
		else {
			guessed_values.append(" ");
		}
	}

	cout << "\t\tWelcome to Hangman!" << endl;
	cout << "Guess a letter or the entire word and press enter!" << endl;
	
	while (values_not_found.size() > 0 || guess != "exit") {
		cout << "\nYour word is: \n\n" << guessed_values << endl;
		cout << "\nEnter a letter or a whole word: ";
		cin >> guess;

		if ((guess.size() < 2) && (values_not_found.find(guess.at(0), 0) != string::npos)) {
			for (int i = 0; i < answer.size(); i++) {
				if (tolower(answer.at(i)) == guess.at(0)) {
					size_t pos = values_not_found.find(guess.at(0), 0);
					if (pos != string::npos) {
						values_not_found.erase(pos, 1);
					}
					guessed_values.erase(i, 1);
					guessed_values.insert(i, guess);
				}
			}
			cout << values_not_found << endl;
			cout << "Great guess, " << guess << " was in the word!" << endl;
		}

	}

	return 0;
}
