// Boss.h
// Header file for boss object
 
#include "Enemy.h"

class Boss : public Enemy {
protected:
	int* m_multiplier;
public:
	Boss(int multiplier = 2);
	virtual ~Boss();
	void virtual Attack() const; //optional virtual keyword
};