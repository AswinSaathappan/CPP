#include<iostream>
#include<string>
using namespace std;

int main() {
    int prod = 1;
    string num;

    cout << "Enter numbers, press # to stop:";

    do {
        cout << "Enter num:";
        cin >> num;

        if (num != "#") {
            int n;
            try {
                n = stoi(num);
                prod *= n;
            } catch (invalid_argument&) {
                // Do nothing for invalid input
            }
        }
    } while (num != "#");

    cout << "Product: " << prod;
    return 0;
}