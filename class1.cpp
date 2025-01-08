/*1. Define a class student with the following specification
Private members of class student
Admno             integer
Sname             20 character
Eng, Math,Science float
Total             float
Public member function of class student
Takedata() Function to accept values for Admno, Sname, Eng,Science
Ctotal() Function to calculate Eng + Math + Science and store the result in Total.
Showdata() Function to display all the data members on the screen.
Write a main function to create objects of class student and invoke all the public member
functions.*/

#include<iostream>
using namespace std;

class Student
{
        int Admno;
        char Sname[20];
        float Eng,Math,Science;
        float Total;

        public:
        void Takedata()
        {
         cout<<"Enter Admin no:";
         cin>>Admno;
         cout<<"Enter Student name:";
         cin.ignore();
         cin.get(Sname,20);
         cout<<"Enter english marks:";
         cin>>Eng;
         cout<<"Enter Science marks:";
         cin>>Science;
         cout<<"Enter Maths marks:";
         cin>>Math;
        }
        float ctotal()
        {
         float total;
         total=Eng+Science+Math;
         return total;
}
        void showdata()
        {
          cout<<Sname<<"\t\t"<<Eng<<"\t"<<Science<<"\t"<<Math<<"\n";
        }
};
int main(){
        Student s1,s2;
        s1.Takedata();
        s2.Takedata();
        cout<<"\nTotal marks:";
        cout<<"\nTotal marks of s1:"<<s1.ctotal();
        cout<<"\nTotal marks of s2:"<<s2.ctotal();
        cout<<"\n------------------------------------\n";
        cout<<"      STUDENT INFORMATION           \n";
        cout<<"------------------------------------\n";
        cout<<"NAME\t\t"<<"ENG\t"<<"SCIENCE\t"<<"MATH\t"<<"\n";
        s1.showdata();
        s2.showdata();
}