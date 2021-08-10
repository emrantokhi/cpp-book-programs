// InventoryReferencer.cpp
// Demonstrate using functions that return references

#include "InventoryReferencer.h"

std::string& refToElement(std::vector<std::string>& inventory, int i);

int main()
{
	std::vector<std::string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Shield");
	inventory.push_back("Armor");
	inventory.push_back("Potion of Healing");

	//Printing a returned reference
	std::cout << "The first returned reference at i=0:\n";
	std::cout << refToElement(inventory, 0);
	
	//Assigning a returned value to a reference variable -- efficient
	std::cout << "\nAssigning a returned reference to another reference variable:\n";
	std::string& stringRef = refToElement(inventory, 1);
	std::cout << stringRef << std::endl;

	std::cout << "Printing the value straight from the function:\n";
	std::cout << refToElement(inventory, 1) << std::endl;

	//Changing the object through reference
	std::cout << "\nAltering the object through reference:\n";
	std::string& item3 = refToElement(inventory, 2);
	std::cout << "Changing the item: " << item3 << std::endl;
	item3 = "Potion of Explosions";
	std::cout << item3 << std::endl;
	std::cout << "The item in the inventory:\n";
	std::cout << inventory[2] << std::endl;

	//Copying the referenced value into a string variable
	std::cout << "\nAssigning a returned reference to a variable:" << std::endl;
	std::string str = refToElement(inventory, 3);
	std::cout << "The value in the string variable: " << str << std::endl;
	str = "Wood";
	std::cout << "Changing the variable: " << str << std::endl;
	std::cout << "The item that may/may not be changed in inventory: " << inventory[3] << std::endl;

	return 0;
}

std::string& refToElement(std::vector<std::string>& inventory, int i) {
	//if i is too big or too small return the last element
	if (i >= inventory.size()) {
		return inventory[inventory.size() - 1];
	}
	return inventory[i];
}