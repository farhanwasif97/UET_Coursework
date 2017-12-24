// chess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char board;
	char a, x, y, z, a1, a2, a3, a4, a5, a6, a7, a8, b1, b2, b3, b4, b5, b6, b7, b8, c1, c2, c3, c4, c5, c6, c7, c8, d1, d2, d3, d4, d5, d6, d7, d8, e1, e2, e3, e4, e5, e6, e7, e8, f1, f2, f3, f4, f5, f6, f7, f8, g1, g2, g3, g4, g5, g6, g7, g8, h1, h2, h3, h4, h5, h6, h7, h8;
	char wr1, wk1, wb1, wq, wk, wb2, wk2, wr2;
	char br1, bk1, bb1, bq, bk, bb2, bk2, br2;
	char ws1, ws2, ws3, ws4, ws5, ws6, ws7, ws8;
	char bs1, bs2, bs3, bs4, bs5, bs6, bs7, bs8;
	a1= a2= a3= a4= a5= a6= a7= a8= b1= b2 =b3= b4= b5= b6= b7= b8= c1= c2= c3= c4= c5= c6= c7= c8= d1= d2= d3= d4= d5= d6= d7= d8= e1= e2= e3= e4= e5= e6= e7= e8= f1= f2= f3= f4= f5= f6= f7= f8= g1= g2= g3= g4= g5= g6= g7= g8= h1= h2= h3= h4= h5= h6= h7= h8=' ';
	
	a1 = 'wr1';
	b1 = 'wk1';
	c1 = 'wb1';
	d1 = 'wq';
	e1 = 'wk';
	f1 = 'wb2';
	g1 = 'wk2';
	h1 = 'wr2';
	a2 = 'ws1';
	b2 = 'ws2';
	c2 = 'ws3';
	d2 = 'ws4';
	e2 = 'ws5';
	f2 = 'ws6';
	g2 = 'ws7';
	h2 = 'ws8';


	a8 = 'br';
	b8 = 'bk';
	c8 = 'bb';
	d8 = 'Q';
	e8 = 'K';
	f8 = 'bb';
	g8 = 'bk';
	h8 = 'br';
	a7 = 'bs';
	b7 = 'bs';
	c7 = 'bs';
	d7 = 'bs';
	e7 = 'bs';
	f7 = 'bs';
	g7 = 'bs';
	h7 = 'bs';

	cout << a1 << b1 << c1 << d1 << e1 << f1 << g1 << h1 << endl << a2 << b2 << c2 << d2 << e2 << f2 << g2 << h2 << endl << a3 << b3 << c3 << d3 << e3 << f3 << g3 << h3 << endl << a4 << b4 << c4 << d4 << e4 << f4 << g4 << h4 << endl << a5 << b5 << c5 << d5 << e5 << f5 << g5 << h5 << endl << a6 << b6 << c6 << d6 << e6 << f6 << g6 << h6 << endl << a7 << b7 << c7 << d7 << e7 << f7 << g7 << h7 << endl << a8 << b8 << c8 << d8 << e8 << f8 << g8 << h8 << endl;


	cout << "Input Position of character to move=";
	cin >> y;
	cout << "Position where to move character=";
	cin >> x;
	switch (y)
	{
	case 'a1':
		x=y;
	case 'a2':
		x=y;
	case'a3':
		x = y;
	case'a4':
		x = y;
	case 'a5':
		x = y;
	case'a6':
		x = y;
	case'a7':
		x = y;
	case'a8':
		x = y;
	case'b1':
		x = y;
	case'b2':
		x = y;
	case'b3':
		x = y;
	case'b4':
		x = y;
	case'b5':
		x = y;
	case'b6':
		x = y;
	case'b7':
		x = y;
	case'b8':
		x = y;
	case'c1':
		x = y;
	case'c2':
		x = y;
	case'c3':
		x = y;
	case'c4':
		x = y;
	case'c5':
		x = y;
	case'c6':
		x = y;
	case'c7':
		x = y;
	case'c8':
		x = y;
	case'd1':
		x = y;
	case'd2':
		x = y;
	case'd3':
		x = y;
	case'd4':
		x = y;
	case'd5':
		x = y;
	case'd6':
		x = y;
	case'd7':
		x = y;
	case'd8':
		x = y;
	case'e1':
		x = y;
	case'e2':
		x = y;
	case'e3':
		x = y;
	case'e4':
		x = y;
	case'e5':
		x = y;
	case'e6':
		x = y;
	case'e7':
		x = y;
	case'e8':
		x = y;
	case'f1':
		x = y;
	case'f2':
		x = y;
	case'f3':
		x = y;
	case'f4':
		x = y;
	case'f5':
		x = y;
	case'f6':
		x = y;
	case'f7':
		x = y;
	case'f8':
		x = y;
	case'g1':
		x = y;
	case'g2':
		x = y;
	case'g3':
		x = y;
	case'g4':
		x = y;
	case'g5':
		x = y;
	case'g6':
		x = y;
	case'g7':
		x = y;
	case'g8':
		x = y;

	case'h1':
		x = y;
	case'h2':
		x = y;
	case'h3':
		x = y;
	case'h4':
		x = y;
	case'h5':
		x = y;
	case'h6':
		x = y;
	case'h7':
		x = y;
	case'h8':
		x = y;

	}
	cout << a1 << b1 << c1 << d1 << e1 << f1 << g1 << h1 << endl << a2 << b2 << c2 << d2 << e2 << f2 << g2 << h2 << endl << a3 << b3 << c3 << d3 << e3 << f3 << g3 << h3 << endl << a4 << b4 << c4 << d4 << e4 << f4 << g4 << h4 << endl << a5 << b5 << c5 << d5 << e5 << f5 << g5 << h5 << endl << a6 << b6 << c6 << d6 << e6 << f6 << g6 << h6 << endl << a7 << b7 << c7 << d7 << e7 << f7 << g7 << h7 << endl << a8 << b8 << c8 << d8 << e8 << f8 << g8 << h8 << endl;

	return 0;
}
