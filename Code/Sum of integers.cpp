// Sum of integers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a = 1, c = 0,d=0;
	cout << "Input=";
	cin >> x;
	
	while (a <= x)
	{	d=d+1;
	c = c + d;
	a++;
}
	cout << c << endl;
	return 0;
}

