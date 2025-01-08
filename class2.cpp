/*2. Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula batavg =runs/(innings-notout)
calcAvg() Function to compute batavg
Public members:
readData()  Function to accept value from bcode, name, innings, notout and invoke the
function calcAvg()
displayData()  Function to display the data members on the screen.
Write a main function to create objects of class batsman and invoke all the public
member functions.*/

#include<iostream>
using namespace std;

class batsman
{
        int bcode;
        char bname[20];
        int innings,notout,runs;
        float batavg;
        float calcAvg()
        {
         batavg=runs/(innings-notout);
         return batavg;
        }

        public:
        void read_data()
        {
          cout<<"Enter bcode:";
          cin>>bcode;
          cout<<"Batsman name:";
          cin.ignore();
          cin.get(bname,20);
          cout<<"Innimgs:";
          cin>>innings;
          cout<<"Notout:";
          cin>>notout;
          cout<<"Runs:";
          cin>>runs;
          cout<<"Average:"<<calcAvg();
        }

        void display_data()
        {
         cout<<"BATSMAN NAME:"<<bname<<endl;
         cout<<"BCODE       :"<<bcode<<endl;
         cout<<"INNINGS     :"<<innings<<endl;
         cout<<"NOTOUT      :"<<notout<<endl;
         cout<<"RUNS        :"<<runs<<endl<<endl;
        }

};

int main(){
        batsman b1;
        b1.read_data();
        cout<<"\n-------------------------\n";
        cout<<"       INFORMATION         \n";
        cout<<"--------------------------\n";
        b1.display_data();
}
