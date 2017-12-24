// Strings.cpp : Defines the entry point for the console application.
//

// stringPalindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
_STD_BEGIN

// OBJECT DECLARATIONS
__PURE_APPDOMAIN_GLOBAL int ios_base::Init::_Init_cnt = -1;
int& ios_base::Init::_Init_cnt_func()
{
	return ios_base::Init::_Init_cnt;
}

_CRTIMP2_PURE void __cdecl ios_base::Init::_Init_ctor(ios_base::Init *_This)
{	// initialize standard streams first time
	if (0 <= _Init_cnt)
		++_Init_cnt;
	else
		_Init_cnt = 1;
}

_CRTIMP2_PURE void __cdecl ios_base::Init::_Init_dtor(ios_base::Init *_This)
{	// flush standard streams last time
	if (--_Init_cnt == 0)
	{	// flush standard streams
		if (_Ptr_cerr != 0)
			_Ptr_cerr->flush();
		if (_Ptr_clog != 0)
			_Ptr_clog->flush();
		if (_Ptr_cout != 0)
			_Ptr_cout->flush();
	}
}
_STD_END
#include<string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	string sentences;

	sentences = " hello world ";
	string fullName;
	fullName = " Hina Hafeez";
	cout<< "Enter Your Name :"<<endl;
	cin>>name;

	cout<<"*******************************************";
	cout<<endl<<endl;

	//************************************* Find length of strings *******************************

	int x = name.length();                                            // length -->  number of char
	int y = sentences.length();

	cout<<"Name is: "<<name<<" sentences is :"<<sentences<<endl;
	cout<<"Full Name of Ma'am : "<<fullName<<endl<<endl;

	cout<<" Your Name length is :"<<x<<endl;
	cout<<" Sentences length is :"<<y<<endl;

	cout<<"*******************************************";
	cout<<endl<<endl;

	//************************************ concatenation *******************************

	string str = "Hinna";         //  s + " Arqam"; //concatenation easy!
    str += "Arqam";

	cout<<"string after concatenation : "<<str <<endl;


	cout<<"*******************************************";
	cout<<endl<<endl;


	//********************************** Swap ****************************



	sentences.swap(name);

	cout<< " Now sentences is : '"<<sentences <<"' & Name is :'"<<name<<"'"<<endl;

	cout<<"*******************************************";
	cout<<endl<<endl;



//***************************************  Compare Strings ****************

	if(sentences.compare(name) != 0){
		cout<<sentences <<" is not same as "<<name <<" .!"<<endl;
	}

	else
		
		cout<<sentences <<" is same as "<<name <<" .!"<<endl;
		
	

	cout<<endl<<endl;
	cout<< "                                The End.!"<<endl<<endl<<endl;
	return 0;
}


