
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class teleph
{
	char name[20];
	long long phno;
public:
	void accept();
	void display();
	long long retphno() {return phno;}
	char* retname(){ return name;}
};
void teleph :: accept()
{
	cout<<"\n Enter Name :";
	cin>>name;
	cout<<"\n Enter Telephone no.:";
	cin>>phno;
}
void teleph :: display()
{
	cout<<"\n Name:"<<name;
	cout<<"\t Phone no.:"<<phno<<endl;
}
void createfile()
{
	cout<<"\n Enter no. of data :";
	int n;
	cin>>n;
	teleph obj;
	ofstream out;
	out.open("data");
	for(int i=0;i<n;i++)
	{
		obj.accept();
		out.write((char*) &obj , sizeof(obj) );
	}
	out.close();
}
void displayfile()
{
	ifstream in;
	teleph obj;
	in.open("data");
	while (in)
	{
		in.read((char*) &obj, sizeof(obj) );
		if (in.eof()!=0)
			break;
		obj.display();
	}
}
void adddata()
{
	ofstream out;
	out.open("data",ios::binary | ios::app);
	teleph obj;
	obj.accept();
	out.write((char*) &obj, sizeof(obj));
	out.close();
}
void searchtele()
{
	ifstream in;
	in.open("data");
	teleph obj;
	int flag=0;
	long long x;
	cout<<"\nEnter Telephone no.:";
	cin>>x;
	while (in)
	{
		in.read((char*)&obj,sizeof(obj));
		if (x==obj.retphno())
		{
			flag =1;
			cout<<"\n **Record Found**\n Details are  :";
			obj.display();
			break;
		}
	}
	if (flag==0)
		cout<<"\nRecord not found";
}
void searchname()
{
	ifstream in;
	in.open("data");
	teleph obj;
	int flag=0;
	char x[20];
	cout<<"\nEnter Name :";
	cin>>x;
	while (in)
	{
		in.read((char*)&obj,sizeof(obj));
		if ( strcmp (x,obj.retname()) ==0)
		{
			flag =1;
			cout<<"\n **Record Found**\n Details are  :";
			obj.display();
			break;
		}
	}
	if (flag==0)
		cout<<"\nRecord not found";
}
void editdata()
{
	fstream in;
	in.open("data");
	teleph obj;
	int flag=0;
	char x[20];
	cout<<"\n Enter name you want to edit  :";
	cin>>x;
	while (in)
	{
		in.read((char*)&obj,sizeof(obj));
		if ( strcmp (x,obj.retname()) ==0)
		{
			flag=1;
			in.seekp((-1*sizeof(obj)),ios::cur);
			cout<<"\n Enter New details :\n";
			obj.accept();
			in.write((char*) &obj, sizeof(obj) );
			break;
		}
	}
	if (flag==0)
		cout<<"\nRecord not found";
}
int main()
{
	int x;
	do
	{
		cout<<"\n 1) Create File";
		cout<<"\n 2) Display File";
		cout<<"\n 3) Add Data";
		cout<<"\n 4) Search using telephone";
		cout<<"\n 5) Search using name:";
		cout<<"\n 6) Edit File ";
		cout<<"\n 7) Exit";
		cout<<"\n Enter your choice :";
		cin>>x;
		switch(x)
		{
		case 1:
			createfile();
			break;
		case 2:
			displayfile();
			break;
		case 3:
			adddata();
			break;
		case 4:
			searchtele();
			break;
		case 5:
			searchname();
			break;
		case 6:
			editdata();
			break;
		}
	}while (x!=7);
	return 0;
}
