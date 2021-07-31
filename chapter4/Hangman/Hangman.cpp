// Hangman.cpp : Defines the entry point for the application.
//

#include "Hangman.h"

using namespace std;

bool ignoreCaseEquals(const string& a, const string& b) {
	if (a.size() != b.size()) {
		return false;
	}
	for (unsigned int i = 0; i < a.size(); i++) {
		if (tolower(a.at(i)) != tolower(b.at(i))) {
			return false;
		}
	}
	return true;
}

int main()
{
	vector<string> words;
	words.push_back("Ghost of Tsushima");
	words.push_back("Yakuza Like a Dragon");
	words.push_back("Doom Eternal");
	words.push_back("Kingdom Hearts");
	words.push_back("Deus Ex");

	int score = 0;
	//for the random value to choose a word
	unsigned int word_chosen;
	//win is to show status of the game
	bool win = false;
	string guess;
	string answer;
	//v_n_f will store only letters not found, no whitespace
	string values_not_found = "";
	//guessed values will be the ----'s, letters appear where appropriate when guessed right
	//used to display correct guesses
	string guessed_values = "";

	//seed the random number generator
	srand(static_cast<unsigned int>(time(0)));
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
	cout << "Guess a letter or the entire word and press enter!\n" << endl;
	cout << "You gain 2 points for correct 1 letter guesses.\n" << endl;
	cout << "You gain points equal to how ever many letters that\n"
		"have not been revealed times 3 when making a full text guess correctly!\n" << endl;
	cout << "You lose -1 points for every wrong letter guess,\nand lose points equal"
		"to however many letters are not revealed for wrong full text guesses.\n" << endl;
	cout << "You can exit the game by simply typing in 'exit'! Good luck!" << endl;
	
	//When all v_n_f are found, letters are removed from it when guessed correctly
	while (values_not_found.size() > 0 && guess != "exit") {
		cout << "\nScore: " << score << endl;
		cout << "\nYour word is: \n\n" << guessed_values << endl;
		cout << "\nEnter a letter or the entire text: ";
		getline(cin, guess); //grab the whole line incase they have a whole guess

		//if they just want to exit
		if (guess == "exit") {
			break;
		}
		//if the guess is one letter and is a correct guess
		else if ((guess.size() < 2) && (values_not_found.find(guess.at(0), 0) != string::npos)) {
			//go through every letter of the answer to remove all instances of the correctly guessed letter
			for (int i = 0; i < answer.size(); i++) {
				if (tolower(answer.at(i)) == guess.at(0)) {
					//first remove the letter from the values not found
					size_t pos = values_not_found.find(guess.at(0), 0);
					//error check just in case, but since its in the outer if statement, it should have double protection
					if (pos != string::npos) {
						values_not_found.erase(pos, 1);
					}
					//now remove the - in g_v and insert the letter where the letter is located 
					guessed_values.erase(i, 1);
					guessed_values.insert(i, guess);
				}
			}
			cout << "Great guess, " << guess << " was in the word! +2 points!" << endl;
			score += 2;
		}
		//if the guess is more than one letter, and check if the entire guess is correct
		else if ((guess.size() >= 2) && (ignoreCaseEquals(answer, guess))) {
			score += values_not_found.size() * 3;
			values_not_found = ""; //set the not found values to nothing for win con
			win = true; 
			cout << "Wow! That was an amazing guess, you just got the whole thing! "
				"You get 3 points for every letter that wasn't revealed!" << endl;
		}
		//if guesses are wrong
		else if (guess.size() >= 2) {
			cout << "Wrong guess! Try again! -1 point for every letter in the word that isn't revealed!" << endl;
			score -= values_not_found.size();
		}
		else {
			cout << "Wrong guess! Try again! -1 point!" << endl;
			score -= 1;
		}
	}

	//if win con is achieved
	if (win) {
		cout << "\nGood moves, player! You got a score of: " << score << endl;
	}
	else {
		cout << "\nTry again next time, I'm sure you can get it!" << endl;
	}

	return 0;
}
