// Test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	int x, y, a,z,e;
		int c = 0,d=0;
	cout << "Enter no. of rows=";
	cin >> x;
	y = x;
	z = x;
	e = x;
	for (int b = 0; b != x; b++)
	{
		for (int e = 0; c >= e; e++)
			cout << " ";
		c = c + 1;
		for (a = 0; z > a; a++)
			cout << "*" << " ";
		cout << endl;
		z = z - 1;
		
		
	}
	
	return 0;
}

