#include<iostream>
using namespace std;

class Shape
{
	protected:
		float dimensions;
	public:
		void getdimension()
		{
			cin>>dimensions;
		}
		virtual float area()=0;//Pure virtual function
};
class Square:public Shape
{
	public:
        float area()
		{
		  return dimensions*dimensions;	
		}	
};

class Circle:public Shape
{
	public:
		float area()
		{
			return 3.14*dimensions*dimensions;
		}
};

class shape
{
   protected:
		float l;
		float b;
	public:
		void getdimension()
		{
			cin>>l;
			cin>>b;
		}
		
		virtual float area()
		{
		    return 0;
		}
};

class Rectange:public shape
{
    public:
    float area()
    {
        return l*b;
    }
};

class Triangle:public shape
{
    public:
    float area()
    {
        return (1/2.0)*l*b;
    }
};

int main()
{
	/*ABSTRACT CLASS*/
	Square s;
	Circle c;
	cout<<"Enter length for square:";
	s.getdimension();
	cout<<"\nEnter radius for circle:";
	c.getdimension();
	cout<<"\nArea of square:"<<s.area();
	cout<<"\n\nArea of circle:"<<c.area();
	
	/*CONCRETE CLASS*/
	shape *sptr; 
	Rectange r;
	Triangle t;
	sptr=&r;
	cout<<"\n\nEnter length and breadth for rectangle:";
	sptr->getdimension();
	sptr=&t;
	cout<<"\nEnter height and base:";
	sptr->getdimension();
	cout<<"\nArea of Rectangle:"<<r.area();
	cout<<"\n\nArea of Triangle:"<<t.area();
	
}
