/*11. Write a C++ program to implement the following example.*/

#include<iostream>
using namespace std;

class PowerDevices
{
	protected:
		bool power;
	public:
		PowerDevices()
		:power(false)
		{
		}
		bool poweron()
		{
			power=true;
			return power;
		} 
		bool poweroff()
		{
			power=false;
			return power;
		}
};

class Scanner:virtual public PowerDevices//Virtual inheritance to avoid ambiguity in diamond class
{
	public:
		void scan()
		{
			if(power)
			{
				cout<<"Scanning document"<<endl;
			}
			else
			{
				cout<<"Scanner is turned off"<<endl;
			}
		}
};

class Printer:virtual public PowerDevices//Virtual inheritance to avoid ambiguity in diamond class
{
	public:
		void print()
		{
			if(power)
			{
				cout<<"Printing document"<<endl;
			}
			else
			{
				cout<<"Printer is turned off"<<endl;
			}
		}
};

class Copier:public Scanner,public Printer
{
	public:
		void copy()
		{
			if(power)
			{
				cout<<"Copying document"<<endl;
			}
			else
			{
				cout<<"Copier is turned off"<<endl;
			}
		}
};

int main()
{
	Copier c;
	
	cout<<"SCANNER"<<endl;
	//Turing on scanner
	c.poweron();
	c.scan();
	//Turing off scanner
	c.poweroff();
	c.scan();
	cout<<endl;
	
	cout<<"PRINTER"<<endl;
	//Turing on printer
	c.poweron();
	c.print();
	//Turing off printer
	c.poweroff();
	c.print();
	cout<<endl;
	
	cout<<"COPIER"<<endl;
	//Turing on copier
	c.poweron();
	c.copy();
	//Turing off copier
	c.poweroff();
	c.copy();
	
	return 0;
}
