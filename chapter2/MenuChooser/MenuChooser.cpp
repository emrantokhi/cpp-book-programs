// MenuChooser.cpp 
// Showing off Switch statements

#include "MenuChooser.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int difficulty;

	cout << "Difficulty levels:\n" << endl;
	cout << "1 - Easy\n2 - Normal\n3 - Hard\n" << endl;
	cout << "Enter your choice: ";
	
	cin >> difficulty; 
	
	switch (difficulty) {
		case 1:
			cout << "You picked Easy." << endl;
			break;
		case 2: 
			cout << "You picked Normal." << endl;
			break;
		case 3: 
			cout << "You picked Hard." << endl;
			break;
		default:
			cout << "You did not pick an option." << endl;
	}

	return 0;
}
