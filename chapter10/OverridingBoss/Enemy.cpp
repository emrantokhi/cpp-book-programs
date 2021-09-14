// Enemy.cpp
// Enemy body for enemy objects

#include "Enemy.h"

Enemy::Enemy(int damage) :
	m_damage(damage)
{}

void Enemy::Taunt() const {
	std::cout << "The enemy stares at you and smiles, calling you a weakling!\n";
}

void Enemy::Attack() const {
	std::cout << "The enemy slashes at you for " << m_damage << " damage!\n";
}