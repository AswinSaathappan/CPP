/*12. Write a Simple C++ program to implement Hybrid inheritance.*/
#include <iostream>
using namespace std;
 
class Student
{
    public:
    void display()
    {
        cout<<"Student\n";
    }
};
class Marks:public Student 
{
    public:
    void display()
    {
        cout<<"Marks\n";
    }
};
 
class Sports
{
    public:
    void display()
    {
        cout<<"Sports\n";
    }
};
 
class Result:public Marks, public Sports
{
    public:
    void display()
    {
        cout<<"Result\n";
    }
};
 
int main()
{
	Student s;
	s.display();
	cout<<endl;
	
	Marks m;
	m.Student::display();
	m.display();
	cout<<endl;
	
	Sports t;
	t.display();
	cout<<endl;
	
	Result r;
	r.Marks::display();
	r.Sports::display();
	r.Student::display();
	r.display();
    return 0;
}
