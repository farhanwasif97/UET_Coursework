// Strings Practice Questions - Q.6 (palindrome).cpp : Defines the entry point for the console application.
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

	int x, y, flag = 0;
	int n = name.size();

	for (int x = 0; y = n - 1; x < y, x++, y--)
	{
		if (name[x] != name[y])
		{
			cout << "Name is not palindrome" << endl;
			break;
			flag = 0;
		}

		else
		{
			cout << "Name is palindrome" << endl;
			break;
		}
	}

	return 0;
}

