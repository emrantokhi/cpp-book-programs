// Enemy.h
// Header file for Enemy Object

#include <iostream>

class Enemy {
protected:
	int* m_damage;
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;
};