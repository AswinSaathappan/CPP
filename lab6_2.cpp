/*2.C++ program to declare a person class with few private data members. Accept
data through constructor and pass an object to constructor and carry out copy constructor.
Display contents of both the objects.*/

#include<iostream>
#include<cstring>
using namespace std;
class Person
{
        string name;
        int age;
        string gender;

        public:
        Person()
        {
          cout<<"Enter name:";
          //cin.ignore();
          getline(cin,name);
          cout<<"Enter Gender:";
         // cin.ignore();
          getline(cin,gender);
          cout<<"Age:";
          cin>>age;
         }
        Person(Person &p)
        {
          name=p.name;
          gender=p.gender;
          age=p.age;
        }
        void disp()
        {
          cout<<"Name:"<<name<<" Gender:"<<gender<<" Age:"<<age<<endl;
        }
};

int main(){
         Person p1;
         p1.disp();
         Person p2(p1);
         p2.disp();
     }
