// ArrayPasser.cpp 
// Demonstrates passing arrays

#include "ArrayPasser.h"

void increaseScores(int* const scores, const int NUM_ELEMENTS);
void displayScores(const int* const scores, const int NUM_ELEMENTS);

int main()
{
	const int ELEMENTS = 5;
	int scores[ELEMENTS] = { 23, 72, 44, 15, 25 };

	displayScores(scores, ELEMENTS);
	increaseScores(scores, ELEMENTS);
	displayScores(scores, ELEMENTS);

	return 0;
}

//scores is constant pointer, meaning address cannot change, values can
void increaseScores(int* const scores, const int NUM_ELEMENTS) {
	std::cout << "Increase scores by 10:\n" << std::endl;
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		*(scores + i) += 10;
	}
}

//scores is a constant pointer pointing to constant, so neither address nor values can change
void displayScores(const int* const scores, const int NUM_ELEMENTS) {
	std::cout << "Displaying scores:\n" << std::endl;
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		std::cout << *(scores + i) << std::endl;
	}
	std::cout << std::endl;
}