#include <iostream>
#include <string>

using namespace std;

int main() {
    string product_code;
    cout << "Enter the product code: ";
    getline(cin, product_code);

    bool verified = false;

    //part a
    for (int i = 0; i < product_code.length(); ++i) {
        if (product_code[i] == 'Z') {
            verified = true;
        } else if (product_code[i] == '9' && verified) {
            verified = true;
            break;
        }
    }

    cout << (verified ? "Verified" : "Failed") << endl;

    //part b
    int l = product_code.length();
    if (l >= 3)
    {
        cout << "Last three characters: ";
        cout << product_code[l - 3];
        cout << product_code[l - 2];
        cout << product_code[l - 1] << endl;
    }
    else
    {
        cout << "Product code is too short." << endl;
    }

    return 0;
}
