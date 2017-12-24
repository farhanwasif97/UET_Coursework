// Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	int count = 0;
	while(count < 2)
	{
		count++;
	}
	cout << count;
	//****************************
	int count = 0;
	while(count <= 2)
	{
		count++;
	}
	cout << count;
	//*********************************
	int count = 1;
	while(count < 2)
	{
		count++;
	}
	cout << count;


	return 0;
}

