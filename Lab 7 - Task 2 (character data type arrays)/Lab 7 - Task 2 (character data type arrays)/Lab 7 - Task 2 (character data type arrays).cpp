// Lab 7 - Task 2 (character data type arrays).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char array[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter " << i << " word" << endl;
		cin >> array[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
		return 0;
}

