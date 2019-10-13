//============================================================================
// Name        : Ass7.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Vector
{
	T a[10];
	int n;
public:
	void read()
	{
		cout<<"Enter number of values : ";
		cin>>n;
		cout<<"Enter "<<n<<" Elements : ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
	void display()
	{
		int i;
		cout<<"\n";
		cout<<"Entered Elements are :\n(";
		for(i=0;i<n-1;i++)
		{
			cout<<" "<<a[i]<<",";
		}
		cout<<" "<<a[i]<<" )";
		cout<<"\n";
	}
	void multiply()
	{
		T m;
		cout<<"Enter Multiplier : ";
		cin>>m;
		for(int i=0;i<n;i++)
		{
			a[i]*=m;
		}
	}
	void modify()
	{
		T s;
		cout<<"Enter the Value to be modified : ";
		cin>>s;
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			if(a[i]==s)
			{
				cout<<"Enter the value to be replaced : ";
				cin>>a[i];
				break;
			}
		}
	}
};
int main()
{
	int ch;
	do
	{
		cout<<"\nSelect operation\n";
		cout<<"1: Integer\n";
		cout<<"2: Float\n";
		cout<<"3: Double\n";
		cout<<"4: Exit\n";
		cout<<"Enter choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			Vector<int>intobj;
			int n1;
			do
			{
				cout<<"\nSelect operation\n";
				cout<<"1: Accepting values\n";
				cout<<"2: Display data\n";
				cout<<"3: Multiply\n";
				cout<<"4: Modify\n";
				cout<<"5: Exit\n";
				cout<<"Enter choice : ";
				cin>>n1;
				switch(n1)
				{
				case 1: intobj.read();
						 break;
				case 2: intobj.display();
						break;
				case 3: intobj.multiply();
						break;
				case 4: intobj.modify();
						break;
				case 5: break;
				}
			}while(n1!=5);
				break;
		case 2:
			Vector<float>floatobj;
			int n2;
			do
			{
				cout<<"\nSelect operation\n";
				cout<<"1: Accepting values\n";
				cout<<"2: Display data\n";
				cout<<"3: Multiply\n";
				cout<<"4: Modify\n";
				cout<<"5: Exit\n";
				cout<<"Enter choice : ";
				cin>>n2;
				switch(n2)
				{
				case 1: floatobj.read();
						 break;
				case 2: floatobj.display();
						break;
				case 3: floatobj.multiply();
						break;
				case 4: floatobj.modify();
						break;
				case 5: break;
				}
			}while(n2!=5);
				break;
		case 3:
			Vector<double>doubleobj;
			int n3;
			do
			{
				cout<<"\nSelect operation\n";
				cout<<"1: Accepting values\n";
				cout<<"2: Display data\n";
				cout<<"3: Multiply\n";
				cout<<"4: Modify\n";
				cout<<"5: Exit\n";
				cout<<"Enter choice : ";
				cin>>n3;
				switch(n3)
				{
				case 1: doubleobj.read();
						 break;
				case 2: doubleobj.display();
						break;
				case 3: doubleobj.multiply();
						break;
				case 4: doubleobj.modify();
						break;
				case 5: break;
				}
			}while(n3!=5);
				break;
		case 4:
			break;
		}
	}while(ch!=4);
	return 0;
}
