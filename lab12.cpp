//12.Write a program to print the multiples of 7 between 1 to 50 in reverse order. Ex- 49, 42, ...., 7
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int a[20],l=0;
cout<<"Increasing order:";
 for(int i=1;i<50;i++)
{
 if(i%7==0)
 {
  a[l]=i;
  cout<<a[l]<<" ";
  l++;
 }
}
cout<<"\nlength of a[] is "<<l;
cout<<"\nReverse order:";
for (int i=l-1;i>=0;i--)
 {
   cout << a[i] << " ";
  }
}
