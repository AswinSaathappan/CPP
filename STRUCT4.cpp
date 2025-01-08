/*4. Write a structure to store the names, hourly rate and number of hours worked by
employees in a company. Write a program to calculate the salary depending on the
following condition, pay the hourly rate for the hours up to 40 and 1.5 times the
hourly rate for all hours worked above 40 hours.Enter data for n employees and
Print the name of all the employees along with their final salaries.*/

#include<iostream>
using namespace std;

struct WAGES
{
        string name;
        int hourlyrate=2000;
        int hours;

        void input_data()
        {
          cout<<"Enter employee name:";
          cin>>name;
          cout<<"Enter working hours:";
          cin>>hours;
        }

        void dailywages()
        {
         int base_hours=min(hours,40); // Hours up to 40 are paid at regular rate
         int extra_hours=max(0,hours-40); // Hours above 40 are paid at 1.5 times the hourly rate
         int total_wages=base_hours*hourlyrate + extra_hours*hourlyrate * 1.5;
         cout << "Employee Name: " << name << "\t Salary: " << total_wages << endl;
        }
}; 

int main(){
        int n;
        cout<<"Enter no of employees:";
        cin>>n;
        WAGES *emp=new WAGES[n];
        for(int i=0;i<n;i++)
        {

          emp[i].input_data();
          cout<<"\n";
        }
        cout<<"\nEMPLOYEE SALARIES:\n";
        for(int i=0;i<n;i++)
        {
          emp[i].dailywages();
        }

}
