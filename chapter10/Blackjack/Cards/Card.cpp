// Card.cpp
// Body for Card object, will represent one card

#include "Card.h"

Card::Card() {
	value = rand() % MAX_VALUE + 1; //guess range 1-MAXVALUE
	setSuit(); //set the suit value
	setCardName(value);
}

int Card::getValue() const {
	return value;
}

char Card::getSuit() const {
	return suit;
}

std::string Card::getCardName() const {
	return cardName;
}

void Card::setSuit() {
	srand(static_cast<unsigned int>(time(0)));
	enum suits { HEART, SPADE, DIAMOND, CLUB, NUM_SUITS };
	int suitVal = rand() % NUM_SUITS; //value between 0-3
	switch (suitVal) {
		case 0:
			suit = 'h';
			break;
		case 1:
			suit = 's';
			break;
		case 2:
			suit = 'd';
			break;
		case 3:
			suit = 'c';
			break;
		default:
			std::cout << "Error occured during suit selection.\n";
			break;
	}
}

void Card::setCardName(int value) {
	if (value == 10) {
		enum face { KING, QUEEN, JACK, NUM_FACES };
		int faceVal = rand() % NUM_FACES; //between 0-2
		switch (faceVal) {
		case 0:
			cardName = "King";
			break;
		case 1:
			cardName = "Queen";
			break;
		case 2:
			cardName = "Jack";
			break;
		default:
			std::cout << "Error occured in setting cardName.\n";
			break;
		}
	}
	else if ((value == 1) || (value == 11)) {
		cardName = "Ace";
	}
	else {
		cardName = std::to_string(value);
	}
}