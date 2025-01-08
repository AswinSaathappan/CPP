/*10. Given that an EMPLOYEE class contains following members: Data members:
Employee number, Employee name, Basic, DA, IT, Net Salary and number of
dependents . Write a C++ program to read the data of N employee and compute Net
salary of each employee (DA=52% of Basic and Income Tax(IT) =30% of the gross
salary) and display information about employees. Also display employee with more than
2 dependents Note: Net salary=Basic + DA - IT*/

#include<iostream>
using namespace std;

class EMPLOYEE{
        string name;
        int empno;
        float Basic,DA,IT,dependents,NetSalary;

       public:
        void read_data()
        {
         cout<<"Employee name:";
         cin.ignore();
         getline(cin,name);
         cout<<"Employee number:";
         cin>>empno;
         cout<<"Enter basic:";
         cin>>Basic;
         cout<<"Enter DA:";
         cin>>DA;
         cout<<"Enter IT:";
         cin>>IT;
         cout<<"No.Of dependents:";
         cin>>dependents;
        }

        float get_dependents()
        {
         return dependents;
        }

        void salary()
        {
         DA=(52.0/100)*Basic;
         float GS=Basic+DA;
         IT=(30.0/100)*GS;
         NetSalary=Basic+DA-IT;
       }

       void display_data()
       {
        cout << "Employee Number: "<<empno<<endl;
        cout << "Employee Name: "<<name<<endl;
        cout<<"Basic Salary: "<<Basic<<endl;
        cout<<"Net Salary: "<<NetSalary<<endl;
        cout << "Number of Dependents: "<<dependents<<endl;
        cout << endl;
       }

        bool more_dependents()
        {
         return dependents > 2;
        }
};

int main() {
    int N;
    cout<<"Enter the number of employees: ";
    cin>>N;

    EMPLOYEE *employees = new EMPLOYEE[N];

    for (int i=0;i<N;i++)
    {
        cout<<"\nEnter details for employee "<< i + 1<<":"<<endl;
        employees[i].read_data();
        employees[i].salary();
    }

    cout << "\nEmployee Information:" << endl;
    for (int i = 0; i < N; i++) {
        employees[i].display_data();
    }

    cout << "\nEmployees with more than 2 dependents:" << endl;
    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (employees[i].more_dependents())
        {
           employees[i].display_data();
            found = true;
        }
    }
    if (!found)
    {
        cout << "No employees with more than 2 dependents found." << endl;
    }

    delete[] employees;
    return 0;
}
