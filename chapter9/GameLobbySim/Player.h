// Player.h
// Header file for player object

#pragma once
#include <string>

class Player {
	friend std::ostream& operator<<(std::ostream& os, const Player& player); //print overload
private:
	std::string* p_name;
	Player* next_player;
public:
	Player(const std::string& name = ""); //constructor
	~Player(); //destructor
	Player(const Player& playerCopy); //copy constructor

	Player& Player::operator=(const Player& player); //assignment overload 

	std::string getName() { return *p_name; }
	
	inline Player* getNext() { return next_player; }
	void setNext(Player* player);
};