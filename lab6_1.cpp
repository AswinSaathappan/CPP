/*Write a C++ program to declare a class with three data members. Declare overloaded
constructor with no arguments, one argument, two argument, and three arguments.
Pass values in the object declaration statement. Create four objects and pass values in
such a way that the entire four constructors are executed one by one. Write appropriate
messages in constructor and destructor so that execution of the program is understood.*/

#include<iostream>
using namespace std;
class Data
{
        int a,b,c;
        public:
        Data()
        :a(0),b(0),c(0)
        {
          cout<<"1.Constructor called\n";
        }
        Data(int a)
        :b(0),c(0)
        {
          cout<<"2.Constructor called\n";
          this->a=a;
        }
        Data(int a,int b)
        :c(0)
        {
          cout<<"3.Constructor called\n";
          this->a=a;
          this->b=b;
       }
       Data(int a,int b,int c)
       {
         this->a=a;
         this->b=b;
         this->c=c;
         cout<<"4.Constructor called\n";
       }
       void disp_Data()
       {
         cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
       }
       ~Data()
       {
         cout<<"\nDestructor called";
       }
};

int main(){
        cout<<"WITHOUT ARGUMENTS:\n";
        Data d1;
        d1.disp_Data();
        cout<<"ONE ARGUMENT:\n";
        Data d2(10);
        d2.disp_Data();
        cout<<"TWO ARGUMENTS:\n";
        Data d3(20,30);
        d3.disp_Data();
        cout<<"THREE ARGUMENTS:\n";
        Data d4(40,50,60);
        d4.disp_Data();
        }

