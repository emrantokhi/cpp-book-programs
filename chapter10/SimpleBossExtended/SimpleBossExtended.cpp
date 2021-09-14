// SimpleBossExtended.cpp 
// Demonstrates the use of accessors in inheritance

#include "SimpleBossExtended.h"

int main()
{
	Enemy enemy;
	Boss boss;

	std::cout << "An enemy appears!\n";
	enemy.Attack();

	std::cout << "\nAfter defeating that underling, a boss appears!\n";
	boss.Attack();
	boss.SpecialAttack();

	return 0;
}
