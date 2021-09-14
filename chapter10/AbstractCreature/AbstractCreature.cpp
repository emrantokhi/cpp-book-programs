// AbstractCreature.cpp 
// Demonstrates the use of abstract classes

#include "AbstractCreature.h"

int main()
{
	Creature* pCreature = new Orc();

	pCreature->Greet();
	pCreature->DisplayHealth();

	return 0;
}
