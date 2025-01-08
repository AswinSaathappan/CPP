#include <iostream>

using namespace std;

int main() {
    int VAL[50];

    for (int i = 0; i < 25; ++i) {
        VAL[i] = i * i;   // Square of the index variable for the first 25 components
        VAL[i + 25] = 3 * (i+25);   // Three times the index variable for the last 25 components
    }

    // Output using traditional for loop
    cout << "Using traditional for loop:" << endl;
    for (int i = 0; i < 50; ++i) {
        cout << VAL[i] << ' ';
        if ((i + 1) % 10 == 0)  // Print 10 elements per line
            cout << endl;
    }

     // Output using range-based for loop
    /*cout << "\nUsing range-based for loop:" << endl;
    int count = 0;
    for (int value : VAL) {
        cout << value << ' ';
          if ((++count) % 10 == 0)  // Print 10 elements per line
              cout << endl;
    }*/

    return 0;
}
