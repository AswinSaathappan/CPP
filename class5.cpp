/*5. Create a 'DISTANCE' class with :
- feet and inches as data members
- member function to input distance
- member function to output distance
- member function to add two distance objects
Write a main function to create objects of DISTANCE class. Input two distances and
output the sum*/

#include <iostream>
using namespace std;

class DISTANCE {
private:
    int feet;
    float inches;

public:

    void input_distance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void output_distance() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    void add_distances(DISTANCE dist1,DISTANCE dist2) {
    feet = dist1.feet + dist2.feet;
    inches = dist1.inches + dist2.inches;
    if (inches >= 12.0) {
        feet += static_cast<int>(inches / 12.0);
        inches = static_cast<int>(inches) % 12;
    }
}

};

int main() {
    DISTANCE distance1, distance2, distance_sum;
    cout << "Enter details for first distance:" << endl;
    distance1.input_distance();
    cout << "\nEnter details for second distance:" << endl;
    distance2.input_distance();
    distance_sum.add_distances(distance1, distance2);
    cout << "\nSum of the distances:" << endl;
    distance_sum.output_distance();
    return 0;
}
