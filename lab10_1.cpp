/*1. Write a C++ program to declare a function show () in base and derived class. Display message through
the function to know name of the class whose member function is executed. use late binding concept
using virtual keyword*/
#include<iostream>
using namespace std;
class Base{
	public:
		virtual void show()
		{
			cout<<"Base class show function\n";
		}
};

class Derived:public Base
{
	public:
		void show()
		{
			cout<<"Derived class show function\n";
		}
};

int main()
{
	Base *bptr,b;
	bptr=&b;
	bptr->show();
	Derived d;
	bptr=&d;
	bptr->show();
	return 0;
}
