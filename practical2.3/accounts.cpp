#include<iostream>
#include<cstring>
#include "accounts.h"
using namespace std;

accounts::accounts(char x[], int y, float z)
{
    strcpy(name, x);
    id = y;
    balance = z;
}

int accounts::getid()
{
    return id;
}

float accounts::getbalance()
{
    return balance;
}

void accounts::display()
{
    cout << "\n========= ACCOUNT SUMMARY =========\n";
    cout << "Name: " << name << endl;
    cout << "Account ID: " << id << endl;
    cout << "Current Balance: " << balance << endl;
}

void accounts::deposit_money(float x)
{
    if(x > 0)
    {
        balance += x;
        cout << "\nDeposit successful!";
    }
    else
        cout << "\nInvalid amount!";
}

void accounts::withdraw_money(float x)
{
    if(x > 0 && x <= balance)
    {
        balance -= x;
        cout << "\nWithdrawal successful!";
    }
    else
        cout << "\nInsufficient balance or invalid amount!";
}

void accounts::interest(float rate, int year)
{
    float si = (balance * rate * year) / 100;
    balance += si;
}
