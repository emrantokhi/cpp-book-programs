// Boss.cpp
// Boss body for boss objects

#include "Boss.h"

Boss::Boss(int damage) :
	Enemy(damage)
{}

//overriding enemy member functions
void Boss::Taunt() const {
	std::cout << "The boss looks at you and chuckles, calling your existence pitiful!\n";
}

void Boss::Attack() const {
	Enemy::Attack(); //call base member attack
	std::cout << "The boss laughs after slashing your health!\n";
}