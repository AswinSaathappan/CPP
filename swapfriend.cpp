#include <iostream>

using namespace std;

class Number {
private:
    int num;

public:
    // Function to set the number
    void setNumber(int n) {
        num = n;
    }

    // Function to get the number
    int getNumber() {
        return num;
    }

    // Friend function declaration
    friend void swapNumbers(Number &num1, Number &num2);
    
    // Function to display the number
    void display() {
        cout << "Number: " << num << endl;
    }
};

// Friend function definition
void swapNumbers(Number &num1, Number &num2) {
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
}

int main() {
    // Create two Number objects
    Number num1, num2;

    // Set numbers for num1 and num2
    num1.setNumber(10);
    num2.setNumber(20);

    cout << "Before swapping:" << endl;
    num1.display();
    num2.display();

    // Swap numbers using friend function
    swapNumbers(num1, num2);

    cout << "After swapping:" << endl;
    num1.display();
    num2.display();

    return 0;
}

