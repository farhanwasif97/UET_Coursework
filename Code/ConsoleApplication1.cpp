// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cin >> x;
	if (x >= 90)
		cout << "yes";
	else if (x >= 80)
		cout << "No";
	return 0;
}

