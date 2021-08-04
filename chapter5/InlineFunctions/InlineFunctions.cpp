// InlineFunctions.cpp
// Demonstrate Inline Functions

#include "InlineFunctions.h"

using namespace std;

const float MAX_HEALTH = 100.0;
const int ROUNDS = 3;
//Function declarations
float radiationDamage(float health);

int main()
{
	float health = MAX_HEALTH;
	cout << "Your health: " << health << endl;
	for (int i = 0; i < ROUNDS; i++) {
		health = radiationDamage(health);
		cout << "Your health after radiation damage: " << health << endl;
	}
	return 0;
}

inline float radiationDamage(float health) {
	return (health / 2);
}
