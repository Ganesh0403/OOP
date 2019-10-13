//============================================================================
// Name        : calculator.cpp
// Author      : Ganesh Shinde
// Version     : 1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Number
{
	int a,b,res;
public:
	void getdata()
	{
		cout<<"Enter two numbers\n";
		cin>>a>>b;
	}
	void addition()
	{
		res=a+b;
		cout<<"Addition = "<<res<<endl<<endl;
	}
	void subtraction()
	{
		res = a-b;
		cout<<"Subtraction = "<<res<<endl<<endl;
	}
	void multiplication()
	{
		res = a*b;
		cout<<"Multiplication = "<<res<<endl<<endl;
	}
	void division()
		{
			res = a/b;
			cout<<"Division = "<<res<<endl<<endl;
		}
};
int main()
{
	Number n;
	int ch;
	do
	{
		cout<<"Enter choice of  operation you have to perform\n";
		cout<<" 1 : Addition\n";
		cout<<" 2 : Subtraction\n";
		cout<<" 3 : Multiplication\n";
		cout<<" 4 : Division\n";
		cout<<" 5 : Exit\n";
		cout<<"Enter choice \n";
		cin>>ch;
		switch(ch)
		{
			case 1 : n.getdata();
					 n.addition();
					 break;
			case 2 : n.getdata();
					 n.subtraction();
					 break;
			case 3 : n.getdata();
					 n.multiplication();
					 break;
			case 4 : n.getdata();
					 n.division();
					 break;
			case 5 :
					 break;
			default :
					  cout<<"Enter Valid Choice";
					  cin>>ch;
		 }
	 }while(ch!=5);


	return 0;
}
