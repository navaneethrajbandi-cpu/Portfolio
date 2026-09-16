// Topic: Encapsulation (access specifiers)
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double startingBalance) {
        balance = startingBalance;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Withdrawal denied - insufficient funds" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(100);
    account.deposit(50);
    account.withdraw(30);

    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
