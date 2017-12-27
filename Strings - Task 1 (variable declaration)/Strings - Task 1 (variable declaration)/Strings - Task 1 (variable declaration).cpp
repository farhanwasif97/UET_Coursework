// Strings - Task 1 (variable declaration).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	string sentence;
	string fullname;

	sentence = " Hello world ";
	fullname = " Hina Hafeez ";

	cout << sentence << endl;
	cout << fullname << endl;

	cout << "Your name?" << endl;
	cin >> name;
	cout << name << endl;



	return 0;
}

