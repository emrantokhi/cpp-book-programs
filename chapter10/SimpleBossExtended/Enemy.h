// Enemy.h
// Header file for Enemy object

#pragma once
#include <iostream>

class Enemy {
protected:
	int m_damage;
public:
	Enemy();
	void Attack() const;
};