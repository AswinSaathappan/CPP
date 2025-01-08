/*6. Create a class of COMPLEX numbers containing two float data type members x and y. Write a overloaded member function to overload 
+, - operator to Add and subtract two objects of COMPLEX class respectively. Write an overloaded non member function to overload 
*, / operator to multiply and divide two objects of COMPLEX class respectively.*/

#include<iostream>
using namespace std;
class COMPLEX{
	
	float real;
	float imag;
	
	public:
		COMPLEX()
		:real(0),imag(0)
		{
		}
		COMPLEX(float i,float r)
		:real(r),imag(i)
        {
	    }
		friend COMPLEX operator *(COMPLEX &c1,COMPLEX &c2)
		{
			COMPLEX mul;
			mul.real=c1.real*c2.real-c1.imag*c2.imag;
			mul.imag=c1.real*c2.imag+c1.imag*c2.real;
			return mul;
		}
		friend COMPLEX operator /(COMPLEX &c1,COMPLEX &c2)
		{
			COMPLEX div;
			div.real=(c1.real*c2.real+c1.imag*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag);
			div.imag=(c1.imag*c1.real-c1.real*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag);
			return div;
		}
		COMPLEX operator +(COMPLEX c2)
		{
            COMPLEX add;
            add.real=real+c2.real;
            add.imag= imag+c2.imag;
            return add;
		}
        COMPLEX operator -(COMPLEX c2)
        {
			COMPLEX sub;
			sub.real=real-c2.real;
			sub.imag=imag-c2.imag;
			return sub;
		}
	    void show()
	    {
	    	if(imag<0)
	    	cout<<real<<imag<<"i"<<endl;
	    	else
	    	cout<<real<<"+"<<imag<<"i"<<endl;
	    }
};

int main(){
	COMPLEX c1(4,2);
	COMPLEX c2(2,2);
	COMPLEX c3=c1*c2;
	COMPLEX c4=c1/c2;
	COMPLEX c5=c1+c2;
	COMPLEX c6=c1-c2;
	cout<<"MULTIPLICATION: ";
	c3.show();
	cout<<"DIVISION:       ";
	c4.show();
	cout<<"ADDITION:       ";
	c5.show();
	cout<<"SUBTRACTION:    ";
	c6.show();
}
