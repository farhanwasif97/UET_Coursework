// Lab 9 - Struct-Functions Task 3 ( min value ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void value(int a, int b)
{
	if (a < b)
	{
		cout << "your minimum value is " << a << endl;
	}
	else
	{
		cout << "Your minimum value is: " << b << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
	
	cout << "enter value of x" << endl;
	cin >> x;
	
	cout << "enter value of y" << endl;
	cin >> y;
	
	value(x, y);
	
	return 0;
}

