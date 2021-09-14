// Enemy.h
// Header file for enemy object (parent of boss)

#include <iostream>
#include <string>

class Enemy {
public: 
	int m_damage;
	Enemy();
	void Attack() const;
};