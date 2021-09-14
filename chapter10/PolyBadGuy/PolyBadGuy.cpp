// PolyBadGuy.cpp 
// Demonstrates member calling functions dynamically

#include "PolyBadGuy.h"


int main()
{
	std::cout << "Calling an Attack() on Boss object through an Enemy pointer\n";
	Enemy* pBadGuy = new Boss; //boss IS A enemy so this works
	pBadGuy->Attack();

	std::cout << "\nDeleting pointer to Enemy:\n";
	delete pBadGuy;
	pBadGuy = 0; //no dangling pointer

	return 0;
}
