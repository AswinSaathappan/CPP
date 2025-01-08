/*9. Create a class student with data members roll number, name, address, total marks. Create
array of objects and display them. Write a C++ program to read and display the member
variable. Create a function called checkpass to check whether the student has been passed
or failed by passing total marls and passing marks. Have passing marks=50 as default argument.
Check the program with Default argument for first student and also change the
passing mark as 60 for second student during function call.*/

#include <iostream>
#include <limits>
using namespace std;

class student;
string pass_fail(student, int);

class student{
        int rollno;
        string name;
        string address;
        float totalmarks;

        public:
        void read_data()
        {
          cout<<"Enter rollno:";
          cin>>rollno;
          cout<<"Enter name:";
          cin.ignore();//(numeric_limits<streamsize>::max(), '\n');
          getline(cin,name);
          cout<<"Enter address:";
          getline(cin,address);
          cout<<"Enter Total marks:";
          cin>>totalmarks;
         }

         void display_data(int passMark = 50)
         {
          cout<<name<<"\t\t"<<rollno<<"\t\t"<<address<<"\t\t"<<totalmarks<<"\t\t"<<pass_fail(*this, passMark)<<"\n";
         }

         float get_totalmarks()
         {
          return totalmarks;
         }
};

string pass_fail(student s,int pass_mark)
{
  if(s.get_totalmarks()>=pass_mark)
  {
    return "pass";
  }
  else
  {
    return "fail";
  }
}

int main()
{
  int n, i;
  cout<<"Enter n:";
  cin>>n;
  student *s=new student[n];

  for(i=0;i<n;i++)
  {
   s[i].read_data();
  }

  cout<<"-------------------------------------------------------------------\n";
  cout<<"                       STUDENT INFORMATION       \n";
  cout<<"------------------------------------------------------------------\n";
  cout<<"NAME\t\t"<<"ROLLNO\t\t"<<"ADDRESS\t\t"<<"TOTAL MARKS\t"<<"PASS/FAIL"<<"\n";
  for(i=0;i<n;i++)
  {
   if (i == 1){
        s[i].display_data(60);
   } else {
        s[i].display_data();
   }
  }

   return 0;

  delete[] s;
}
