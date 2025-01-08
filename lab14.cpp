//14.Write a program to check whether given number is prime or not.
#include<iostream>
using namespace std;
int main()
{
 int n;
 bool c=1;//c=1 for prime
 cout<<"Enter num:";
 cin>>n;
 for(int i=2;i<n;i++)
 {
   if(n%i==0)
   {
     c=0;//c=0 for not prime
     break;
   }
 }
if(c!=0)
{
 cout<<n<<" is prime";
}
else
{
 cout<<n<<" is not prime";
}
}
