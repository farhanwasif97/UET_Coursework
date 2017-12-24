// ChessK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{

char piece, init, fina, maximum='h', minimum='a';
int ini, fin, diffchar, diffint, maxi=8, mini=1;
cout<<"Enter the type of piece: "<<endl;
cin>>piece;
cout<<"Enter the initial position: "<<endl;
cin>>init>>ini;
cout<<"Enter the final position: "<<endl;
cin>>fina>>fin;


diffchar=fina-init;            // difference btw initial & final location (char ) of chess piece 
diffint=fin-ini;               // difference btw initial & final location (int)of chess piece 

if (maximum-init>=0 && init-minimum>=0 && maximum-fina>=0 && fina-minimum>=0 && maxi-ini>=0 && ini-mini>=0 && maxi-fin>=0 && fin-mini>=0) 
{
    if (piece=='K')
    {
        if (diffchar==0 && diffint==0) // same location
        {
            cout<<"Invalid."<<endl;
        }
        else if ((diffchar>=-1 && diffchar <=1) && (diffint>=-1 && diffint<=1)) // up/down left/right valid
        {
            cout<<"Valid."<<endl;
        }
        else
        {
            cout<<"Invalid."<<endl;
        }
    }



	else if (piece=='R')                // Rook: rook moves any number of vacant squares in horizontal or vertical direction row/col.
    {
        if (diffchar==0 && diffint==0)                       //  both initial & final locations are same
        {
            cout<<"Invalid."<<endl;
        }
        else if ((diffchar==0 || diffint==0))   // diffchar == 0 means initial final col is same , diffint == 0 means initial final row is same.
        {
            cout<<"Valid."<<endl;
        }
        else
        {
            cout<<"Invalid."<<endl;
        }
    }


}

	
	


cout<<" diff char "<<diffchar<<endl;  // b -a == 1 , a-b == -1

cout<<" diff in"<<diffint<<endl;

	return 0;
}

