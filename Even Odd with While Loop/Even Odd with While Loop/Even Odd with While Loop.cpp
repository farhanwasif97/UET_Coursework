// Even Odd with While Loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;

	while (x <= 10)
	{
		cout << "The number is: " << x << endl;

		if (x == 0)
		{
			cout << "The number " << x << " is neither even nor odd " << endl;
		}
		
		else if (x % 2 == 0)
		{
			cout << "The number " << x << " is even" << endl;
		}

		else
		{
			cout << "The number " << x << " is odd " << endl;
		}
		x++;
	}
	return 0;
}

