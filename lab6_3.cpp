#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double len = 0.0, double brd = 0.0)
        : length(len), breadth(brd)
    {
    }

    void calculateAreaDefault()
    {
        cout << "Area: " << length * breadth << endl;
    }

    void calculateArea(double len, double brd)
    {
        cout << "Area: " << len * brd << endl;
    }

    double getLength() {
        return length;
    }

    double getBreadth() {
        return breadth;
    }

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle rect1;
    cout << "Object 1 (Default Values):" << endl;
    rect1.display();
    rect1.calculateAreaDefault();Rectangle rect2(5.0,3.0);
    cout << "\nObject 2 (New Values):" << endl;
    rect2.display();
    rect2.calculateArea(rect2.getLength(), rect2.getBreadth());
    return 0;
}
