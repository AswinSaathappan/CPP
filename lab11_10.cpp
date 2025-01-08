/*10. Write a program to test static_cast and dynamic_cast in C++.*/

#include<iostream>
using namespace std;

class Base
{
	public:
		 virtual void display()
		{
			cout<<"Inside base class"<<endl;
		}
};

class Derived:public Base
{
	public:
	   void display()
	   {
	   	cout<<"Inside derived class"<<endl;
	   }
};

int main()
{
	Base *bptr,b;
	bptr=&b;
	bptr->display();
	cout<<endl;
	
	Derived d;
	bptr=&d;
	bptr->display();
	cout<<endl;
	
	Derived *dptr;
	dptr=&d;
	dptr->display();
	cout<<endl;
	
	
	cout<<"\nSTATIC CAST\n";
	dptr=static_cast<Derived*>(bptr);// Static cast from Base to Derived
	if(dptr!=NULL)
	{
		dptr->display(); // This will invoke display() of Derived class
	}
	else
	{
		cout<<"Static cast failed"<<endl;
	}
	cout<<endl;
	
	cout<<"\nDYNAMIC CAST\n";
	dptr=dynamic_cast<Derived *>(bptr);
	if(dptr!=NULL)
	{
		dptr->display();
	}
	else
	{
		cout<<"Dynamic cast failed"<<endl;
	}
	return 0;
}


