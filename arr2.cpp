#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of 'n': ";
    cin >> n;
   // Dynamically allocate memory for 'n' numbers
    int* numbers = new int[n];

    int sum = 0;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> *(numbers + i);
        sum += *(numbers + i);
    }

    cout << "Sum of the numbers: " << sum << endl;

    cout << "Numbers in reverse order:" << endl;
    for (int i = n - 1; i >= 0; --i) {
        cout << *(numbers + i) << ' ';
    }
    cout << endl;
    // Deallocate the dynamically allocated memory
    delete[] numbers;

    return 0;
}
