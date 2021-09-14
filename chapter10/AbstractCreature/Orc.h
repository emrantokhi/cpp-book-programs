// Orc.h
// Orc object header file

#include "Creature.h"

class Orc : public Creature {
public:
	Orc(int health = 150);
	virtual void Greet() const;
};

