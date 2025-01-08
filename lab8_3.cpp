/*3. Write a C++ program to overload < operator and display the smallest number out of two 
objects using friend function.*/

#include <iostream>
using namespace std;

class Small {
    int n;
    public:
    Small(int num)
    :n(num)
    {}
    int getvalue()
    {
        return n;
    }
    friend int operator < (Small n1,Small n2)
    {
        if( n1.n < n2.n )
         return 1;
        else
         return 0;
    }
};

int main() {
    int x,y;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
    Small n1(x);
    Small n2(y);
    if (n1 < n2)
    cout<<"smallest number is:"<< n1.getvalue();
    else
    cout<<"smallest number is:"<< n2.getvalue();
    return 0;
    
}
