/*4. Create a template class which has 2 members’ mark1 and mark2. Have constructors to initialize these values and method total to calculate 
the sum of two marks. Test this template class by first having 2 integers as marks and then 2 floating point values as marks.*/

#include<iostream>
using namespace std;
template <class T>
class Marks
{
	private:
		T mark1;
		T mark2;
		
	public:
		Marks(T x,T y)
	    {
	      mark1=x;
	      mark2=y;
		}
		T total();
};

template <class T>
T Marks<T>::total()
{
    return mark1 + mark2;
}

int main()
{
	Marks<int> m1(99,100);
	Marks<float>m2(98.5,99.5);
	cout<<"Total of m1:"<<m1.total()<<endl;
	cout<<"Total of m2:"<<m2.total();
	return 0;
}

