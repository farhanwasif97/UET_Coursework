// Strings - Task 5 (compare strings).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	string sentence;

	cout << "Enter name" << endl;
	cin >> name;

	cout << "Type a sentence" << endl;
	cin >> sentence;

	if (sentence.compare(name) != 0)
	{
		cout << "Name and sentence are not same" << endl;
	}

	else
	{
		cout << "Name and sentence are same" << endl;
	}
	
	return 0;
}

