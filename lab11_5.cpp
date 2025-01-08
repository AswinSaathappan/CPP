/*5. Create a simple Calculator to perform the four basic arithmetic operations addition (), subtraction (), multiplication (), and division ()
in C++ using a class template. The template of the class should have two variables whose values are passed at the time of object creation.
The constructor of this class takes two arguments of generic datatypes.*/

#include<iostream>
using namespace std;
template<class T>
class Calculator
{
	T n1;
	T n2;
	public:
    Calculator(T x,T y)
    :n1(x),n2(y)
	{
	}
	T addition()
	{
		return n1+n2;
	}
	
	T subtraction()
	{
		return n1-n2;
	}
	
	T multiplication()
	{
		return n1*n2;
	}
	
	T division()
	{
		
			if(n2==0)
			{
				return 0;
	        } 
		 	else
		    {
			 return n1/n2;
		    }
	}
	
	void calculator() {
        cout<<n1<<"+"<<n2<<"="<<addition()<<endl;
        cout<<n1<<"-"<<n2<<"="<<subtraction()<<endl;
        cout<<n1<<"*"<<n2<<"="<<multiplication()<<endl;
        cout<<n1<<"/"<<n2<<"="<<division()<<endl;
    }
};

int main()
{
 	Calculator<int>c1(5,6);
 	c1.calculator();
}

