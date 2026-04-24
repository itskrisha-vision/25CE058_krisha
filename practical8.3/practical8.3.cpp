#include<iostream>
using namespace std;

string logs[100];
int idx = 0;

void log(string s)
{
    logs[idx++] = s;
}

class BankAccount
{
    float balance;

public:
    BankAccount(float b)
    {
        balance = b;
    }

    void deposit(float amt)
    {
        log("Deposit Start");
        balance += amt;
        log("Deposit End");
    }

    void withdraw(float amt)
    {
        log("Withdraw Start");
        if(amt > balance)
            throw "Insufficient Balance";
        balance -= amt;
        log("Withdraw End");
    }

    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc(1000);

    try
    {
        acc.deposit(500);
        acc.withdraw(200);
        acc.withdraw(2000);
    }
    catch(const char* msg)
    {
        log("Exception Caught");
        cout << msg << endl;
    }

    acc.display();

    cout << "\nLogs:\n";
    for(int i=0;i<idx;i++)
        cout << logs[i] << endl;

    return 0;
}
