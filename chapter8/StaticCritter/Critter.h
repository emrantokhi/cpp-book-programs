// Critter.h
// Header file for Critter object

#include <iostream>

class Critter {
private:
	int m_hunger;
	int m_critter_num;
	//static means it's stays the same between all different instances of classes
	static int m_num_critters;
public:
	Critter(int hunger = 0);
	void setHunger(int hunger = 0);
	int getHunger() const;
	int getCritterNum() const;
	void greet();
	static int getNumCritters();
};