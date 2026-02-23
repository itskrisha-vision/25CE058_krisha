#include "wallet.h"

wallet::wallet()
{
    tx_count = 0;
    balance1 = balance2 = 0;
}

void wallet::add_transaction(string msg)
{
    history[tx_count % 5] = msg;
    tx_count++;
}

void wallet::getdata()
{
    cout << setw(35) << "Enter details of first wallet\n";
    cout << "Enter wallet id: ";
    cin >> wallet_id1;
    cout << "Enter username: ";
    cin >> user_name;
    cout << "Enter current balance: ";
    cin >> balance1;

    cout << setw(35) << "Enter details of second wallet\n";
    cout << "Enter wallet id: ";
    cin >> wallet_id2;
    cout << "Enter username: ";
    cin >> user_name;
    cout << "Enter current balance: ";
    cin >> balance2;
}

void wallet::loading_money()
{
    int choice;
    cout << "Select wallet:\n1. " << wallet_id1 << "\n2. " << wallet_id2 << endl;
    cin >> choice;

    cout << "Enter amount to load: ";
    cin >> deposit_money;

    if (choice == 1)
    {
        balance1 += deposit_money;
        add_transaction("Loaded money into Wallet 1");
    }
    else if (choice == 2)
    {
        balance2 += deposit_money;
        add_transaction("Loaded money into Wallet 2");
    }
    else
        cout << "Invalid wallet selection\n";
}

void wallet::transferring_money()
{
    int choice;
    cout << "1. Wallet 1 → Wallet 2\n";
    cout << "2. Wallet 2 → Wallet 1\n";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> transfer_amount;

    if (choice == 1)
    {
        if (balance1 >= transfer_amount)
        {
            balance1 -= transfer_amount;
            balance2 += transfer_amount;
            add_transaction("Transferred money from Wallet 1 to Wallet 2");
        }
        else
            cout << "Insufficient balance\n";
    }
    else if (choice == 2)
    {
        if (balance2 >= transfer_amount)
        {
            balance2 -= transfer_amount;
            balance1 += transfer_amount;
            add_transaction("Transferred money from Wallet 2 to Wallet 1");
        }
        else
            cout << "Insufficient balance\n";
    }
    else
        cout << "Invalid choice\n";
}

void wallet::check_balance()
{
    int choice;
    cout << "1. Wallet 1\n2. Wallet 2\n";
    cin >> choice;

    if (choice == 1)
        cout << "Wallet 1 balance = " << balance1 << endl;
    else if (choice == 2)
        cout << "Wallet 2 balance = " << balance2 << endl;
    else
        cout << "Invalid choice\n";
}

void wallet::transaction_history()
{
    cout << "Last 5 transactions:\n";
    int start = (tx_count > 5) ? tx_count - 5 : 0;

    for (int i = start; i < tx_count; i++)
        cout << history[i % 5] << endl;
}
