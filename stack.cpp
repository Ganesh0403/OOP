#include<iostream>
#include<list>
using namespace std;

class stack
{
	list <int> l;
public:

	void push(int x)
	{
		l.push_back(x);
	}

	void pop()
	{
		l.pop_back();
	}

	int top()
	{
		return l.back();
	}

	void display()
	{
		cout<<"\nThe elements of stack are ";
		list<int> :: iterator i;
		for(i=l.begin();i!=l.end();i++)
		cout<<*i<<" ";
	}

};

int main()
{
	stack s;
	int v;
	cout<<"\n\n          STACK OPERATIONS\n";
	do
	{
		cout<<"\nMENU\n";
		cout<<"\n1:PUSH ELEMENT";
		cout<<"\n2:POP ELEMENT";
		cout<<"\n3:DISPLAY TOP ELEMENT";
		cout<<"\n4:DISPLAY STACK";
		cout<<"\n5:EXIT\n";
		cin>>v;
		switch (v)
		{
			case 1: int x;
					cout<<"\nEnter the element = ";
			 		cin>>x;
			 		s.push(x);
			 		break;

			case 2: s.pop();
		 		    break;

			case 3:	cout<<"\nThe top element = "<<s.top();
			 		break;

			case 4: s.display();
				    break;

			case 5: cout<<"\nFinished!\n";
					break;
			default: cout<<"\nInvalid option";

		}
	}while(v!=5);

return 0;
};


























