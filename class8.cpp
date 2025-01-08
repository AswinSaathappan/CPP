/*8. Write a C++ program to create a class Number which has an integer as its member. Write
two inline functions to find the square and cube of the integer respectively.*/

#include<iostream>
#include<cmath>
using namespace std;

class Number{
        int n;

        public:
        void read_data()
        {
         cout<<"Enter number:";
         cin>>n;
        }

        int get_n()
        {
          return n;
        }

        inline int square()
        {
          int sqr=pow(n,2);
          return sqr;
        }

        inline int Cube()
        {
          int cube=pow(n,3);
          return cube;
        }
};

int main(){
        Number n1;
        n1.read_data();
        cout<<"Square of "<<n1.get_n()<<" is "<<n1.square();
        cout<<"\nCube of "<<n1.get_n()<<" is "<<n1.Cube();
}
