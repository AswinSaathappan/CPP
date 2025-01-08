/*8. Write a program to read the age of a candidate and determine whether he/she is eligible to
cast their vote. If user is not eligible, display how many years are left to be eligible.*/
#include<iostream>
using namespace std;
int main()
{
 int age;
 cout<<"Enter age:";
 cin>>age;
 if(age>=18)
 {
  cout<<"\nEligible for vote";
 }
 else
 {
  cout<<"\nNot eligible for vote:";
  cout<<"\nNo of years left to be eligible for vote:"<<18-age;
 }
}
