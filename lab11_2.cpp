/*2. function template to swap two numbers. Using this, swap 2 integers, 2 floats
and 2 characters.*/

#include<iostream>
using namespace std;
template<typename T>
void Swap(T &a,T &b)
{
        T temp;
        temp=a;
        a=b;
        b=temp;
}

int main()
{
        int x,y;
        cout<<"Enter two integers:";
        cin>>x>>y;
        float a,b;
        cout<<"Enter float numbers:";
        cin>>a>>b;
        char c,d;
        cout<<"Enter character:";
        cin>>c>>d;
        cout<<"BEFORE SWAPPING:\n";
        cout<<"x:"<<x<<"\ny:"<<y<<"\na:"<<a<<"\nb:"<<b<<"\nc:"<<c<<"\nd:"<<d<<endl;
        Swap(a,b);
        Swap(x,y);
        Swap(c,d);
        cout<<"AFTER SWAPPING:\n";
        cout<<"x:"<<x<<"\ny:"<<y<<"\na:"<<a<<"\nb:"<<b<<"\nc:"<<c<<"\nd:"<<d<<endl;
}
