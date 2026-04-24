#ifndef WALLET_H
#define WALLET_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class wallet
{
private:
    string history[5];
    int tx_count;

    int wallet_id1, wallet_id2;
    float balance1, balance2;
    float deposit_money, transfer_amount;
    string user_name;

public:
    wallet();   // constructor

    void add_transaction(string msg);
    void getdata();
    void loading_money();
    void transferring_money();
    void check_balance();
    void transaction_history();
};

#endif
