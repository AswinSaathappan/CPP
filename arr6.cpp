#include <iostream>
#include <cctype> // for toupper

using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str,100);

    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }

    cout << "String in uppercase: " << str << endl;

    return 0;
}
