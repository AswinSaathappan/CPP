/*9. Write a program for nested namespace and test the same.*/

#include<iostream>
using namespace std;
namespace first
{
	void display()
	{
		cout<<"Insite first namespace"<<endl;;
	}

    namespace second
    {
	  void display()
	  {
		cout<<"Inside secomd namespace"<<endl;
	  }
    }
}
using namespace first::second;

int main()
{
	display();
	first::display();
	return 0;
}
