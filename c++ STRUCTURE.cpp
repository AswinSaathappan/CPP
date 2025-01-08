//Author -Jayanthi Kathri
/*Written on 13 May 2022
 Program to demonstrate the structure of C++*/
 
#include<iostream>
using namespace std;

#define PI 3.14

int r=2;
void area();

class Myclass
{
	public:
		int a;
			void display()
			{
				cout<<"Inside class"<<endl;
			}
};

int main()
{
	Myclass m;
	m.a=90;
	m.display();
	
	area();
	
	cout<<"Hello World"<<endl;
	
	cout<<m.a<<endl;
	
	return 0;
}

void area()
{
	float area;
	area=PI*r*r;
	cout<<"Area of circle:"<<area<<endl;
}
