// Strings Practice Questions - Q.7 (find a subtring).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name = " Farhan ";

	cout << "The substring is: " << name.substr(1, 2) << endl;
	cout << "The location of it is: " << name.find('n', 1) << endl;

	return 0;
}

