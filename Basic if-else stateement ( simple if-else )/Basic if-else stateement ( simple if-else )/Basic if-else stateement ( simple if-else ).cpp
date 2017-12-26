// Basic if-else stateement ( simple if-else ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;

	cout << "enter a value for x" << endl;
	cin >> x;

	if (x == 100)
	{
		cout << "x is 100" << endl;
	}

	else
	{
		cout << "x is not 100" << endl;
	}
	return 0;
}

