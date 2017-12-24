// Prime numbers using for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a=0, y=0;
	cout << "Input Number to check whether it is Prime or not=";
	cin >> x;
	for (int z = 1; z < x; z++)
	{
		if (x % z == 0)
			y++;
	}
	if (y == 2)
		cout << "Not Prime Number" << endl;
	else
		cout << " Prime Number" << endl;
	return 0;
}

