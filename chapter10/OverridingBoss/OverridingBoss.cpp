// OverridingBoss.cpp : Defines the entry point for the application.
//

#include "OverridingBoss.h"

int main()
{
	Enemy enemy;
	Boss boss(30);

	std::cout << "An enemy appears!\n";
	enemy.Taunt();
	enemy.Attack();

	std::cout << "\nAfter defeating the enemy, a boss appears!\n";
	boss.Taunt();
	boss.Attack();

	return 0;
}
