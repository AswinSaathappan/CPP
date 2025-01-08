/*11. Create a class Distance with feet (integer) and inch (float) as data members. Have necessary methods to get and display the Distance 
values. Create an object of distance and convert to meters (float). [class to float – class to basic conversion]*/

#include<iostream>
#include<cmath>
using namespace std;

class Distance{
	int feet;
	float inch;
	
	public:
		Distance(int ft,float in) 
		:feet(ft),inch(in)
		{		
	    }
		operator float()
		{
			return (inch*0.0254+feet*0.30479);
		}
		void display()
		{
			cout<<feet<<"feet "<<inch<<"inches";
		}
};

int main(){
	cout<<"Class type to Basic type Conversion:";
	int feet;
	float inch;
	cout<<"\nEnter feet:";
	cin>>feet;
	cout<<"Enter inch:";
	cin>>inch;
	Distance d(feet,inch);
	d.display();
	float m;
	m=/*(float)*/d;//class to float conversion
	cout<<endl;
	cout<<feet<<"feet "<<inch<<"inches in meters "<<m;
}

