// Counter.cpp
// Demonstrates for loops

#include "Counter.h"

using namespace std;

int main()
{
	cout << "Counting forward:" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << i << endl;
	}

	cout << "\nCounting Backwards:" << endl;
	for (int i = 9; i >= 0; --i) {
		cout << i << endl;
	}

	cout << "\nCounting by fives:" << endl;
	for (int i = 0; i <= 50; i += 5) {
		cout << i << endl;
	}

	cout << "\nCounting with no statements:" << endl;
	int count = 0;
	for (; count < 10; ) {
		cout << count << endl;
		count++;
	}

	cout << "\nCounting with nested for loop:" << endl;
	int rows = 5;
	int columns = 4;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			cout << i << "," << j << " ";
		}
		cout << endl;
	}
	
	return 0;
}
