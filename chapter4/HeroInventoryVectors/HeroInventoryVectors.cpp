// HeroInventoryVectors.cpp 
// Showcasing vector usage

#include "HeroInventoryVectors.h"

using namespace std;

int main()
{
	vector<string> inventory; //Declare a new vector
	inventory.push_back("Sword"); //Push items onto the end of the vector
	inventory.push_back("Shield");
	inventory.push_back("Armor");

	cout << "You currently have " << inventory.size() << " items." << endl; //Check size
	
	cout << "\nYour Items:" << endl; //Print items in the vector
	for (unsigned int i = 0; i < inventory.size(); i++) {
		cout << "" << inventory[i] << endl;
	}
	
	cout << "\nYou trade your sword for a dagger." << endl;
	inventory[0] = "Dagger"; //Replace items in the vector (similar to arrays)
	cout << "\nYour Items:" << endl;
	for (unsigned int i = 0; i < inventory.size(); i++) {
		cout << "" << inventory.at(i) << endl;
	}

	cout << "\nThe name " << inventory[0] << " has " << inventory[0].length() << " letters in it." << endl;

	cout << "\nYour armor has been destroyed in a fight against the kraken!" << endl;
	inventory.pop_back(); //Popping an item from the end of the vector
	cout << "\nYour Items:" << endl;
	for (unsigned int i = 0; i < inventory.size(); i++) {
		cout << "" << inventory.at(i) << endl;
	}

	cout << "\nWhile you were asleep, you were robbed blind of your most trusted friend!" << endl;
	inventory.clear(); //Clearing a vector
	if (inventory.size() == 0) {
		cout << "You have no more items." << endl;
	}
}
