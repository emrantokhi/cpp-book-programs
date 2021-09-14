// Hand.h
// Header file for hand object

#include "Card.h"
#include <vector>

class Hand {
private:
	std::vector<Card> cards; 
	int score; //combined score of hand
public:
	Hand(); //constructor
	void draw();
	int getScore() const;
	void printHand() const;
};

