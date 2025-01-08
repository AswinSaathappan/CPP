/*1. Define a function hypotenuse that calculates the hypotenuse of a right triangle when the
other two sides are given. The function should take two double arguments and return the
hypotenuse as a double. Test this function.*/

#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse(double,double);

int main(){
        double b,h,k;
        cout<<"Enter base:";
        cin>>b;
        cout<<"Enter height:";
        cin>>h;
        k=hypotenuse(b,h);
        cout<<"Hpotenuse of the triamgle is:"<<k;
}

double hypotenuse(double b,double h)
{
        double hyp;
        hyp=sqrt(pow(b,2)+pow(h,2));
        return hyp;
}
