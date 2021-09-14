// Enemy.h
// Header file for enemy objects

#pragma once
#include <iostream>

class Enemy {
private:
	int m_damage;
public:
	Enemy(int damage = 10);
	void virtual Taunt() const; //virtual allows overriding
	void virtual Attack() const; 
};