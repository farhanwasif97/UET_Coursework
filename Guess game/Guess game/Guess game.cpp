// Guess game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 50;
	int y;

	cout << "Enter a number" << endl;
	cin >> y;

	while (y != x)
	{
		cout << "That's wrong!" << endl;
		cout << "Try again!" << endl;
		cin >> y;


		if (y < 0)
		{
			cout << "The number you are guessing is not negative" << endl;
		}


		else if (y < x)
		{
			cout << "The number you entered is smaller than the number to be guessed" << endl;
		}


		else if (y > x)
		{
			cout << "The number you entered is greater than the number to be guessed " << endl;
		}


		else if (y == x)
		{
			cout << "You have won" << endl;
		}
	}
	
	return 0;
}

