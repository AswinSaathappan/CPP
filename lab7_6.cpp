#include <iostream>
using namespace std;

class ClassA;//forward declaration

class ClassB {
private:
    int numB;

public:
    ClassB()
    : numB(20)
    {
    }

    int getNumA(ClassA& objectA);
};

class ClassA {
private:
    int numA;
    friend int ClassB::getNumA(ClassA&);

public:
    ClassA()
    : numA(10)
    {
    }
};

int ClassB::getNumA(ClassA& objectA) {
    return objectA.numA;
}

int main() {
    ClassA objA;
    ClassB objB;

    cout << "numA from ClassA: " << objB.getNumA(objA) << endl;

    return 0;
}
