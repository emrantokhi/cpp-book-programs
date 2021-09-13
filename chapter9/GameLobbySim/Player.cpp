// Player.cpp
// Player object that will be in lobby (player is a node)

#include "Player.h"

//Constructor
Player::Player(const std::string& name) {
	p_name = new std::string(name);
	next_player = 0;
}

//Destructor
Player::~Player() {
	//clear memory off the heap before destroying object
	delete p_name;
	next_player = 0; //no dangling pointers
	//do not want to delete next_player as it will delete the actual object
}

//Copy constructor
Player::Player(const Player& playerCopy) {
	p_name = new std::string(*(playerCopy.p_name));
	next_player = playerCopy.next_player;
}

//assignment operator overload
Player& Player::operator=(const Player& player) {
	if (this != &player) {
		delete p_name;
		p_name = new std::string(*(player.p_name));
		next_player = player.next_player;
	}
	return *this;
}

void Player::setNext(Player* player) {
	next_player = player;
}
