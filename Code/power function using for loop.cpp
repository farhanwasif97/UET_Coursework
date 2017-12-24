// power function using for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0, y = 1,n=0;
	cout << "Input Integer=";
	cin >> x;
	cout << "Input Power=";
	cin >> n;
	for (int a = 0; a < n; a++)
	{
		y = y*x;
	}
	cout << y << endl;
	return 0;
}

