// Challenge 1: Implement an Account Class Using (Pure) Virtual Functions

#include <iostream>
using namespace std;

class Account{
    protected:
    float balance;

    public:
    Account() : balance(0) {}
    Account(float amount){
        balance = amount;
    }
    virtual void Withdraw(float amount) = 0;
    virtual void Deposit(float amount) = 0;
    virtual void printBalance() = 0;
};

class Savings : public Account{
    float interest_rate = 0.8;

    public:
    Savings(float amount) : Account(amount) {}
    void Withdraw(float amount){
        balance -= amount * (1 + interest_rate);
    }
    void Deposit(float amount){
        balance += amount * (1 + interest_rate);
    }
    void printBalance(){
        cout << "Balance in yout saving account: " << balance << endl;
    }
};

class Current : public Account{
    public:
    Current(float amount) : Account(amount) {}
    void Withdraw(float amount){
        balance -= amount;
    }
    void Deposit(float amount){
        balance += amount;
    }
    void printBalance(){
        cout << "Balance in your current account: " << balance << endl;
    }
};

int main(){
    Savings s1(50000);
    Account *acc  = &s1;
    acc->Deposit(1000);
    acc->printBalance();
    acc->Withdraw(3000);
    acc->printBalance();
    cout << endl;

    Current c1(50000);
    acc = &c1;
    acc->Deposit(1000);
    acc->printBalance();
    acc->Withdraw(3000);
    acc->printBalance();
    cout << endl;

    return 0;
}