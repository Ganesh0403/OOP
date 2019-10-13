//============================================================================
// Name        : Ass5.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class user
{
	int age;
	float income;
	string city;
	char vehicle;
public:
	void getdata()
	{
		cout<<"\nEnter age : ";
		cin>>age;
		cout<<"\nEnter income : ";
		cin>>income;
		cout<<"\nEnter city : ";
		cin>>city;
		cout<<"\nDo you have 4 wheeler vehicle Enter (Y/N): ";
		cin>>vehicle;
	}
	void display()
	{
		if(age<18 || age>55)
			throw age;
		if(income<50000 || income>100000)
			throw income;
		if(city!="PUNE" && city!="pune" && city!="Pune" &&
				city!="MUMBAI" && city!="Mumbai" && city!="mumbai" &&
					city!="Bangalore" && city!="BANGALORE" && city!="bangalore"
						&& city!="CHENNAI" && city!="Chennai" && city!="chennai")
			throw city;
		if(vehicle!='y' && vehicle!='Y')
			throw vehicle;

		cout<<"\nEntered Age : "<<age;
		cout<<"\nEntered Income : "<<income;
		cout<<"\nEntered City : "<<city;
		cout<<"\nEntered vehicle : "<<vehicle;
	}
};
int main()
{
	user s;
	s.getdata();
	try
	{
	s.display();
	}
	catch(int a)
	{
		cout<<"\nException : Age not in limit..."<<a;
	}
	catch(float b)
	{
		cout<<"\nException : Income not in limit..."<<b;
	}
	catch(string c)
	{
		cout<<"\nException : City not in limit..."<<c;
	}
	catch(char d)
	{
		cout<<"\nException : Vehicle not in limit..."<<d;
	}
	return 0;
}
