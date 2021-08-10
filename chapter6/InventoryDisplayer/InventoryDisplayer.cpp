// InventoryDisplayer.cpp 
// Demonstrates passing by reference for efficiency

#include "InventoryDisplayer.h"

void displayItems(const std::vector<std::string>& inventory);

int main()
{
	std::vector<std::string> inventory;
	inventory.push_back("Shield");
	inventory.push_back("Sword");
	inventory.push_back("Armor");
	inventory.push_back("Potion of Healing");

	displayItems(inventory);
	return 0;
}

//Declaring const prevents any items in inventory from being changed
void displayItems(const std::vector<std::string>& inventory) {
	std::vector<std::string>::const_iterator cIter;
	
	std::cout << "Here is the inventory: " << std::endl;
	for (cIter = inventory.begin(); cIter != inventory.end(); cIter++) {
		std::cout << *cIter << std::endl;
	}

}
