//7.Write a program to check whether the given program is even or odd using bitwise operator(&)
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
//Even or odd using bitwise operator(&)
    if (n & 1) {
        cout << "Num " << n << " is odd" ;
    } else {
        cout << "Num " << n << " is even";
    }

    return 0;
}
