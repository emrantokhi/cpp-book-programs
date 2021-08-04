// MadLib.cpp 
// Mad Lib game that takes user input and inserts it into a story

#include "MadLib.h"

using namespace std;

string askString(string prompt = "Please enter in a noun: ");
int askInt(string prompt);

int main()
{
	cout << "\t\tWelcome to Mad Lib!" << endl;
	cout << "Answer the questions with a valid answer!" << endl;
	
	string name = askString("Please enter a name: ");
	string noun = askString("Please enter a plural noun: ");
	int number = askInt("Please enter a number: ");
	string body_part = askString("Please enter a body part: ");
	string verb = askString("Please enter a verb: ");

	cout << "Here is your story: \n" << endl;

	return 0;
}

string askString(string prompt) {
	string response;
	cout << prompt;
	cin >> response;
	return response;
}

int askInt(string prompt) {
	int value;
	cout << prompt;
	cin >> value;
	return value;
}
