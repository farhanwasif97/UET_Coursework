// Strings - Task 4 (swap).cpp : Defines the entry point for the console application.
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

	sentence.swap(name);

	cout << "Now the sentence is " << sentence << " and the name is " << name << endl;

	return 0;
}

