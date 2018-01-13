// Lab 7 - Task 1 (a) - intializing + declaring arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array [5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " " << endl;
	}
	return 0;
}

