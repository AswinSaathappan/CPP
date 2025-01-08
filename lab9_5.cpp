/*5. Write a Simple C++ program to implement Multiple inheritance.*/
#include <iostream>
using namespace std;
 
class Mammal
{
    public:
    void display()
    {
        cout<<"Mammal\n";
    }
};
 
class Animal 
{
    public:
    void display()
    {
        cout<<"Animal\n";
    }
};
 
class Dog:public Mammal,public Animal
{
    public:
    void display()
    {
        cout<<"Dog\n";
    }
};
 
int main()
{
	Mammal m;
	m.display();
    cout<<endl;
    
    Animal a;
    a.display();
    cout<<endl;
    
    Dog d;
    d.Mammal::display();
    d.Animal::display();
    d.display();
    return 0;
}
 
