// even odd using for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for (int x = 1; x <= 10; x++)
	{
		if (x % 2 == 0)
			cout << x << "    Even" << endl;
		else
			cout << x << "    Odd" << endl;
	}
	return 0;
}

