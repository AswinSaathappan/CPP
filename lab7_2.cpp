/*2. Create a SavingsAccount class. Use a static data member annualInterestRate to store the
annual interest rate for each of the savers. Each member of the class contains a private
data member savingsBalance indicating the amount the saver currently has on
deposit. Provide member function calculateMonthlyInterest that calculates the monthly
interest by multiplying the savingsBalance by annualInterestRate divided by 12; this
interest should be added to savingsBalance. Provide a static member function
modifyInterestRate that sets the static annualInterestRate to a new value. Write a driver
program to test class SavingsAccount. Instantiate two different objects of class
SavingsAccount, saver1 and saver2, with balances of $2000.00 and $3000.00,
respectively. Set the annualInterestRate to 3 percent. Then calculate the monthly interest
and print the new balances for each of the savers. Then set the annualInterestRate
to 4 percent, calculate the next months interest and print the new balances for each of the
savers.*/

#include <iostream>

class SavingsAccount;
//void calculateInterest(SavingsAccount &);
class SavingsAccount {
private:
    static double interestRate;
    double balance;
    friend void calculateInterest(SavingsAccount &);

public:
    SavingsAccount(double initialBalance)
    : balance(initialBalance)
    {
    }


    static void setInterestRate(double newRate) {
        interestRate=newRate;
    }

    double getBalance() {
        return balance;
    }
};void calculateInterest(SavingsAccount &obj) {
        double monthlyInterest = (obj.balance * obj.interestRate) / 12.0;
        obj.balance+=monthlyInterest;
}

double SavingsAccount::interestRate = 0.0; // Initialize static member

int main() {

    using namespace std;

    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::setInterestRate(0.03); // Set annual interest rate to 3%

    cout<<"Initial balances:\n";
    cout<<"Saver1: $"<<saver1.getBalance()<<endl;
    cout<<"Saver2: $"<<saver2.getBalance()<<endl;

    calculateInterest(saver1);
    calculateInterest(saver2);

    cout<<"\nBalances after one month with 3% interest:\n";
    cout<<"Saver1: $"<<saver1.getBalance()<<endl;
    cout<<"Saver2: $"<<saver2.getBalance()<<endl;

    SavingsAccount::setInterestRate(0.04); // Set annual interest rate to 4%

    calculateInterest(saver1);
    calculateInterest(saver2);

    cout<<"\nBalances after another month with 4% interest:\n";
    cout<<"Saver1: $"<< saver1.getBalance()<<endl;
    cout<<"Saver2: $"<< saver2.getBalance()<<endl;

    return 0;
}
