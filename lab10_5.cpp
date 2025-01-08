/*5. Write a C++ program to demonstrate virtual destructors.*/

#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"Constrcting base";
		}
		virtual ~Base()
		{
			 cout<<"\nDesctructing base";
		}
};

class Derived:public Base
{
	public:
	Derived()
	{
		cout<<"\nConstructing derived";
	}
	~Derived()
	{
		cout<<"\nDestructing derived";
	}
};

int main()
{
	Derived *d=new Derived;//Dynamic creation of derived object
    Base *b=d;
	delete b;
	return 0;
}

