#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;

    void input_data() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }
// Function to add two times
    Time unformattedsum(Time t) {
        Time ufsum;
        ufsum.seconds = seconds + t.seconds;
        ufsum.minutes = minutes + t.minutes + ufsum.seconds / 60;
        ufsum.hours = hours + t.hours + ufsum.minutes / 60;
        return ufsum;
}
   
    Time formattedsum(Time ufsum)
    {
        ufsum.hours %= 24;// Ensure hours are within 24-hour range
        ufsum.seconds %= 60;// Ensure minutes are within 60-minute range
        ufsum.minutes %= 60;// Ensure seconds are within 60-second range
        return ufsum;
    }

    void print_data() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time time1, time2, ufsum,fsum;
    cout << "Enter the first time:" << endl;
    time1.input_data();
    cout << "Enter the second time:" << endl;
    time2.input_data();
    ufsum = time1.unformattedsum(time2);
    cout << "Time in formatted version:" << endl;
    ufsum.print_data();
    fsum = ufsum.formattedsum(ufsum);
    cout << "Time in formatted version:" << endl;
    fsum.print_data();
     return 0;
}
