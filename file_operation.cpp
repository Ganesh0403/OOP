//============================================================================
// Name        : file_handling.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main(){
	ofstream fout;

	int roll_no;
	string name;
	string address;
	long long int phone;
	fout.open("sample.txt");
	cout<<"\nStudent data :";

	cout<<"\nEnter the roll no of student :";
	cin>>roll_no;
	cout<<"Enter the name of student :";
	cin>>name;
	cout<<"Enter the address of student :";
	cin>>address;
	cout<<"Enter the phone no of student :";
	cin>>phone;



	fout<<name<<endl;
	fout<<roll_no<<endl;
	fout<<address<<endl;
	fout<<phone<<endl;

	fout.close();

	ifstream fin;
	fin.open("sample.txt");

	cout<<"\nEntered data of students are :\n";
	while(fin){
	fin>>name;
	fin>>roll_no;
	fin>>address;
	fin>>phone;
	}

	cout<<"Name :"<<name<<endl;
	cout<<"Roll_no :"<<roll_no<<endl;
	cout<<"Address :"<<address<<endl;
	cout<<"Phone :"<<phone<<endl;
	fin.close();

	return 0;
}
