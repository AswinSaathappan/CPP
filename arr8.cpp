#include <iostream>

using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    int firstSpace = fullName.find(' ');
    int lastSpace = fullName.rfind(' ');

    string firstName = fullName.substr(0, firstSpace);
    string middleName = (firstSpace != lastSpace) ? fullName.substr(firstSpace + 1, lastSpace - firstSpace - 1) : "";
    string lastName = fullName.substr(lastSpace + 1);

    cout << "Abbreviation: " << firstName[0] << "." << (middleName.empty() ? "" : middleName.substr(0, 1) + '.') << lastName << endl;

    return 0;
}

