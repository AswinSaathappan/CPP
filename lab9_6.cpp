/*6. Write a C++ program to define three classes X, Y and Z. Each class contains one character array as a data
member. Apply multiple inheritance. Concatenate strings of classes X and Y and store it in the class Z. Show all
the three Strings. Use necessary get and put methods.*/

#include<iostream>
#include<cstring>
using namespace std;

class X
{
	protected:
	 char ch[20];
	public:
	 void putfname()
	 {
	 	cout<<"Enter first name:";
	 	cin.get(ch,20);
	 	cin.ignore();
	 }
	 
	 char *getfname()
	 {
	 	return ch;
	 }	
};

class Y
{
	protected:
	 char CH[20];
	public:
	 void putlname()
	 {
	 	cout<<"\nEnter last name:";
	 	cin.get(CH,20);
	 }
	 
	 char *getlname()
	 {
	 	return CH;
	 }
};

class Z:public X,public Y
{
	protected:
	 char Name[50];
	public:
	  void fullName()
      {
        strcpy(Name,ch);
		strcat(Name," ");
		strcat(Name,CH);    	
      } 
      char *getfullName()
      {
      	return Name;
	  }
};

int main()
{
	Z myname;
	myname.putfname();
	myname.putlname();
	myname.fullName();
	cout<<"\nFirst name:"<<myname.getfname()<<endl;
	cout<<"\nLast name:"<<myname.getlname()<<endl;
	cout<<"\nFull name:"<<myname.getfullName();
    return 0;
}

