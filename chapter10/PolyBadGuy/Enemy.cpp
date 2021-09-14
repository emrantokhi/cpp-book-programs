// Enemy.cpp
// Body for Enemy object

#include "Enemy.h"

Enemy::Enemy(int damage) {
	m_damage = new int(damage); //put damage on the heap
}

Enemy::~Enemy() {
	std::cout << "\nDestructor in Enemy is called, deleting m_damage.\n";
	delete m_damage;
	m_damage = 0;
}

void Enemy::Attack() const {
	std::cout << "The enemy strikes and deals " << *m_damage << " to your HP!\n";
}