// FunctionOverload.cpp 
// Demonstrates overloading functions

#include "FunctionOverload.h"

using namespace std;

//Function declaration
int triple(int value = 1);
string triple(string value = "word");
int getInt();
string getString();

int main()
{
	int value = getInt();
	cout << value << " tripled is: " << triple(value) << "\n" << endl;
	string word = getString();
	cout << "\n" << word << " tripled is: " << triple(word) << endl;
	return 0;
}

//overloaded functions
int triple(int value) {
	return value * 3;
}

string triple(string value) {
	return value + value + value;
}

int getInt() {
	int response;
	cout << "Enter in an integer: ";
	cin >> response;
	return response;
}

string getString() {
	string response;
	cout << "Enter in a word: ";
	cin >> response;
	return response;
}