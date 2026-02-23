#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include<iostream>
using namespace std;

class accounts
{
private:
    char name[50];
    int id;
    float balance;

public:
    accounts(char[], int, float);

    int getid();
    float getbalance();

    void display();
    void deposit_money(float);
    void withdraw_money(float);
    void interest(float, int);
};

#endif
