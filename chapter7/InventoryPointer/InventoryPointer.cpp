// InventoryPointer.cpp 
// Demonstrate returning pointers from functions

#include "InventoryPointer.h"

std::string* ptrToElement(std::vector<std::string>* const inventory, int i);
void changeElement(std::string* item, std::string newItem);

int main()
{
	std::vector<std::string> inventory(4);
	inventory[0] = "Sword";
	inventory[1] = "Shield";
	inventory[2] = "Potion of Healing";
	inventory[3] = "Armor";

	std::string* pItem2 = ptrToElement(&inventory, 1);
	std::cout << "Item number 2 is: " << *pItem2 << std::endl;
	std::cout << "Item number 1 is: " << *(pItem2 - 1) << std::endl;

	std::cout << "\nChanging item 2 to a shoe: " << std::endl;
	std::cout << "Item 2 currently: " << *pItem2 << std::endl;
	changeElement(pItem2, "Shoe");
	std::cout << "Item 2 after change: " << *pItem2 << std::endl;

	std::cout << "\nChanging item 1 to an Axe: " << std::endl;
	std::cout << "Item 1 currently: " << *(pItem2 - 1) << std::endl;
	changeElement((pItem2 - 1), "Axe");
	std::cout << "Item 1 after change: " << *(pItem2 - 1) << std::endl;

	return 0;
}

std::string* ptrToElement(std::vector<std::string>* const inventory, int i) {
	//deref the string vector,  then get the value, then get the address of the value
	return &((*inventory)[i]);
}

void changeElement(std::string* item, std::string newItem) {
	*item = newItem;
	return;
}
