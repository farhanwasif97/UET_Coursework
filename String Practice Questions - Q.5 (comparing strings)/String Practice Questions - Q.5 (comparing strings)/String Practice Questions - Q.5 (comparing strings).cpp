// String Practice Questions - Q.5 (comparing strings).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name1;
	string name2;

	cout << "Enter your name" << endl;
	cin >> name1;

	cout << "Enter your friend's name" << endl;
	cin >> name2;

	name1.compare(name2);

	if (name1 == name2)
	{
		cout << "The two names are same" << endl;
	}

	else
	{
		cout << "The two names are not smae" << endl;
	}
	return 0;
}

