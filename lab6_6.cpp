#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string firstName;
    string lastName;
    float monthlySalary;

public:
    Employee(string fName, string lName, float salary) {
        firstName = fName;
        lastName = lName;
        monthlySalary = (salary > 0) ? salary : 0;
    }

    void setFirstName(string fName) {
        firstName = fName;
    }

    string getFirstName() {
        return firstName;
    }

    void setLastName(string lName) {
        lastName = lName;
    }

    string getLastName() {
        return lastName;
    }

    void setMonthlySalary(float salary) {
        monthlySalary = (salary > 0) ? salary : 0;
    }

    float getMonthlySalary() {
        return monthlySalary;
    }
float calculateYearlySalary() {
        return monthlySalary * 12;
    }

    void giveRaise() {
        monthlySalary *= 1.1;
    }
};

int main() {
    Employee emp1("Alexa", "Google", 50000);
    Employee emp2("Siri", "Apple", 60000);

    cout << "Yearly salary for " << emp1.getFirstName() << " " << emp1.getLastName() << ": Rs. " << emp1.calculateYearlySalary() << endl;
    cout << "Yearly salary for " << emp2.getFirstName() << " " << emp2.getLastName() << ": Rs. " << emp2.calculateYearlySalary() << endl;

    emp1.giveRaise();
    emp2.giveRaise();

    cout << "\nAfter 10% raise:" << endl;
    cout << "Yearly salary for " << emp1.getFirstName() << " " << emp1.getLastName() << ": Rs. " << emp1.calculateYearlySalary() << endl;
    cout << "Yearly salary for " << emp2.getFirstName() << " " << emp2.getLastName() << ": Rs. " << emp2.calculateYearlySalary() << endl;

    return 0;
}

