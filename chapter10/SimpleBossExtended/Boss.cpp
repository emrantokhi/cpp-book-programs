// Boss.cpp
// Body of Boss object

#include "Boss.h"

Boss::Boss() {
	m_damageMod = 2;
}

void Boss::SpecialAttack() const {
	std::cout << "The boss just used a special attack and did " << (m_damage * m_damageMod) << " damage to your HP!\n";
}