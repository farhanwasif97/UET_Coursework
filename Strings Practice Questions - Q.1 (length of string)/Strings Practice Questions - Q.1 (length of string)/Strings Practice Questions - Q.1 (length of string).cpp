// Strings Practice Questions - Q.1 (length of string).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;

	cout << "Enter name" << endl;
	cin >> name;

	int x = name.length();

	cout << "The length of the name is: " << x << endl;

	return 0;
}

