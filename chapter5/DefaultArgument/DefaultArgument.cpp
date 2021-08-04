// DefaultArgument.cpp 
// Demonstrate the use of default arguments

#include "DefaultArgument.h"

using namespace std;

//function declaration
int askNumber(int highRange, int lowRange = 1);

int main()
{
	int answer = askNumber(10);
	cout << "\nYou entered: " << answer << "\n" << endl;
	answer = askNumber(15, 5);
	cout << "\nYou entered: " << answer << "\n" << endl;
	return 0;
}

int askNumber(int highRange, int lowRange) {
	int answer;
	do {
		cout << "Enter in a number (" << lowRange << " - " << highRange << "): ";
		cin >> answer;
	} while (answer < lowRange || answer > highRange);
	return answer;
}
