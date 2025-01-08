/*5. Earth takes a period of revolution of 31558150 seconds. Write a program to find the  number of days, hours, minutes and seconds present 
for the given seconds*/
#include<iostream>
using namespace std;
int main()
{
 int d,h,m,s=31558150;
 d=s/(24*60*60); //days
 s=s%(24*60*60);
 h=s/(60*60);    //hours
 s=s%(60*60);
 m=s/60;        //minutes
 s=s%60;        //seconds
 cout<<d<<":"<<h<<":"<<m<<":"<<s;
}
