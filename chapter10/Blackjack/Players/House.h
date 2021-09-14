// House.h
// Header file for House

#include "Player.h"

//child of player
class House : public Player {
private:
	bool handReveal;
public:
	House();
	void revealHand(); //set bool to true
	bool getReveal();
	virtual void printHand() const;
};