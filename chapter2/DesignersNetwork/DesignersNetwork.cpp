// DesignersNetwork.cpp 
// Demonstrates logical operators

#include "DesignersNetwork.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

const string GUEST_PASS = "guest";

int main()
{
	string username;
	string password;
	bool loggedIn = false;

	string user1 = "J.Donovan";
	string pass1 = "burnnotice";

	string user2 = "C.Strife";
	string pass2 = "cloudstrife";

	cout << "\t\tGame Designers Network\n" << endl;
	
	while (!loggedIn) {
		cout << "Enter Username: ";
		cin >> username;
		cout << "Enter Password: ";
		cin >> password;

		//Login as guest, can't use already claimed username
		if ((username == user1 || username == user2) && password == GUEST_PASS) {
			cout << "\nThis username has already been claimed. Login failed.\n" << endl;
		}
		//Login as guest
		else if ((username != user1 || username != user2) && password == GUEST_PASS) {
			cout << "Welcome Guest!\n" << endl;
			break;
		}
		//if user right, password wrong
		else if ((username == user1) && (password != pass1)) {
			cout << "\nLogin failed.\n" << endl;
		}
		else if ((username == user2) && (password != pass2)) {
			cout << "\nLogin failed.\n" << endl;
		}
		//if user and password are both correct
		else if ((username == user1) && (password == pass1)) {
			cout << "\nHello, Jeffrey Donovan.\n" << endl;
			break;
		}
		else if ((username == user2) && (password == pass2)) {
			cout << "\nHello, Cloud. Shinra Corp welcomes you.\n" << endl;
			break;
		}
		//If user and password are both wrong
		else if ((username != user1 && password != pass1) ||
			(user2 != user2 || password != pass2)) {
			cout << "\nLogin failed.\n" << endl;
		}
	}
	return 0;
}
