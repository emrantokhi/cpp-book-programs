// PrivateCritter.cpp : Defines the entry point for the application.
//

#include "PrivateCritter.h"


int main()
{
	Critter crit(10);
	Critter crit2;
	
	std::cout << "\nThe hunger level of critter 1 is: " << crit.getHunger() << "\n\n";

	std::cout << "Changing critter 1 hunger level to 3." << "\n";
	crit.setHunger(3);
	std::cout << "Changing critter 1 hunger level to -1." << "\n";
	crit.setHunger(-1);
	std::cout << "Critter 1 hunger level is: " << crit.getHunger() << "\n\n";
	
	std::cout << "Critter 2 hunger level: " << crit2.getHunger() << "\n\n";
	return 0;
}
