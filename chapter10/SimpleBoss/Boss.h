// Boss.h
// Header file for boss object (child of enemy)

#include "Enemy.h"

class Boss : public Enemy {
public:
	int m_damageMultiply;
	Boss();
	void SpecialAttack() const;
};