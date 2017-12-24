// chess1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char x, y,z;
	int x1, x2;
	while (a < 1){
	cout << "Input location of character to move=";
	cin >> x >> x1;

	cout << "Input location to move character=";
	cin >> y >> x2;

	cout << "Input character to move(soldier=s, rook=r, bishop=b, knight=k, king=K, queen=Q)";
	cin >> z;
	cout << endl;
	

	if (x == y && x1 == x2)
	{
		cout << "Please Move your character" << endl;
	
	}
	else
	{

		if (z == 's')
		{
			if ((x2 == x1 + 1 || x2 == x1 + 2) && y == x)
				cout << "Valid move" << endl;
			else cout << "Invalid move" << endl;
		}
		else if (z == 'r')
		{
			if (x == y || x1 == x2)
				cout << "Valid move" << endl;
			else cout << "Invalid move" << endl;
		}
		else if (z == 'b')
		{
			if (x != y && x1 != x2)
				cout << "Valid move" << endl;
			else cout << "Invalid move" << endl;
		}
		else if (z == 'k')
		{
			if ((('y' == 'x' - 1 || 'y' == 'x' + 1) && (x2 == x1 - 2 || x2 == x1 + 2)) || (('y' == 'x' - 2 || 'y' == 'x' + 2) && (x2 == x1 - 1 || x2 == x1 + 1)))
				cout << "Valid move" << endl;
			else cout << "Invalid move" << endl;
		}
		else if (z == 'K')
		{
			if ((x2 == x1 + 1 || x2 == x1 - 1) || ('y' == 'x' - 1 || 'y' == 'x' + 1))
				cout << "Valid move" << endl;
			else cout << "Invalid move" << endl;
		}
		else if (z == 'Q')
		{
			if ((x != y && x1 != x2) || (x == y || x1 == x2))
				cout << "Valid move" << endl;
			else cout << "Invalid move" << endl;
			a++;
		}
	}
	return 0;
}

