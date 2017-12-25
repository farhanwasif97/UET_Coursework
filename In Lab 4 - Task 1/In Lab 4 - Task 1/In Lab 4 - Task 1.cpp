// In Lab 4 - Task 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Input week number" << endl;
	cin >> x;

	if (x < 1 || x > 7)
	{
		cout << "Your entry is invalid" << endl;
	}

	else if (x == 1)
	{
		cout << "Day is Monday" << endl;
	}

	else if (x == 2)
	{
		cout << "Day is Tuesday" << endl;
	}

	else if (x == 4)
	{
		cout << "Day is Wedensday" << endl;
	}
	
	else if (x == 5)
	{
		cout << "Day is Thursday" << endl;
	}
	
	else if (x == 6)
	{
		cout << "Day is Friday" << endl;
    }

	else if (x == 7)
	{
		cout << "Day is Saturday" << endl;
	}
	
	
	
	
	
	
	return 0;
}

