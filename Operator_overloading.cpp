//============================================================================
// Name        : Ass3.cpp
// Author      : Ganesh Shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex
{
	float real,img;
public:
	friend istream &operator>>(istream &in,Complex &c);
	friend ostream &operator<<(ostream &out,Complex c);
	Complex()
	{
		real=0;
		img=0;
	}
	Complex operator+(Complex X)
	{
		Complex Z;
		Z.real=real+X.real;
		Z.img=img+X.img;
		return(Z);
	}
	Complex operator-(Complex X)
	{
		Complex Z;
		Z.real=real-X.real;
		Z.img=img-X.img;
		return(Z);
	}
	Complex operator*(Complex X)
	{
		Complex Z;
		Z.real=real*X.real-img*X.img;
		Z.img=real*X.img+img*X.real;
		return(Z);
	}
	Complex operator-()
	{
		Complex X;
		X.real=-real;
		X.img=-img;
		return(X);
	}
	Complex operator++()
	{
		Complex X;
		X.real=++real;
		X.img=++img;
		return(X);
	}
	Complex operator++(int i)
	{
		Complex X;
		X.real=real++;
		X.img=img++;
		return(X);
	}
};
istream &operator>>(istream &in,Complex &c)
{
	cout<<"Enter Real part : ";
	in>>c.real;
	cout<<"Enter Imaginary part : ";
	in>>c.img;
	return in;
}
ostream &operator<<(ostream &out,Complex c)
{
	if(c.img>0)
	{
		out<<c.real<<"+i"<<c.img<<endl;
	}
	else if(c.img<0)
	{
		out<<c.real<<"-i"<<(-1)*c.img<<endl;
	}
	else
	{
		out<<c.real<<endl;
	}
	return out;
}

int main()
{
	int ch;
	Complex c1,c2,c3;
	cout<<"Enter First complex number c1 : \n";
	cin>>c1;
	cout<<"Enter second complex number c2 : \n";
	cin>>c2;

	do
	{
		cout<<"Select operation\n";
		cout<<"1 : Display\n";
		cout<<"2 : Addition\n";
		cout<<"3 : Subtraction\n";
		cout<<"4 : Multiplication\n";
		cout<<"5 : unary operation\n";
		cout<<"6 : Pre increment\n";
		cout<<"7 : Post increment\n";
		cout<<"Enter choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1: cout<<"\nc1 : "<<c1<<endl;
				cout<<"\nc2 : "<<c2<<endl;
				break;
		case 2: c3=c1+c2;
				cout<<"\nAddition : "<<c3<<endl;
				break;
		case 3: c3=c1-c2;
				cout<<"\nSubtraction : "<<c3<<endl;
				break;
		case 4: c3=c1*c2;
				cout<<"\nMultiplication : "<<c3<<endl;
				break;
		case 5: c3=-c1;
				cout<<"\n-c1 : "<<c3<<endl;
				cout<<"\n-c2 : "<<-c2<<endl;
				break;
		case 6: cout<<"\nPre increment ++c1 : "<<++c1<<endl;
				cout<<"Pre increment ++c2 : "<<++c2<<endl;
				break;
		case 7: cout<<"\nPost increment c1++ : "<<c1++<<endl;
				cout<<"Post increment c2++ : "<<c2++<<endl;
				break;
		case 8:
				cout<<"\nAfter post increment : \n";
				cout<<"c1 : "<<c1<<endl;
				cout<<"c2 : "<<c2<<endl;
				break;
		case 9:
				break;
		}
	}while(ch!=9);

	return 0;
}
