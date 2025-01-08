#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Rational {
private:
    int numerator;
    int denominator;

public:
    Rational(int num = 0, int denom = 1) {
        int divisor = gcd(num, denom);
        numerator = num / divisor;
        denominator = denom / divisor;
    }

    Rational add(Rational other) {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }

    Rational subtract(Rational other) {
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }

    Rational multiply(Rational other) {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }
    Rational divide(Rational other) {
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Rational(newNumerator, newDenominator);
    }

    void print() {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    Rational r1(2, 4);
    Rational r2(3, 6);

    cout << "r1 = ";
    r1.print();
    cout << endl;

    cout << "r2 = ";
    r2.print();
    cout << endl;

    cout << "Addition: ";
    r1.add(r2).print();
    cout << endl;

    cout << "Subtraction: ";
    r1.subtract(r2).print();
    cout << endl;

    cout << "Multiplication: ";
    r1.multiply(r2).print();
    cout << endl;

    cout << "Division: ";
    r1.divide(r2).print();
    cout << endl;

    return 0;
}
