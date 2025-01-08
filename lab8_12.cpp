/*12. Create a class Centimeter with one integer member that represents centimeter. Create 
another class Meter with one integer member that represents meter. Write a program to 
convert a meter to centimeter. [class to class]*/

#include<iostream>
using namespace std;
class Meter;//Forward declaration
class Centimeter{
	int cm;
	public:
		Centimeter()
		:cm(0)
		{
		}
		Centimeter(int CM)
		:cm(CM)
		{
		}
		Centimeter(Meter &M);//Meter to Centimeter conversion
		void print()
		{
			cout<<"Centimeters:"<<cm<<endl;
		}
};
class Meter{
	int m;
	public:
	   Meter(int M)
	   :m(M)
	   {
	   }
	   void print()
	   {
	   	cout<<"Meters:"<<m<<endl;
	   }
	   friend class Centimeter;
};
Centimeter::Centimeter(Meter &M)
{
  cm=M.m*100;//1meter=100cm
}
int main()
{
	Meter m(5);
	m.print();
	Centimeter cm;
	cm=m;//class to class conversion
	cm.print();
	return 0;
}
