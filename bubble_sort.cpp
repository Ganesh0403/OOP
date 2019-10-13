//============================================================================
// Name        : Ass6.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Number
{
	T a[10];
	int n;
public:
	void read()
	{
		cout<<"Enter number of values : ";
		cin>>n;
		cout<<"Enter "<<n<<" Elements"<<" : ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
	void display()
	{
		cout<<"Entered Elements are :\n";
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<"\n";
	}
	void bubbleSort()
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=n-1;i<j;j--)
			{
				if(a[j]<a[j-1])
				{
					T temp;
					temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
				}
			}
		}
	}
};
int main()
{
	Number<int>n;
	int no;
	do
	{
		cout<<"\nSelect Operation\n";
		cout<<"1: Accecpting values\n";
		cout<<"2: Dislay\n";
		cout<<"3: Sorting Elements\n";
		cout<<"4: Exit\n";
		cout<<"Enter choice : ";
		cin>>no;
		switch(no)
		{
		case 1: n.read();
				break;
		case 2:	n.display();
				break;
		case 3: n.bubbleSort();
				break;
		case 4: break;
		}
	}while(no!=4);
	return 0;
}
