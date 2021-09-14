// Player.cpp
// Body of player object

#include "Player.h"

//constructor
Player::Player(const std::string& name) :
	status("No Status"),
	m_name(name)
{
	p_hand = new Hand();
}

//destructor
Player::~Player() {
	delete p_hand;
	p_hand = 0; //set to 0 so no dangling pointer
}

std::string Player::getName() const {
	return m_name;
}

std::string Player::getStatus() const {
	return status;
}

void Player::printHand() const {
	p_hand->printHand();
}

int Player::getScore() const {
	return p_hand->getScore();
}

void Player::draw() {
	p_hand->draw();
}

void Player::setStatus(std::string update) {
	status = update;
}