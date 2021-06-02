// ScoreRater.cpp
// Used to show off if statements

#include "ScoreRater.h"

using namespace std;

int main()
{
	//Testing if statements
	if (true) {
		cout << "This is always true." << endl;
	}
	if (false) {
		cout << "This won't ever occur." << endl;
	}
	int score = 1000;
	if (score) {
		cout << "If I reach here, it is not a 0." << endl;
	}
	if (score >= 250) {
		cout << "Your score was 250 or more!" << endl;
	}
	if (score >= 500) {
		cout << "Your score was 500 or more!" << endl;
		if (score >= 1000) {
			cout << "Your socre was 1000 ore more!" << endl;
		}
	}

	//If-else statements
	cout << endl;
	cout << "Enter in a new score: ";
	cin >> score;

	if (score >= 1000)
		cout << "You scored 1000 or more. Good job!" << endl;
	else
		cout << "You scored less than 1000. Oops." << endl;

	//If-else if-else statements
	cout << endl;
	cout << "Enter in a new new score: ";
	cin >> score;
	if (score >= 1000)
		cout << "You scored 1000 or more. Good job!" << endl;
	else if (score >= 500)
		cout << "You scored 500 or more. Good job!" << endl;
	else if (score >= 250)
		cout << "You scored 250 or more. It's okay." << endl;
	else
		cout << "You scored 250 or less. Try again!." << endl;
	return 0;
}
