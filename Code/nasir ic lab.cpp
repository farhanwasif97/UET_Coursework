// nasir ic lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 0, b = 1, n = 0;
	cout<< " Enter integer "<<endl;
	cin >> a;
	cout << " Enter power ";
	cin >> n;
	for (int c = 0; c < n; c++)
	{
		b=b*a;

	}
	cout << b << endl;
	system("pause");
	return 0;

}

