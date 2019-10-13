//============================================================================
// Name        : Ass12.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
using namespace std;

template<class T>
class deque
{
	list<T>l;
public:
	void push_front()
	{
		T a;
		cout<<"\nEnter element to pushed front : ";
		cin>>a;
		l.push_front(a);
	}
	void push_back()
	{
		T a;
		cout<<"\nEnter element to pushed back : ";
		cin>>a;
		l.push_back(a);
	}
	void pop_back()
	{
		if(!l.empty())
		{
			cout<<"\nPopped Element : "<<l.back();
			l.pop_back();
		}
		else
			cout<<"\nDeque is empty";
	}
	void pop_front()
	{
		if(!l.empty())
		{
			cout<<"\nPopped Element : "<<l.front();
			l.pop_front();
		}
		else
			cout<<"\nDeque is empty";
	}
	void front_element()
	{
		cout<<"\nFront Element : "<<l.front();
	}
	void back_element()
	{
		cout<<"\nBack Element : "<<l.back();
	}
	void display()
	{
		cout<<"\nDisplaying elements : \n";
		typename list<T>::iterator i;
		for(i=l.begin();i!=l.end();++i)
			cout<<" "<<*i;
		cout<<"\n";
	}
	void reverse_display()
	{
		cout<<"\nDisplaying elements in reverse order : \n";
		typename list<T>::reverse_iterator i;
		for(i=l.rbegin();i!=l.rend();++i)
			cout<<" "<<*i;
		cout<<"\n";
	}
};
int main()
{
	deque<int>s;
	int ch;
	cout<<"\n\n          DEQUEUE OPERATIONS\n";
	do
	{
		cout<<"\nMENU\n";
		cout<<"\n1:INSERT ELEMENT AT FRONT END";
		cout<<"\n2:INSERT ELEMENT AT REAR END";
		cout<<"\n3:DELETE ELEMENT AT FRONT END";
		cout<<"\n4:DELETE ELEMENT AT REAR END";
		cout<<"\n5:DISPLAY FRONT ELEMENT";
		cout<<"\n6:DISPLAY REAR ELEMENT";
		cout<<"\n7:DISPLAY QUEUE";
		cout<<"\n8:DISPLAY QUEUE IN REVERSE ORDER";
		cout<<"\n9:EXIT\n";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		switch (ch)
		{
			case 1: s.push_front();
			 		break;

			case 2: s.push_back();
		 		    break;

			case 3:	s.pop_front();
			 		break;

			case 4:	s.pop_back();
			 		break;

			case 5: s.front_element();
				    break;

			case 6: s.back_element();
					break;

			case 7: s.display();
					break;

			case 8: s.reverse_display();
					break;

			case 9: cout<<"\nFinished!\n";
					break;
			default: cout<<"\nInvalid option";

		}
	}while(ch!=9);
	return 0;
}
