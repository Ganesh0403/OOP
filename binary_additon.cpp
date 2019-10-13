//============================================================================
// Name        : Ass13.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

class binary_add
{
	stack<int>s1,s2,s3;
	int i,n,x;
public:
	void read()
	{
		cout<<"Enter number of binary digits : ";
		cin>>n;
		cout<<"\nEnter first binary number : \n";
		for(i=0;i<n;i++)
		{
			cout<<"Enter bit : ";
			cin>>x;
			s1.push(x);
		}
		cout<<"\nEnter second binary number : \n";
		for(i=0;i<n;i++)
		{
			cout<<"Enter bit : ";
			cin>>x;
			s2.push(x);
		}
	}
	void add()
	{
		int c=0,s,a,b;
		while(!s1.empty())
		{
			a=s1.top();
			s1.pop();
			b=s2.top();
			s2.pop();
			s = a^b^c;
			c = (a&b)|(b&c)|(a&c);
			s3.push(s);
		}
		if(c==1)
			s3.push(c);

		cout<<"\nResult of Addition : ";
		while(!s3.empty())
		{
			cout<<" "<<s3.top();
			s3.pop();
		}
	}
};
int main()
{
	binary_add b;
	b.read();
	b.add();
	return 0;
}
