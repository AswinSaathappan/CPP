#include<iostream>
using namespace std;

class AIRLINES
{
        int Flightnumber;
        string Destination;
        float Distance;
        float Fuel;
        float CALFUEL()
        {
          if(Distance<=1000)
            Fuel=500;
          else if(Distance>1000 && Distance<=2000)
           Fuel=1100;
          else
           Fuel=2200;

          return Fuel;
        }

        public:
        void FEEDINFO()
        {
         cout<<"Enter flight number:";
         cin>>Flightnumber;
         cout<<"Destination:";
         cin>>Destination;
         cout<<"Distance:";
         cin>>Distance;
         cout<<"Quantity of fuel:"<<CALFUEL();
        }

        void SHOWINFO()
        {
          cout<<"FLIGHT NUMBER:"<<Flightnumber<<endl;
          cout<<"DESTINATION  :"<<Destination<<endl;
          cout<<"DISTANCE     :"<<Distance<<endl;
          cout<<"FUEL QUANTITY:"<<CALFUEL()<<endl<<endl;
        }
};

int main(){
        AIRLINES a1;
        a1.FEEDINFO();
        cout<<"\n-------------------------\n";
        cout<<"    AIRLINE  INFORMATION   \n";
        cout<<"--------------------------\n";
        a1.SHOWINFO();
}