/*1. Write a Simple C++ program to implement Single inheritance.*/
#include<iostream>
using namespace std;
 
class Mammal
{
    public:
    void display()
    {
        cout<<"Mammal\n";
    }
};
class Animal:public Mammal 
{
    public:
    void display()
    {
        cout<<"Animal\n";
    }
};
 
int main()
{
	Mammal m;
	m.display();
	cout<<endl;
	
    Animal a;
    a.Mammal::display();
    a.display();
    return 0;
}
 

