// MadLib.cpp 
// Mad Lib game that takes user input and inserts it into a story

#include "MadLib.h"

using namespace std;

string askString(string prompt = "Please enter in a noun: ");
int askInt(string prompt);
void printStory(string name, string noun, int number, string body_part, string verb);

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
	printStory(name, noun, number, body_part, verb);
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

void printStory(string name, string noun, int number, string body_part, string verb) {
	cout << "This story begins with an adventurer named " << name << " and their"
		<< " unlikely adventures to the local WalledMart." << endl;
	cout << "WalledMart would never have " << noun << " branded cookies, which was "
		<< name << "'s favorite brand!" << endl;
	cout << "But today...today was different. " << name << " had asked the manager when the"
		<< " next shipment was to be ready. But, alas, " << name << " was late again..." << endl;
	cout << name << " rushed over to the aisle with the cookies, and low and behold there were " << number
		<< " left!" << endl;
	cout << "But of course, all around " << name << " there were at least " << number << " Karen's there"
		<< " wanting the last pack." << endl;
	cout << "In the fierce fight against the Karens, " << name << " would valiantly fight them off as hard"
		<< " as they could. " << endl;
	cout << "But in the end, after " << name << "'s " << body_part << " was lost in the fight, they would "
		<< verb << " all over the cookie pack, officially making it theirs." << endl;
	cout << "Finally, " << name << " could enjoy the cookies in peace! The end!" << endl;
}