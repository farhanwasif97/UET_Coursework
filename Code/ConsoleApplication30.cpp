// ConsoleApplication30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;
	int y = 0;
	int n = 0;
	int b = 0;
	cout << "Input base";							//x=base
	cin >> x;
	cout << "input power";
	cin >> n;										//n=power
	int a = 0;
	jump:
	if (a =! n)
	{
		a = a + 1;
		y = x*x;									//y=x2
		b = y*x;
		cout << "Answer" << b << endl;
	}
	else
		goto jump;

	
		
	return 0;


