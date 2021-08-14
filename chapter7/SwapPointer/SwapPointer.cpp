// SwapPointer.cpp 
// Demonstrates passing pointers to functions
// int* const pVal = constant pointer (pointer cant change, but value pointing to can)
// const int* pVal = pointer to a constant (pointer can change, but val pointing to cannot)

#include "SwapPointer.h"

void badSwap(int score1, int score2);
void goodSwap(int* const pScore1, int* const pScore2); 

int main()
{
	int myScore = 10;
	int yourScore = 1000;

	std::cout << "My score (the sad low one): " << myScore << std::endl;
	std::cout << "Your score (Super high one!): " << yourScore << std::endl;

	badSwap(myScore, yourScore);
	std::cout << "\nAfter the bad swap:" << std::endl;
	std::cout << "My score (the sad low one): " << myScore << std::endl;
	std::cout << "Your score (Super high one!): " << yourScore << std::endl;
	
	goodSwap(&myScore, &yourScore);
	std::cout << "\nAfter the good swap:" << std::endl;
	std::cout << "My score (Super high one!): " << myScore << std::endl;
	std::cout << "Your score (sad low one): " << yourScore << std::endl;

	return 0;
}

void badSwap(int score1, int score2) {
	int holder = score2;
	score2 = score1;
	score1 = holder;
}

//Using constant pointers (pointer can NOT change, but the values they are pointing to can)
void goodSwap(int* const pScore1, int* const pScore2) {
	int holder = *pScore2;
	*pScore2 = *pScore1;
	*pScore1 = holder;
}
