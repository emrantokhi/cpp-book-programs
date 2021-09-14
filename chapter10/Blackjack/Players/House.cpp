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

void House::printHand() const {
	if (handReveal) {
		Player::printHand();
	} 
	else {
		const std::vector<Card>* hand = p_hand->getCards(); //get a reference so that no copy is made of hand
		//print all values except last
		for (int i = 0; i < hand->size() - 1 ; i++) {
			std::cout << (*hand)[i].getCardName() << " " << (*hand)[i].getSuit() << "    ";
		}
		std::cout << "XXX";
	}
}