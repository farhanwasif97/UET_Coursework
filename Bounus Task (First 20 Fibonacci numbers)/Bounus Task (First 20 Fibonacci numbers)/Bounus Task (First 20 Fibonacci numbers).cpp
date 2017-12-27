// Bounus Task (First 20 Fibonacci numbers).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;
	int y = 1; 
	int z = 1;
	int n;
	
	cout << "Input Number to which you want print fibonacci numbers=" << endl;
	cin >> n;
	
	while (z < n)
	{
		y = x + y;
		x = y + x;
		z++;
		cout << y << endl << x << endl;
	}

	return 0;
}

