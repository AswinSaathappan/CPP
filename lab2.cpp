//2. Calculate the volume and surface area of a sphere
#include<iostream>
#define PI 3.14
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 float sa,v;
 int r;
 cout<<"Enter radius of sphere:";
 cin>>r;
 sa=4 * PI * pow(r,2);//Surface area of sphere
 v=(4.0/3) * PI * pow(r,3);//Volume of the sphere
 cout<<"Surface area of the sphere:"<<fixed<<setprecision(2)<<sa<<endl;
 cout<<"Volume of the sphere:"<<fixed<<setprecision(2)<<v;
 return 0;
}
