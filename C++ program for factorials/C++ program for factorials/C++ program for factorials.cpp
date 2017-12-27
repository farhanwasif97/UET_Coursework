// C++ program for factorials.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int b = 0;
	int c = 1;
	
	cout << "Enter an integer" << endl;
	cin >> x;
	
	while (x != 0)
	
	{
		b = b + 1;
		c = c*b;
		x--;
	}
	
	cout << c << endl;
	
	return 0;
}

