#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    int age;
    char gender;
    string department;

public:
    Employee(string n, int a, char g, string d)
        : name(n), age(a), gender(g), department(d) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Department: " << department << endl;
    }
};

// Base class: Student
class Student {
protected:
    string name;
    int age;
    char gender;
    string department;

public:
    Student(string n, int a, char g, string d)
        : name(n), age(a), gender(g), department(d) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class: ResearchScholars
class ResearchScholars : protected Employee, protected Student {
    string research_topic;

public:
    ResearchScholars(string n, int a, char g, string d, string topic)
        : Employee(n, a, g, d),Student(n, a, g, d),research_topic(topic) {}

    void display() {
        Employee::display();
        cout << "Research Topic: " << research_topic << endl;
    }
};

int main() {
    // Create instances
    Employee emp("Aditya", 25, 'M', "Human Resources");
    Student stu("Aditi", 24, 'F', "Computer Science");
    ResearchScholars rs("Aswin", 25, 'M', "Physics", "Quantum Mechanics");

    // Display details
    cout << "Employee Details:" << endl;
    emp.display();

    cout << "\nStudent Details:" << endl;
    stu.display();

    cout << "\nResearch Scholar Details:" << endl;
    rs.display();

    return 0;
}

