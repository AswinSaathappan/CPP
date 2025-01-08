/*2.Create a class Number with three private members. Overload - operator to negate objects
of Number class.*/

#include<iostream>
using namespace std;
class Number{
        int n1;
        int n2;
        int n3;

        public:
        Number(int num1,int num2,int num3)
        :n1(num1),n2(num2),n3(num3)
        {
        }
        void show()
        {
         cout<<"n1:"<<n1<<"\nn2:"<<n2<<"\nn3:"<<n3<<endl;
        }
        void operator - ()
        {
          n1=-n1;
          n2=-n2;
          n3=-n3;
        }
};

int main(){
        Number n(2,5,8);
        n.show();
        -n;
        n.show();
        return 0;
}
