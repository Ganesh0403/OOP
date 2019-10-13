//============================================================================
// Name        : Ass2.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class student
{
	int roll_no;
	string name,class1;
	char division;
	string address;
	string bloodgroup;
	static int count;

public:
	student()   // Default Constructor
 	{
		roll_no=++count;
		name="";
		class1="SE";
		division='A';
		address="";
		bloodgroup="";
 	}
	student(string name,string class1,char division,string address,string bloodgroup)  //Parameterised Constructor
	{
		cout<<"\nParameterised Constuctor\n";
		roll_no=++count;
		this->name=name;
		this->class1=class1;
		this->division=division;
		this->address=address;
		this->bloodgroup=bloodgroup;
	}
	~student()
	{
		cout<<"\n I am in Destructor\n";
		roll_no=0;
		name="";
		class1="";
		division='X';
		address="";
		bloodgroup="";
		count--;
	}
	void readData()
	{
		cout<<"\nEnter name : ";
		cin>>name;
		cout<<"Enter address : ";
		cin>>address;
		cout<<"Enter bloodgroup : ";
		cin>>bloodgroup;
	}
	void display()
	{
		cout<<"Roll no : "<<roll_no<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Class : "<<class1<<endl;
		cout<<"Division : "<<division<<endl;
		cout<<"Address : "<<address<<endl;
		cout<<"Blood group : "<<bloodgroup<<endl;
	}
	static void showNoOfstud()
	{
		cout<<"\nNumber of Students : "<<count<<endl;
	}
};
int student::count;

int main()
{
	{
		student s1;
		s1.readData();
		cout<<"\nOutput S1\n";
		s1.display();

		cout<<"\nCreate S2 dynamically";
		student *s2;
		s2=new student;
		s2->readData();
		cout<<"\nOutput S2\n";
		s2->display();
		student::showNoOfstud();
		delete(s2);
		student::showNoOfstud();

		student s3("Ajay","SE",'A',"Pune","AB+ve");
		cout<<"\nOutput S3\n";
		s3.display();

		cout<<"\nCreate S4 dynamically";
		student *s4;
		s4=new student("Vijay","SE",'B',"Pimpri","A+ve");
		cout<<"\nOutput S4\n";
		s4->display();
		delete(s4);
		student::showNoOfstud();
	}
	student::showNoOfstud();
	return 0;
}
