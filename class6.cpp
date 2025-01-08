/*6. Write the definition for a class called complex that has floating point data members for
storing real and imaginary parts. The class has the following member functions:
void set(float, float) to set the specified value in object
void disp() to display complex number object
Implement the following overloading functions ADD that return a COMPLEX number.
complex ADD (a, s2) - where a is an integer (real part) and s2 is a complex number.
complex ADD (s1, s2)-where s1 & s2 are complex numbers.
complex ADD(complex) to sum two complex numbers & return complex number*/

#include <iostream>
using namespace std;

class complex {
private:
    float real;
    float imag;

public:
    void set(float r, float i);
    void disp() const;
    friend complex ADD(int a, complex s2);
    friend complex ADD(complex s1, complex s2);
    complex ADD(complex s); // Declaration of member function

};

void complex::set(float r, float i) {
    real = r;
    imag = i;
}

void complex::disp() const {
    cout << real << "+" << imag << "i" << endl;
}

complex ADD(int a, complex s2) {
    complex sum;
    sum.real = a + s2.real;
    sum.imag = s2.imag;
    return sum;
}

complex ADD(complex s1, complex s2) {
    complex sum;
    sum.real = s1.real + s2.real;
    sum.imag = s1.imag + s2.imag;
    return sum;
}

complex complex::ADD(complex s) { // Definition of the member function
    complex sum;
    sum.real = real + s.real;
    sum.imag = imag + s.imag;
    return sum;
}

int main() {
    complex s1, s2, s3;
    float r, i;
    int a;

    cout << "Enter real part of s1: ";
    cin >> r;
    cout << "Enter imaginary part of s1: ";
    cin >> i;
    s1.set(r, i);
    s1.disp();

    cout << "Enter real part of s2: ";
    cin >> r;
    cout << "Enter imaginary part of s2: ";
    cin >> i;
    s2.set(r, i);
    s2.disp();

    cout << "Enter an integer a for addition: ";
    cin >> a;
    s3 = ADD(a, s2);
    cout << "Sum of a with s2 using integer addition: ";
    s3.disp();

    s3 = ADD(s1, s2);
    cout << "Sum of s1 and s2 using two complex numbers: ";
    s3.disp();

    // Adding s1 and s (complex number)
    cout << "Enter real part of s: ";
    cin >> r;
    cout << "Enter imaginary part of s: ";
    cin >> i;
    complex s; // Declare a new complex object
    s.set(r, i); // Set its real and imaginary parts
    s3 = s1.ADD(s); // Call the ADD(complex s) member function
    cout << "Sum of s1 and s (complex number): ";
    s3.disp();
}

