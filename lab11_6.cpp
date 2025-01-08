/*6. Write a program for C++ Class Templates with Multiple Parameters and test it.*/

#include<iostream>
using namespace std;
template<class T1,class T2>
class Test
{
	T1 a;
	T2 b;
	public:
		Test(T1 a,T2 b)
		:a(a),b(b)
		{
		}
	    void show()
	    {
	    	cout<<a<<" and "<<b<<endl;
		}
};

int main()
{
	Test<float,int>t1(1.23,123);
	Test<int,char>t2(100,'a');
	t1.show();
    t2.show();
}
