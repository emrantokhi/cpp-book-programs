// Boss.cpp
// Boss object (child of enemy)

#include "Boss.h"

Boss::Boss() {
	m_damageMultiply = 3;
}

void Boss::SpecialAttack() const {
	std::cout << "The boss deals " << (m_damage * m_damageMultiply) << " to your HP with a special attack!\n";
}