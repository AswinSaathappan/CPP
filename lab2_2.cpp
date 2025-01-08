/*2.Create a class Number with one integer variable as private member. Overload ++ and --
operators' to increment and decrement objects of Number class respectively as both
prefix and suffix notation*/

#include<iostream>
using namespace std;
class Number
{
        int n;

        public:

        Number(int num)
        :n(num)
        {
        }
        void operator ++()
        {
          n++;
        }
        void operator ++(int)
        {
          ++n;
        }
        void operator --()
        {
          n--;
        }
        void operator --(int)
        {
          --n;
        }
        void show()
        {
           cout<<"\nn:"<<n;
        }
};

int main(){
        Number n1(5);
        cout<<"Post increment:";
        n1++;
        n1.show();cout<<"\nPre increment:";
        ++n1;
        n1.show();
        cout<<"\nPre decrement:";
        n1--;
        n1.show();
        cout<<"\nPost decrement:";
        --n1;
        n1.show();
        return 0;
}





