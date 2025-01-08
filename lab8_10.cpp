/*10. Create a class Distance with feet (integer) and inch (float) as data members. Write a program to prompt the user to enter meters (float)
and convert to Distance object. Have necessary methods to get and display the Distance values. [float to class – basic to class conversion]*/

#include<iostream>
#include<iomanip>
using namespace std;

class Distance{
	int feet;
	float inch;
	public:
	Distance(float m)
	{
		float total_inch=m*39.3701;// 1 metre= 39.3701 inch
	    feet=(int)total_inch/12; //1 feet=12 inches
		inch=total_inch-feet*12;
	}
    void display()
    {
    	cout<<feet<<"feet "<<fixed<<setprecision(4)<<inch<<"inch";
	}
};

int main(){
	cout<<"Basic to Class Type conversion:";
	float m;
	cout<<"\nEnter meters:";
	cin>>m;
	Distance d1(m);
	cout<<m<<"metres"<<endl;
	d1.display();
}
