/*4. The area of a rectangular field is 48 m2 and one of its sides is 6m. Write a C++ program
to calculate the time taken by a person to cross the field diagonally at the rate of 20 m/minute?*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int l=6,b,a=48,s=20,d;
 b=a/l;//other side
 d=sqrt(pow(l,2)+pow(b,2));
 float t=(float)d/s;
 cout<<"Length:"<<l<<"m"<<endl;
 cout<<"Breadth:"<<b<<"m"<<endl;
 cout<<"Diagonal:"<<d<<"m"<<endl;
 cout<<"Time taken to cross diagonally:"<<t<<"min";
}
