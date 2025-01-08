#include<iostream>
using namespace std;
class num{
    friend void add(num& N);
    int NUM;
    public:
    num()
    :NUM(5)
    {
    }
    void show()
    {
      cout<<"Value of num is:"<<NUM;    
    }
};
void add(num& n)
{
    n.NUM+=5;
    cout<<"Inside add:"<<n.NUM<<endl;
}

int main()
{
    num n1;
    add(n1);
    n1.show();
}

