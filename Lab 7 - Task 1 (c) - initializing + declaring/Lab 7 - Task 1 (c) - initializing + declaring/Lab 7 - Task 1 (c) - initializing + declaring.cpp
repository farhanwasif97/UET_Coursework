// Lab 7 - Task 1 (c) - initializing + declaring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int var[ ] = { 1, 2, 3 };

	for (int i = 0; i < 3; i++)
	{
		cout << var[i] << " " << endl;
	}
	return 0;
}

