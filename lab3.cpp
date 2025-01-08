/*The distance between the Sun and the Earth is 1.496 <9e> 108 km and distance between the Earth and the Moon is 3.84 <9e> 108 m.
During solar eclipse the Moon comes in between the Earth and the Sun. Write a program to calculate the distance between the Moon and the Sun at that particular time?*/
#include <iostream>
using namespace std;
int main()
{
    // Distance between the Sun and the Earth in km
    double SE_km = 1.496e8;
    // Distance between the Earth and the Moon in km
    double EM_km = 3.84e5;
    // Calculate the distance between the Moon and the Sun during a solar eclipse
    double SM_km = SE_km - EM_km;
    cout << "Distance between the Moon and the Sun during a solar eclipse: " << SM_km << " km" << endl;
    return 0;
}
