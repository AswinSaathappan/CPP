/*7. C++ program to create a class Two which has two integers as its members. Write
an inline function to find the biggest out of the two integer values*/

#include<iostream>
using namespace std;

class Two
{
        int n1,n2;

        public:

        void read_data()
        {
         cout<<"Enter number1:";
         cin>>n1;
         cout<<"Enter number2:";
         cin>>n2;
        }

         inline int max()
         {
          int max=(n1>n2)?n1:n2;
          return max;
         }

         int get_n1()
         {
          return n1;
         }

         int get_n2()
         {
          return n2;
         }
};

int main(){
        Two num;
        num.read_data();
        cout<<"Maximum of "<<num.get_n1()<<" and "<<num.get_n2()<<" is "<<num.max();
}
