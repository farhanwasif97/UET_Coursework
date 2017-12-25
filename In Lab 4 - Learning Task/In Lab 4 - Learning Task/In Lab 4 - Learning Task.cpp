// In Lab 4 - Learning Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char c;

	cout << "Enter a character" << endl;
	cin >> c;

	cout << "The ASCII Value of " << c << " is" << int(c) << endl;
	return 0;
}

