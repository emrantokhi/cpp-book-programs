// HighScores.cpp 
// Demonstrates the use of the different 
// algorithms in the STL (standard library)

#include "HighScores.h"

using namespace std;

int main()
{
	vector<unsigned int> high_scores;
	vector<unsigned int>::const_iterator score_iter;
	unsigned int score;

	high_scores.push_back(200);
	high_scores.push_back(140);
	high_scores.push_back(458);
	high_scores.push_back(212);

	cout << "High Scores:" << endl;
	for (score_iter = high_scores.begin(); score_iter != high_scores.end(); score_iter++) {
		cout << "" << *score_iter << endl;
	}

	//Finding Scores

	cout << "\nFinding Scores:" << endl;
	cout << "Enter a score to find: ";
	cin >> score;

	score_iter = find(high_scores.begin(), high_scores.end(), score); //set iter to the score its trying to find
	if (score_iter != high_scores.end()) {
		cout << "Score was found!" << endl;
	}
	else {
		cout << "That score has not be achieved yet. Maybe you should try and get it!" << endl;
	}

	//Shuffling Scores

	srand(static_cast<unsigned int>(time(0))); //set seed
	random_shuffle(high_scores.begin(), high_scores.end()); //shuffle using random_shuffle

	cout << "\nShuffling Scores:" << endl;
	for (score_iter = high_scores.begin(); score_iter != high_scores.end(); score_iter++) {
		cout << *score_iter << endl;
	}

	//Sorting scores
	cout << "\nSorting the scores:" << endl;
	//Sort in ascending order (lowest first)
	sort(high_scores.begin(), high_scores.end());
	for (score_iter = high_scores.begin(); score_iter != high_scores.end(); score_iter++) {
		cout << *score_iter << endl;
	}

	return 0;
}
