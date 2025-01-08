/*4.Create a class TIME that has separate integer data members for hours, minutes, and seconds. Include member functions to initialize it to
default value, to a specified value,display (overload “<<” through a friend function), add two TIME objects (use operator overloading for “+”).
Write a program to exercise this class in a suitable manner.*/

#include<iostream>
using namespace std;

class Time{
	int h;
	int m;
	int s;
	
	public:
		Time()
		:h(0),m(0),s(0)
		{}
		Time(int hours,int min,int sec)
		:h(hours),m(min),s(sec)
		{
		}
		friend ostream &operator <<(ostream &out,Time &t)
		{
			out<<t.h<<" : "<<t.m<<" : "<<t.s;
			return out;
		}
		Time operator +(Time t2)
		{
			Time t3;
			t3.h=h+t2.h;
			t3.m=m+t2.m;
			t3.s=s+t2.s;
			
			if (t3.s >= 60)
            {
              t3.m += t3.s / 60;
              t3.s %= 60;
            }
            if (t3.m >= 60)
            {
              t3.h += t3.m / 60;
              t3.m %= 60;
            }
            if (t3.h >= 24)
            {
              t3.h %= 24;
            }
			return t3;
		}
};

int main(){
	Time t1(2,30,25);
	cout<<"Time 1: "<<t1;
	cout<<"\n";
	Time t2(3,30,35);
	cout<<"Time 2: "<<t2;
	cout<<"\n";
	Time t3=t1+t2;
	cout<<"Sum of time: "<<t3;
	}
