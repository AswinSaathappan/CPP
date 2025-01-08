#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // static variable to count objects

public:
    Counter() {
        cout << "\nConstructor called ";
        count++; // increment count each time an object is created
        cout << count;
    }

    ~Counter() {
        cout<<"\nDestructor called ";
        count--; // decrement count each time an object is destroyed
        cout<<count+1;
}

    static int getCount() {
        return count; // return the current count of objects
    }
};

int Counter::count = 0; // initialize static variable

int main() {
   // Creating objects
    Counter obj1;
    Counter obj2;
    Counter obj3;
    cout << "\n\nNumber of objects: " << Counter::getCount() << endl;
    // Destroying objects
    // The count will automatically decrease when the objects go out of scope
    return 0;
}
