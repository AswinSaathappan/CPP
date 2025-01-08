/*2. Write a C++ program for static binding (accessing member function using pointers-pointer casting)*/
#include<iostream>
using namespace std;

class Base{
	public:
		virtual void show()
		{
			"Base class show function";
		}
};

class Derived:public Base{
	public:
		void show()
		{
			cout<<"Derived class show function";
		}
};
int main()
{
	Base *bptr;
	Derived d;
	bptr=&d;
	/*Binding at run time*/
	bptr->show();
}
