// Enemy.cpp
// Body of enemy object

#include "Enemy.h"

Enemy::Enemy() {
	m_damage = 10;
}

void Enemy::Attack() const {
	std::cout << "Attack inflicts " << m_damage << " to your HP!\n";
}