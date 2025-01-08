/*1. Create a structure called "Student" with members name, age, and total marks. Write a
C++ program to input data for two students, display their information, and find the
average of total marks.*/

#include<iostream>
using namespace std;

struct Student
{
        string members;
        int age;
        float totalmarks;

        void input_data()
        {
         cout<<"Enter student name:";
         cin>>members;
         cout<<"Age:";
         cin>>age;
         cout<<"Total marks:";
         cin>>totalmarks;
        }

        void print_data()
        {
        cout<<members<<"\t"<<age<<"\t"<<totalmarks<<"\n";
        }

        float average(Student s1,Student s2)
        {
          float avg;
          avg=(s1.totalmarks+s2.totalmarks)/2.0;
          return avg;
        }
};

int main()
{
        Student s1,s2,avg;
        s1.input_data();
        s2.input_data();
        cout<<"\n------------------------------------\n";
        cout<<"      STUDENT INFORMATION           \n";
        cout<<"------------------------------------\n";
        cout<<"NAME\t"<<"AGE\t"<<"MARKS\n";
        s1.print_data();
        s2.print_data();
        cout<<"Average of two students:";
        float AVG=avg.average(s1,s2);
        cout<<AVG;

}
