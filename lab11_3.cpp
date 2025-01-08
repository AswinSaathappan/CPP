/*3. Write a function template to sort a set of numbers. Using this first sort the list of integers
and then sort the list of floating point values.*/

#include<iostream>
using namespace std;
template<typename T>
void Sort(T a[],int n)
{
  T temp;
  int i=0,j=0;
  //Bubble sort
  for(int i=0;i<n-1;i++)
  {
   for(int j=0;j<n-i-1;j++)
   {
     if(a[j]>a[j+1])
     {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
     }
   }
  }
}

int main()
{
        int n,*a;
        cout<<"Enter size of the elements:";
        cin>>n;
        a=new int[n];
        cout<<"\nEnter elements:";
        for(int i=0;i<n;i++)
        {
         cin>>a[i];
        }
       float *f;
       f=new float[n];
       cout<<"\nEnter elements:";
       for(int i=0;i<n;i++)
       {
         cin>>f[i];
       }
       cout<<"\nBEFORE SORTING:\n";
       for(int i=0;i<n;i++)
       {
        cout<<a[i]<<" ";
       }
       Sort(a,n);
       cout<<"\nAFTER SORTING:\n";
       for(int i=0;i<n;i++) 
       {
        cout<<a[i]<<" ";
       }
       
       cout<<"\nBEFORE SORTING:\n";
       for(int i=0;i<n;i++)
       {
        cout<<f[i]<<" ";
       }
       Sort(f,n);
       cout<<"\nAFTER SORTING:\n";
       for(int i=0;i<n;i++)
       {
        cout<<f[i]<<" ";
       }

 }
