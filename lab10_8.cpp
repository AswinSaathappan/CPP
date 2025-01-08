/*9. Define a class player data members are name and nationality. Derive the class event. It is data members
event type and [individual/ team] name of event. Define another derived class from player named
personnel, data members are other personal information. Write a function printing for all three classes
base class function is virtual function. By getting the choice we can either display event details or
personal details.*/

#include<iostream>
using namespace std;

class player
{
	protected:
		string name;
		string nationality;
    public:
    
    virtual void setdata()
    {
    	cout<<"Name:"; cin>>name;
    	cout<<"Nationality:"; cin>>nationality;
	}
	virtual void display()
    {
      cout<<"Name           :"<<name<<endl;
      cout<<"Nationality    :"<<nationality<<endl;
	}
};

class event:public player
{
	protected:
	string event_type;//"foot ball,tennis,etc"
	string team_type;//"Individual or team"
	
	public:
		
    void setdata()
    {
    	player::setdata();
    	cout<<"Team/Individual:"; cin>>team_type;
		cout<<"Event type:"; cin>>event_type;
	}
	void display()
	{
		player::display();
	    cout<<"Team/Individual:"<<team_type<<endl;
		cout<<"Game           :"<<event_type<<endl;
	}
};

class personnel:public player
{
	string dob;
	char gender;
	int age;	
	
	public:
		
	void setdata()
	{
		player::setdata();
		cout<<"DOB:"; cin>>dob;
		cout<<"Gender:"; cin>>gender;
		cout<<"Age:"; cin>>age;
	}	
	void display()
	{
		player::display();
		cout<<"Date of Birth  :"<<dob<<endl;
		cout<<"Gender         :"<<gender<<endl;
		cout<<"Age            :"<<age<<endl;
	}
};

int main()
{
	player *ptr;
	int ch;
	cout<<"1.Event details\n2.Personnel details\n";
	cout<<"Enter choice:";
	cin>>ch;
	if(ch==1)
	{
		event e;
		ptr=&e;
		ptr->setdata();
		cout<<"\nEVENT DETAILS:\n";
		ptr->display();
	}
	else if(ch==2)
	{
		personnel p;
		ptr=&p;
		ptr->setdata();
		cout<<"\nPERSONNEL DETAILS:\n";
		ptr->display();
	}
	else
	{
		cout<<"Invalid choice";
	}
	return 0;
}
