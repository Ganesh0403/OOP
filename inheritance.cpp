//============================================================================
// Name        : Ass4.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person
{
	string name,addr;
	long long int ph_no;
public:
	void getdata()
	{
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter address : ";
		cin>>addr;
		cout<<"Enter phone number : ";
		cin>>ph_no;
	}
	void display()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Address : "<<addr<<endl;
		cout<<"Phone Number : "<<ph_no<<endl;
	}
};
class Academic
{
	string degree;
	string class1;
public:
	void getdata()
	{
		cout<<"\nEnter degree : ";
		cin>>degree;
		cout<<"Enter class of passing : ";
		cin>>class1;
	}
	void display()
	{
		cout<<"Degree : "<<degree<<endl;
		cout<<"Class of passing : "<<class1<<endl;
	}
};
class Professional
{
	string company_name,designation;
	long int salary;
public:
	void getdata()
	{
		cout<<"\nEnter company name : ";
		cin>>company_name;
		cout<<"Enter designation : ";
		cin>>designation;
		cout<<"Enter salary : ";
		cin>>salary;
	}
	void display()
	{
		cout<<"Company name : "<<company_name<<endl;
		cout<<"Designation : "<<designation<<endl;
		cout<<"Salary : "<<salary<<endl;
	}
};
class Biodata : public Person,public Academic,public Professional
{
public:
	void getdata()
	{
		Person::getdata();
		Academic::getdata();
		Professional::getdata();
	}
	void display()
	{
		cout<<"\nPersonal Details : \n";
		Person::display();
		cout<<"\nAcademic Details : \n";
		Academic::display();
		cout<<"\nProfessional Details : \n";
		Professional::display();
	}
};
int main()
{
	Biodata b;
	b.getdata();
	b.display();
	return 0;
}
