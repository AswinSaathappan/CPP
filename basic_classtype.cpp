/* Program to convert basic type to class type using constructor */

#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
     Time(int);
	 void display();
};

Time :: Time(int t)
{
	cout<<"Basic Type to ==> Class Type Conversion..."<<endl;
	hrs=t/60;
	min=t%60;
}

void Time::display()
{
	cout<<hrs<< " Hours(s)" <<endl;
	cout<<min<< " Minutes" <<endl;
}

int main()
{
	int duration;
	cout<<"Enter time duration in minutes:"; 
    cin>>duration;	
	Time t1=duration;
    t1.display();
}
