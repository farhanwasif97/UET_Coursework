// Strings - Task 7 (substring).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name = " Farhan";

	cout << name << endl;
	cout << name.substr(2, 3);

	cout << name.at(2) << endl;
	cout << name[2] << endl;
	cout << name.append(3, 's') << endl;
	
	return 0;
}

