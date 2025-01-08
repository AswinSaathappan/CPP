/*1. function template to find the biggest out of two numbers. Using this find the
biggest out of 2 integer, 2 double values and two strings*/

#include<iostream>
using namespace std;
template<typename T>
T biggest(T x,T y)
{
        if(x>y)
        return x;
        else
        return y;
}
int main()
{
        int x,y;
        double a,b;
        string c,d;
        cout<<"Enter two integer numbers:";
        cin>>x>>y;
        cout<<"Enter two double numbers:";
        cin>>a>>b;
        cout<<"Enter two strings:";
        cin>>c>>d;
        if(x!=y)
        {
         cout<<"Biggest of "<<x<<" and "<<y<<" is "<<biggest(x,y)<<endl;
        }
        else
        {
         cout<<"Both integers are equal"<<endl;;
        }
        if(a!=b)
        {
         cout<<"Biggest of "<<a<<" and "<<b<<" is "<<biggest(a,b)<<endl;
        }
        else
        {
         cout<<"Both doubles are equal"<<endl;
        }
        if(c!=d)
        {
         cout<<"Biggeset of "<<c<<" and "<<d<<" is "<<biggest(c,d)<<endl;
        }
        else
        {
         cout<<"Both strings are equal"<<endl;
        }
}
