#include <iostream>

using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass() : value(0) {}
    MyClass(int v) : value(v) {}

    friend  MyClass operator*(int scalar,MyClass &obj){
        return MyClass(obj.value * scalar);
    }

    void setValue(int v) {
        value = v;
    }

    int getValue()  {
        return value;
    }
};

int main() {
    MyClass A, B(5);

    cout << "Initial values:\n";
    cout << "A: " << A.getValue() << endl;
    cout << "B: " << B.getValue() << endl;

    A = 3 * B;

    cout << "\nAfter evaluating A = 3 x B:\n";
    cout << "A: " << A.getValue() << endl;
    cout << "B: " << B.getValue() << endl;

    return 0;
}

