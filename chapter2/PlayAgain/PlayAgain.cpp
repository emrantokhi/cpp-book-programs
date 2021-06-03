// PlayAgain.cpp 
// Showcases while loop

#include "PlayAgain.h"

using namespace std;

int main()
{
	cout << "Just a while loop:\n" << endl;

	char choice = 'y';
	while (choice == 'y' || choice == 'Y') {
		cout << "You just played an exciting game!" << endl;
		cout << "Would you like to play again (y/n): ";
		cin >> choice;
		cout << endl;
	}
	cout << "Goodbye!\n" << endl;

	cout << "Do-while loop:\n" << endl;

	char again;
	do {
		cout << "You just played an exciting game!" << endl;
		cout << "Would you like to play again (y/n): ";
		cin >> again;
		cout << endl;
	} while (again == 'y' || again == 'Y');

	cout << "Goodbye!" << endl;

	return 0;

}
