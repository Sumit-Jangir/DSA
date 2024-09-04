// Create a class BankAccount with data members: accountNumber, balance, and accountHolderName. Provide a method to deposit and withdraw money

#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    long accountNumber;
    double balance;
    string name;

public:
    BankAccount(long accNum, double bal, string holderName)
    {
        accountNumber = accNum;
        balance = bal;
        name = holderName;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "Account Holder Name: " << name << endl;
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Successfully withdrew " << amount << ". New balance: " << balance << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

};

int main()
{

    BankAccount obj(54566787, 67567.67, "sumit");

    obj.display();
    obj.withdraw(6767.0);
    obj.deposit(60.0);


    return 0;
}

