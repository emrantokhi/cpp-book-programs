// YOrN.cpp 
// Demonstrates functions with parameters

#include "YOrN.h"

using namespace std;

//Function declaration 
char askQuestion1();
char askQuestion2(string question);

int main()
{
	char answer1 = askQuestion1();
	if (answer1 == 'y') {
		cout << "You are smart!" << endl;
	}
	else {
		cout << "You are not smart..." << endl;
	}

	char answer2 = askQuestion2("Do you want to save your game? ('y' or 'n'): ");
	switch (answer2) {
		case 'n':
			cout << "Game not saved..." << endl;
			break;
		case 'y': 
			cout << "Game is saved!" << endl;
			break;
		default:
			cout << "Wait...that wasn't an option!" << endl;
			break;
	}
	return 0;
}


char askQuestion1() {
	char answer;
	do {
		cout << "Are you smart? (Enter 'y' or 'n'): ";
		cin >> answer;
	} while (answer != 'y' && answer != 'n');
	return answer;
}

char askQuestion2(string question) {
	char answer;
	do {
		cout << question;
		cin >> answer;
	} while (answer != 'y' && answer != 'n');
	return answer;
}