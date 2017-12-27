// Assignment 4 - For Loops Task 2 (guess game).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 25;

	for (int y = 0; y != x;)
	{
		cout << "Guess the number" << endl;
		cin >> y;

		if (y > x)
		{
			cout << "The number you entered is greater than the number to be guessed" << endl;
		}

		else if (y < x)
		{
			cout << "The number you entered is smaller than the number to be guessed" << endl;
		}

		else if (y == x)
		{
			cout << "You have guessed it write! You win!" << endl;
		}
	}

	return 0;
}

