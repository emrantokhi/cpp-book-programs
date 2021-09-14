// Card.h
// Header file for Card object

#include <iostream>
#include <string>
#include <ctime> //getting time for seed
#include <cstdlib> //using random functions

const int MAX_VALUE = 11;

class Card {
private:
	int value; //value of the card itself
	char suit; //heart, spades, diamonds, clubs
	std::string cardName; //ace, k,q,j, or 2-10
	//Only constructor can call these functions
	void setSuit();
	void setCardName(int value); 
public: 
	Card(); //constructor
	int getValue() const;
	char getSuit() const;
	std::string getCardName() const;
};