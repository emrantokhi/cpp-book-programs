// Player.h
// Header file for player object

#include <iostream>
#include "../Cards/Hand.h"

class Player {
private:
	std::string status;
	std::string m_name;
protected:
	Hand* p_hand; //hand will be stored on heap
public:
	Player(const std::string& name); //constructor
	~Player(); //destructor
	std::string getName() const;
	std::string getStatus() const;
	int getScore() const;
	void setStatus(std::string update);
	virtual void printHand() const;
	void draw(); //calls the hand's draw function
};