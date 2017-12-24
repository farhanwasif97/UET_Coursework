// quiz marks using nested for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0,z;
	cout << "Number of students=";
	cin >> n;
	for (int x = 1; x <= n; x++)
	{
		int x2 = 0;
		cout << "Input number of Quizes=";
		cin >> x2;
		z = 0;
		for (int x = 1; x <= x2; x++)
		{
			int x1 = 0, n1;
			cout << "Input Quiz marks   " << x << "=";
			cin >> n1;
			z = z + n1;
		}

		cout << "Total marks=" << z << endl;
	}		return 0;
}

