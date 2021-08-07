// Referencing.cpp 
// Demonstrates using references

#include "Referencing.h"

using namespace std;

int main()
{
	float myMoney = 2000.50;
	//float notMyMoney = 1400.0;
	float& emransMoney = myMoney;

	cout << "My Money: " << myMoney << endl;
	cout << "Emran's Money: " << emransMoney << endl;

	myMoney = 1500.0;

	cout << "My Money: " << myMoney << endl;
	cout << "Emran's Money: " << emransMoney << endl;

	emransMoney = 754.0;

	cout << "My Money: " << myMoney << endl;
	cout << "Emran's Money: " << emransMoney << endl;
	
	return 0;
}
