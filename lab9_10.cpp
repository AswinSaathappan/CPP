/*10.Write a Simple C++ program to implement Multipath inheritance.*/
#include <iostream>
using namespace std;

class Animal {
public:
    void display(){
        cout << "Animal" << endl;
    }
};

class Dog : virtual public Animal {
public:
    void display(){
        cout << "Dog" << endl;
    }
};

class Cat : virtual public Animal {
public:
    void display()
    {
    	cout<<"Cat"<<endl;
	}
};

class Mammal : public Dog, public Cat {
public:
	void display()
	{
		cout<<"Mammal"<<endl;
	}
};

int main() {
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
    cout<<endl;
    
    Mammal m;
    m.Animal::display();
    m.Dog::display();
    m.Cat::display();
    m.display();
    return 0;
}
