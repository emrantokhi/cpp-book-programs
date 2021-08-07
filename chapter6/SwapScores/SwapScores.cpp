// SwapScores.cpp 
// Demonstrates swapping scores using references

#include "SwapScores.h"

using namespace std;

void swapScoresNoRef(int lowScore, int highScore);
void swapScoresRef(int& lowScore, int& highScore);

int main()
{
	int myScore = 100;
	int yourScore = 500;
	int& rMyScore = myScore;
	int& rYourScore = yourScore;

	cout << "My score (low score): " << myScore << endl;
	cout << "Your Score: " << yourScore << endl;

	swapScoresNoRef(myScore, yourScore);

	cout << "My score (No Ref Swap): " << myScore << endl;
	cout << "Your Score: " << yourScore << endl;

	swapScoresRef(rMyScore, rYourScore);

	cout << "My score (Ref Swap): " << myScore << endl;
	cout << "Your Score: " << yourScore << endl;

	swapScoresNoRef(rMyScore, rYourScore);

	cout << "My score (No Ref Swap w/ ref vals): " << myScore << endl;
	cout << "Your Score: " << yourScore << endl;

	swapScoresRef(myScore, yourScore);

	cout << "My score (Ref Swap w/nonref vals): " << myScore << endl;
	cout << "Your Score: " << yourScore << endl;

	return 0;
}

void swapScoresNoRef(int lowScore, int highScore) {
	int holder = highScore;
	highScore = lowScore;
	lowScore = holder;
}

void swapScoresRef(int &lowScore, int &highScore) {
	int holder = highScore;
	highScore = lowScore;
	lowScore = holder;
}
