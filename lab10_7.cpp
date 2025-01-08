/*8. Consider the following class definition
class father
{
protected:
int age;
public:
father(int x)
{
age=x;
}
virtual void iam()
{
cout<<”I AM THE FATHER, my age is”<<age<<endl;
}
};
Derive the two classes son and daughter from the above class and for each, define iam() to write out
similar bur appropriate messages. You should also define suitable constructors for these classes. Now
write a main() that creates objects of the three classes and then calls iam() for them. Declare pointer to
father. Successively, assign address of objects of the two derived classes to this pointer and in each case,
call iam() through the pointer to demonstrate polymorphism in action.#include<iostream>
using namespace std;*/
#include<iostream>
using namespace std;

class father
{
  protected:
  int age; 
  public:
  father(int x)
  {
    age=x;
  }
  virtual void iam()
  {
   cout<<"I AM THE FATHER, my age is"<<age<<endl;
  }
};

class son:public father
{
  public:
  	son(int a)
  	:father(a)
  	{ }
  	void iam()
  	{
  	  cout<<"I AM THE SON, my age is "<<age<<endl;
	}
};

class daughter:public father
{
  public:
    daughter(int a)
	:father(a)
	{ }
	void iam()
	{
	  cout<<"I AM THE DAUGHTER, my age is "<<age<<endl;	
	}	
};

int main()
{
	father *fptr,f(25);
	fptr=&f;
	fptr->iam();
	
	son s(18);
	fptr=&s;
	fptr->iam();
	
	daughter d(20);
	fptr=&d;
	fptr->iam();
}

 
