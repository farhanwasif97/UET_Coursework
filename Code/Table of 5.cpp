// Table of 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int c = 0;
	while (c < 50)
	{
		c = c + 5;
		cout << c << endl;
	}
	return 0;
}

