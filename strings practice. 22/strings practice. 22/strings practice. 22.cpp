// strings practice. 22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string firstname;
	string lastname;
	cin >> firstname;
	cin >> lastname;


	if (lastname.compare(firstname) !=0)
	{
		cout << lastname << "is not same as" << firstname << endl;


	else
	{
		cout << lastname << "is same as" << firstname << endl;
	}


	}



	

	return 0;
}

