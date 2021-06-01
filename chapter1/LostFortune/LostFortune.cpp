// LostFortune.cpp 
// Mad Lib that uses user inputted values

#include "LostFortune.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int DONUTS = 24;

int main() {
	int adventurers;
	int killed;
	int survived;
	string lastName;

	//introduction
	cout << "Welcome to Lost Fortune!\n" << endl;

	cout << "Enter the following information: " << endl;
	
	//initialize variables based on user input
	cout << "\tEnter a number: ";
	cin >> adventurers;
	cout << "\tEnter a number smaller than the first: ";
	cin >> killed;
	cout << "\tEnter your last name: ";
	cin >> lastName;

	//initialize variable dependent on others
	survived = adventurers - killed;

	cout << "\n\n\tIn a desolate, dire future, a corrupt president has taken over"
		" the United States. Through a series of loop holes in the democracy that we"
		" held near and dear in our hearts, this madman has taken over as a king.\n" << endl;

	cout << "\tTo begin his reign of madness he completely obliterated the justice system "
		"and removed the many amenities Americans were so used to buying. One of the main "
		"ones were donuts. Sweet, delicious, donuts. Though, because of the president's greed, "
		"he had kept " << DONUTS << " for himself, hidden away in a trap infested safehouse.\n" << endl;
	
	cout << "\tBut " << adventurers << " adventurers had taken it into their own hands. They wanted "
		"those donuts. And nothing was going to stop them. Those " << adventurers << " adventurers "
		"were going to make sure of that. They were led by " << lastName << ", the slyest thief this "
		"world has ever known. On this expedition, " << lastName << " and the other " << adventurers
		<< " adventurers ventured to the trap filled house. " << killed << " had died, and " << survived
		<< "  had made it out in one piece! Each person that survived had gotten " << DONUTS / survived <<
		" donuts. And this, alone, to finally taste the last donuts on Earth, was worth it to them." << endl;
}
