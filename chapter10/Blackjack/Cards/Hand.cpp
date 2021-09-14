// Hand.cpp
// Body of Hand object, holds cards

#include "Hand.h"

Hand::Hand() {
	score = 0;
	//for loop to make sure time seed is different
	for (int i = 0; i < 2; i++) {
		Card card;
		cards.push_back(card);
	}
	for (int i = 0; i < cards.size(); i++) {
		score += cards[i].getValue();
	}
}

int Hand::getScore() const {
	return score;
}

void Hand::draw() {
	if (score >= 21) {
		std::cout << "Cannot draw anymore.\n";
	}
	else {
		Card card;
		cards.push_back(card); //push card into hand
		if (card.getCardName() == "Ace") {
			if (score + 1) {

			}
		}
		score += card.getValue(); //add new card's value to score
	}
}

void Hand::printHand() const {
	for (int i = 0; i < cards.size(); i++) {
		std::cout << cards[i].getCardName() << " " << cards[i].getSuit() << "    ";
	}
}
