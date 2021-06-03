// MenuChooser.cpp 
// Showing off Switch statements

#include "MenuChooser.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int choice;

	enum class difficulty { EASY, NORMAL, HARD };

	cout << "Difficulty levels:\n" << endl;
	cout << "0 - Easy\n1 - Normal\n2 - Hard\n" << endl;
	cout << "Enter your choice: ";
	
	cin >> choice; 
	
	switch (choice) {
		case static_cast<int>(difficulty::EASY):
			cout << "You picked Easy." << endl;
			break;
		case static_cast<int>(difficulty::NORMAL) :
			cout << "You picked Normal." << endl;
			break;
		case static_cast<int>(difficulty::HARD) :
			cout << "You picked Hard." << endl;
			break;
		default:
			cout << "You did not pick an option." << endl;
	}

	return 0;
}
