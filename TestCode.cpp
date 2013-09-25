#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

#include "TestCode.h"
// Radio #1


int main(void)
{
	cout << "\nFuck the world. Agreed?";
	cout << "\n[y/n] ";
	char userChoice;
	cin >> userChoice;
	cout << endl;
	
	if (userChoice == 'n') {
		cout << "Ha. You didn't look very smart.\n";
	}
	
	for(int count = 0; count < 2; count++) {
		cout << "God. ";
		sleep(1);
		cout << "Damn.\n";
	}
	
	cout << "God. ";
	sleep(1);
	cout << "Damn.\n";
	sleep(1);
	cout << "Those Half-Japanese Girls.\n";
	sleep(2);
	
	cout << "\nSo Sorry about that. Is there something you want to tell me?\n";
	cout << "Enlighten me: ";
	string userMusings, junk;
	getline(cin, userMusings);
	getline(cin, junk);
	cout << "Seriously?... Your life if more fucked up than mine.\n";
	sleep(3);
	cout << "Haha, look at this: ";
	printString(userMusings);
	cout << "Thanks for making me feel better about myself. Bye bye.\n\n";
	sleep(4);
	
	return 0;
}