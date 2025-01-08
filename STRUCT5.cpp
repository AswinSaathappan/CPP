/*5. Write a structure to store the roll no., name, age (11 to 14) and address of students
(more than 10). Store the information of the students.
a. Write a function to print the names of all the students having age 14.
b. Write another function to print the names of all the students having even roll no.
c. Write another function to display the details of the student whose roll no is given
(i.e. roll no. entered by the user).*/

#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
#include<limits>

struct STUDENT
{
        int rollno;
        string name;
        int age;
        string address;

        void input_data()
        {
          cout<<"Enter roll no:20235035";
          cin>>rollno;
          cout<<"Name:";
          cin.ignore();
          getline(cin,name);
          cout<<"Age(11-14):";
          cin>>age;
          cout<<"Address:";
          cin.ignore();
          getline(cin,address);
          cout<<"\n";
        }

        void print_data()
        {
          cout<<"\nRoll no:20235035"<<rollno;
          cout<<"\nName:"<<name;
          cout<<"\nAge:"<<age;
          cout<<"\nAddress:"<<address;
        }
};

void Age14(STUDENT s[],int n);
void even_rollno(STUDENT s[],int n);
void display_details(STUDENT s[],int n,int rno);

int main(){
        int n,rno;
        cout<<"Enter no of students:";
        cin>>n;
        STUDENT *s=new STUDENT[n];//Dynamic memory allocation
        for(int i=0;i<n;i++)
        {
          s[i].input_data();
        }
        cout<<"\nStudents whose age are 14:\n";
        Age14(s,n);
        cout<<"\nStudents whose roll no are even:\n";
        even_rollno(s,n);
        cout<<"\nEnter the  roll number you wanna see:20235035";
        cin>>rno;
        //cin.ignore();
        display_details(s,n,rno);
        delete[] s;
}

void Age14(STUDENT s[],int n)
{
	int c=0;//not found
        for(int i=0;i<n;i++)
        {
          if(s[i].age==14)
          {
            cout<<s[i].name<<"\n";
            c=1;//student of age 14 found
          }
        }
        if(!c)
        {
            cout<<"No students of age 14 found\n";
        }
}

void even_rollno(STUDENT s[],int n)
{
    int c=0;//not found
        for(int i=0;i<n;i++)
        {
          if((s[i].rollno%2)==0)
          {
             c=1;//student with even number found
             cout<<s[i].name<<"\n";
          }
        }
        if(!c)
        {
            cout<<"No students with even roll number found\n";
        }
}

void display_details(STUDENT s[],int n,int rno)
{
 int c=0;
 for(int i=0;i<n;i++)
 {
  if(rno==s[i].rollno)
  {
   s[i].print_data();
   c=1;
  }
 }
 if(!c)
 {
  	cout<<"Data not found";  
}
  
}
