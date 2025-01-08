/*8. Write a Simple C++ program to implement Hierarchical inheritance.*/
#include <iostream>
using namespace std;
 
class Animal
{
    public:
    void display()
    {
        cout<<"Animal\n";
    }
};
 
class Dog:public Animal
{
    public:
    void display()
    {
        cout<<"Dog\n";
    }
};
 
class Cat:public Animal
{
    public:
    void display()
    {
        cout<<"Cat\n";
    }
};
 
int main()
{
	Animal a;
	a.display();
	cout<<endl;
	
    Dog d;
    d.Animal::display();
    d.display();
    cout<<endl;
    
    Cat c;
    c.Animal::display();
    c.display();
    return 0;
}
