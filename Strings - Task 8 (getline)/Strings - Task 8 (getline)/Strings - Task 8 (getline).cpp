// Strings - Task 8 (getline).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string name;

	cout << "Enter your name" << endl;

	getline(cin, name);

		cout << "Assalam o alaikum! " << name << ", you are welcome to the lecture of strings in ICT Lab!" << endl;


		return 0;
}

