#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 50;
    int A[size];
    int B[size];  // Assuming all values in A are in the range 100 to 200

    // Seed for random number generation
    srand(time(NULL));

    // Randomly store 50 numbers in the range 100 to 500 in array A
    cout << "Array A:" << endl;
    for (int i = 0; i < size; ++i) {
        A[i] = rand() % 401 + 100;  // Numbers in the range 100 to 500
        cout << A[i] << ' ';
    }
    cout << endl;

    // Copy values in the range 100 to 200 from array A to array B
    int countB = 0;
    cout << "Array B (values in the range 100 to 200 from A):" << endl;
    for (int i = 0; i < size; ++i) {
        if (A[i] >= 100 && A[i] <= 200) {
            B[countB] = A[i];
            cout << B[countB] << ' ';
            countB++;
        }
    }
    cout << endl;

    return 0;
}
