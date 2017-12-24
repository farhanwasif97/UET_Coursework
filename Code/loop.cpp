// loop.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int j = 1,n;
	cout << "Input last integer of counting=";
	cin >> n;
	while (j <= n)
	{
		cout << j << endl;
		j++;
	}
	return 0;
}

