// Strings - Task 6 (find).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name = " Farhan ";
	name[1] = 'S';

	cout << "The name now is: " << name << endl;

	cout << "find is: " << name.find('h', 1) << endl;
	return 0;
}

