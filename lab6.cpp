//6. Write a program to multiply the given number by 8 without using * operator. (Hint: use Bitwise operator)
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter number:";
 cin>>n;
 cout<<"Number multiplied by 8:"<<(n<<3);
}
