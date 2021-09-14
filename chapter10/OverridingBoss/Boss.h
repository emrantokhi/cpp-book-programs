// Boss.h
// Header file for boss object

#include "Enemy.h"

class Boss : public Enemy {
public:
	Boss(int damage = 20);
	void virtual Taunt() const; //virutal here is optional if there are more children
	void virtual Attack() const;
};