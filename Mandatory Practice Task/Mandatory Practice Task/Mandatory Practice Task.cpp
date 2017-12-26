// Mandatory Practice Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double number = 0;
	cout << "Enter a number .\n";
	cin >> number;
	//input validation
	while (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "You can only enter numbers" << endl;
		cout << "Enter a number" << endl;
		cin >> number;
	}

	if (number > 0)
		cout << "+ve" << endl;
	
	else if (number < 0)
		cout << "-ve" << endl;
	
	else
		cout << "zero is unsigned" << endl;
	
	return 0;
}

