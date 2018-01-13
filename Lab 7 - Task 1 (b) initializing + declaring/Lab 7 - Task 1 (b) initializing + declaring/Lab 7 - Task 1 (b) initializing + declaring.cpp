// Lab 7 - Task 1 (b) initializing + declaring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[3] = { 1, 2 };

	for (int i = 0; i < 3; i++)
	{
		cout << array[i] << " " << endl;
	}
	
	return 0;
}

