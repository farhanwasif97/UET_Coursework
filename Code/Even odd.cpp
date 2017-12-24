// Even odd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
	cout << "Input any integer=";
	cin >> x;
	if (x != 0)
	{
		if (x % 2 == 0)
			cout << "Number is Even" << endl;
		else
			cout << "Number is odd" << endl;
	}
	else
		cout << "0 is neither even or odd" << endl;
	return 0;
}

