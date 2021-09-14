// House.cpp
// Body for House object

#include "House.h"

House::House() :
	Player("House"),
	handReveal(false)
{}

void House::revealHand() {
	handReveal = true;
}

bool House::getReveal() {
	return handReveal;
}