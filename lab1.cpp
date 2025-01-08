/*1. Write a C++ program to compute the area and perimeter of a rectangle.(Formula:
Area=length x breadth, Perimeter=2(length + breadth)*/
#include<iostream>
using namespace std;
int main()
{
 int A,P,l,b;
 cout<<"Enter length:";
 cin>>l;
 cout<<"Enter breadth:";
 cin>>b;
 A=l*b; //Area
 P=2*(l+b);//perimeter
 cout<<"Area of rectangle:"<<A<<endl;
 cout<<"Perimeter of rectangle:"<<P;
 return 0;
}
