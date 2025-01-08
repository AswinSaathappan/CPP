/*3. Write a program to create a structure salary,with the following information
Name  20 character
Department - 20 character
Basic_pay  float type
Allowance - float type
Using salary structure, declare an employee array with 5 elements and write a
program to read the information and calculate the gross pay (Basic pay +
Allowance) and display the output.*/

#include<iostream>
#include<limits>
#include<cstdio>
using namespace std;

struct salary
{
        char name[20];
        char department[20];
        float Basic_pay;
        float Allowance;

        void input_data()
        {
                cout<<"Enter employee name:";
                cin.ignore();
                cin.get(name,20);
                cout<<"Department:";
                cin.ignore();
                cin.get(department,20);
                cout<<"Basic pay:";
                cin>>Basic_pay;
                cout<<"Allowance:";
                cin>>Allowance;
                //cin.ignore();
        }

        float gross_salary()
        {
         float sum=Basic_pay+Allowance;
         return sum;
        }
}s[5];

int main(){
        for(int i=0;i<5;i++)
        {
          cout<<"\nDetails of employee "<<i+1<<endl;
          s[i].input_data();
        }
        cout<<"\n\nGROSS SALARY:\n";
        for(int i=0;i<5;i++)
        {
          cout<<"Gross salaray of employee "<<i+1<<" is "<<s[i].gross_salary()<<endl;
        }
}
