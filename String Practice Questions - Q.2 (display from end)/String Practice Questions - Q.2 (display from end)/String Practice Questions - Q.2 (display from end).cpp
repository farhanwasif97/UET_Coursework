// String Practice Questions - Q.2 (display from end).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string str;

	cout << "Enter string" << endl;
	cin >> str;

	int l = str.size();

	for (int j = l - 1; j >= 0; j--)
	{
		cout << str[j] << endl;
	}
	
	cout << endl;
	
		
		return 0;
}

