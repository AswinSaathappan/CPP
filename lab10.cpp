//10.Write a program to read temperature in centigrade and display a suitable message according to temperature state
// below:
// i. Temp < 0 then Freezing weather
// ii. Temp 0-10 then Very Cold weather
// iii. Temp 10-20 then Cold weather
// iv. Temp 20-30 then Normal in Temp
// v. Temp 30-40 then Its Hot
// vi. Temp >=40 then Its Very Hot
#include<iostream>
using namespace std;
int main()
{
 float temp;
 cout<<"Enter temperature:";
 cin>>temp;
 if(temp<0)
 {
  cout<<"Freezing weather";
 }
 else if(temp>=0 && temp<10)
 {
  cout<<"Very cold weather";
 }
 else if(temp>=10 && temp<20)
 {
  cout<<"Cold weather";
 }
 else if(temp>=20  && temp<30)
 {
  cout<<"Normal temperature";
 }
 else if(temp>=30 &&  temp<40)
 {
  cout<<"Its hot";
 }
 else
 {
  cout<<"Its very hot";
 }
}
