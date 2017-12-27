// Strings Practice Questions - Q.3 (char in string).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;

	cout << "Enter your name" << endl;
	cin >> name;

	int x = name.size();

	cout << "The number of characters in your name are " << x << endl;


	return 0;
}

