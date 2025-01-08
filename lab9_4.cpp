#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int salary;

public:
    Employee(string name="", int salary=0) 
	:name(name),salary(salary) 
	{ }
};

class Manager:public Employee
{
protected:
    string department;

public:
    Manager(string name="",int salary=0,string department="") 
    : Employee(name, salary), department(department) 
    {}

    void display() 
    {
        cout << "Name      : " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary    : " << salary << endl;
    }
};

class Executive:public Manager
{
public:
    Executive(string name="",int salary=0, string department="") 
    :Manager(name, salary, department) 
    {}

    void display()
    {
        Manager::display();
    }
};

int main()
{
    Manager m("Aswin", 100000, "Administration");
    Executive e("Arun", 85000, "Finance");

    cout << "Manager Details:" << endl;
    m.display();
    cout << endl;

    cout << "Executive Details:" << endl;
    e.display();
    cout << endl;

    return 0;
}

