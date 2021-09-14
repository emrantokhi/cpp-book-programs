// SimpleBoss.cpp : Defines the entry point for the application.
// Demonstrate the use of Inheritance 

#include "SimpleBoss.h"


int main()
{
	Enemy underling;
	Boss boss;

	std::cout << "There is an underling approaching!\n";
	underling.Attack();

	std::cout << "\nAfter slaying that underling, a boss approaches!\n";
	boss.Attack();
	boss.SpecialAttack();

	return 0;
}
