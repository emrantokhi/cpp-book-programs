// HeroInventory.cpp
// Demonstrating the use of an Array

#include "HeroInventory.h"
#include <iostream>
#include <string>
using namespace std;

const int MAX_ITEMS = 20;

int main()
{
	string inventory[MAX_ITEMS];
	
	inventory[0] = "Sword";
	inventory[1] = "Shield";
	inventory[2] = "Steel Breastplate";
	inventory[3] = "Potion of Revival";

	cout << "Your items:" << endl;
	//for arrays, can use sizeof(array)/sizeof(array[0]) to find length
	//but using vectors would be more optimal
	for (int i = 0; i < sizeof(inventory)/sizeof(inventory[0]); i++) {
		if (inventory[i] != "") {
			cout << inventory[i] << endl;
		}
	}

	int position;
	cout << "\nEnter a position to see what is in that slot (0-" << MAX_ITEMS << "): ";
	cin >> position;
	if (inventory[position] == "") {
		cout << "There is nothing in that slot." << endl;
	}
	else {
		cout << inventory[position] << endl;
	}

	cout << "\nYou traded your sword for a musket. Your inventory: " << endl;
	inventory[0] = "Musket";
	for (int i = 0; i < MAX_ITEMS; i++) {
		if (inventory[i] != "") {
			cout << inventory[i] << endl;
		}
	}

	cout << "\nYou found a gold nugget that can be used to sell for a great price. Your inventory: " << endl;
	inventory[4] = "Gold Nugget";
	for (int i = 0; i < MAX_ITEMS; i++) {
		if (inventory[i] != "") {
			cout << inventory[i] << endl;
		}
	}

	return 0;
}
