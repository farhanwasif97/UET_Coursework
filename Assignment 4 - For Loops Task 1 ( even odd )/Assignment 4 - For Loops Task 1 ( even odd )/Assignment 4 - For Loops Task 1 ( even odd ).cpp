// Assignment 4 - For Loops Task 1 ( even odd ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 10;

	for (int y = 1; y <= x;)
	{
		cout << y <<   "    odd" << endl;		
		y++;
		cout << y++ << "    even" << endl;	
	}



	return 0;
}

