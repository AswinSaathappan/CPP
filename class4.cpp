#include<iostream>
using namespace std;

class NUM
{
        int n1,n2;

        public:
        void read_num()
        {
         cout<<"Enter num1:";
         cin>>n1;
         cout<<"Enter num2:";
         cin>>n2;
        }

        void diff_num(NUM num)
        {
          int diff=num.n1-num.n2;
          cout<<"Differnce between two numbers:"<<diff;
        }
};

int main()
{
        NUM num;
        num.read_num();
        num.diff_num(num);
}