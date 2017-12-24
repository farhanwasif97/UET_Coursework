// binary 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, r, s=0;
	int v = 1;
	cin >> x;
	while (x > 0){
		r = x % 2;
		x = x / 2;
		s = s + (v*r);
		v = v * 10;
	}
	cout << s;
	return 0;
}

