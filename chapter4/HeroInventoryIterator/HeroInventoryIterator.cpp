// HeroInventoryIterator.cpp
// Demonstrates Iterator
#include "HeroInventoryIterator.h"

using namespace std;

int main()
{
	//create vector and fill it up
	vector<string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Shield");
	inventory.push_back("Armor");

	vector<string>::iterator myIterator; //refers to an element in a container
	vector<string>::const_iterator iter; //does not allow referenced item to be changed

	cout << "Your items:" << endl;
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	//set myIterator to the first value in inventory
	myIterator = inventory.begin();

	//change the first value (since its not const)
	//generally don't want to do this
	cout << "\nYou trade your sword for a wand." << endl;
	*myIterator = "Wand";

	cout << "\nYour Items:" << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}

	//can use dereferencing to get the value the iterator is pointing to
	cout << "\nThe item " << *myIterator << " has " << (*myIterator).size() << " letters in it." << endl; //Using methods with .
	//can also reference values + 1 and more as long as there is a value there
	cout << "\nThe item " << *(myIterator + 1) << " has " << (myIterator + 1)->size() << " letters in it." << endl; //using methods with ->

	//myIterator->size() === (*myIterator).size()
	//-> says look at the value its referencing

	cout << "\nYou obtain a potion from a fierce fight." << endl;
	//this next line messes up myIterator, so you have to set it equal to inventory.begin() again
	//this insert returns a new iterator pointing at the new position
	inventory.insert(inventory.begin(), "Potion"); //insert at the beginning of the vector

	cout << "\nYour items:" << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}

	cout << "\nYour armor has been destroyed in the battle!" << endl;
	//erase returns an iterator too
	inventory.erase((inventory.begin() + 3));

	cout << "\nYour items:" << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}
	
	return 0;
}
