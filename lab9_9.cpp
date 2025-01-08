/*9. Declare a class of Vehicle. Derived classes are two-wheeler, three-wheeler and four- wheeler. Display the
properties of each type of vehicle using member functions of classes.*/
#include<iostream>
using namespace std;
class Vehicle
{
    protected:
        int price;
        string fuel;
    public:
        void setprice(int price)
        {
          this->price=price;
        }
        void setfuel(string fuel)
        {
          this->fuel=fuel;
        }
};

class Twowheeler:public Vehicle
{
    public:
    void display()
    {
        cout<<"Price:"<<price<<endl;
        if(fuel==" ")
        {
            cout<<"It is a bicycle"<<endl;
            cout<<"Fuel:"<<" No fuel required"<<endl;
        }
        else if(fuel=="Electricity"||fuel=="electricity")
        {
            cout<<"It is an electric vehicle"<<endl;
            cout<<"Fuel:"<<fuel<<endl;
        }
        else
        {
            cout<<"Fuel: "<<fuel<<endl;
        }
    }
};

class Threewheeler:public Vehicle
{
    public:
    void display()
    {
        cout<<"Price:"<<price<<endl;
        if(fuel==" ")
        {
            cout<<"It is a tricycle"<<endl;
            cout<<"Fuel:"<<" No fuel required"<<endl;
        }
        else if(fuel=="Electricity"||fuel=="electricity")
        {
            cout<<"It is an electric vehicle"<<endl;
            cout<<"Fuel: "<<fuel<<endl;
        }
        else
        {
            cout<<"Fuel:"<<fuel<<endl;
        }
    }
};

class Fourwheeler:public Vehicle
{
    public:
    void display()
    {
        cout<<"Price:"<<price<<endl;
        if(fuel=="Electricity"||fuel=="electricity")
        {
            cout<<"It is an electric vehicle"<<endl;
            cout<<"Fuel: "<<fuel<<endl;
        }
        else
        {
          cout<<"Fuel:"<<fuel<<endl;
        }
    }
};

int main()
{
    Twowheeler t;
    t.setprice(5000);
    t.setfuel(" ");
    t.Twowheeler::display();
    cout<<endl;

    t.setprice(60000);
    t.setfuel("Diesel");
    t.display();
    cout<<endl;
    
    t.setprice(55000);
    t.setfuel("electricity");
    t.Twowheeler::display();
    cout<<endl;

    Threewheeler T;
    T.setprice(500000);
    T.setfuel(" ");
    T.Threewheeler::display();
    cout<<endl;

    T.setprice(120000);
    T.setfuel("Petrol");
    T.Threewheeler::display();
    cout<<endl;
    
    T.setprice(150000);
    T.setfuel("Electricity");
    T.Threewheeler::display();
    cout<<endl;


    Fourwheeler f;
    f.setprice(300000);
    f.setfuel("Electricity");
    f.Fourwheeler::display();
    cout<<endl;

    f.setprice(400000);
    f.setfuel("Petrol");
    f.Fourwheeler::display();
    cout<<endl;

    return 0;
}

    

