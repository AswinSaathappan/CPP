/*2. Write a C++ program for static binding (accessing member function using pointers-pointer casting)*/

#include<iostream>
using namespace std;
class Base
{
	public:
		void show()
		{
			cout<<"Base class show function"<<endl;
		}
};

class Derived:public Base
{
	public:
		void show()
		{
			cout<<"Derived class show function"<<endl;
		}
};

int main()
{ 
	Base *bptr,b;//Base class pointer
	bptr=&b;//pointing to base object using base pointer
	bptr->show();//Binded staically
	Derived d;
	bptr=&d;//pointing to derived object using base pointer
	((Derived*)bptr)->show();//Binded statically
	
	/*Derived class pointer*/
	Derived *dptr=&d;//pointing to derived object using derived pointer
	dptr->show();//Binded statically
	
	Base *bcast=&d;//pointing to derived object useing base pointer
	Derived *dcast=static_cast<Derived*>(bcast);//Casting to derived pointer
	dcast->show();
	return 0;
}
