// Enemy.cpp
// Object file for enemy class

#include "Enemy.h"

Enemy::Enemy() {
	m_damage = 20;
}

void Enemy::Attack() const {
	std::cout << "An attack does " << m_damage << " damage to your HP!\n";
}