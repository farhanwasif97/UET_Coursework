// Lab 7 - Tasl 2 (string data type arrays).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name " << i << endl;
		cin >> name[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << name[i] << endl;
	}

}

