// Boss.h
// Header file for Boss object

#pragma once
#include "Enemy.h"

class Boss : public Enemy {
private:
	int m_damageMod;
public:
	Boss();
	void SpecialAttack() const;
};