#include<iostream>
#include "accounts.h"
using namespace std;

int main()
{
    accounts* acc[10];
    int total_acc = 0;
    int ch;
    int autoID = 1;

    do
    {
        cout << "\n1. Create Account";
        cout << "\n2. Withdraw Money";
        cout << "\n3. Deposit Money";
        cout << "\n4. Display Account";
        cout << "\n5. Add Interest";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
        case 1:
        {
            char name[50];
            float balance;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter initial balance: ";
            cin >> balance;

            acc[total_acc] = new accounts(name, autoID, balance);
            cout << "Account created! ID = " << autoID << endl;

            total_acc++;
            autoID++;
            break;
        }

        case 2:
        {
            int id;
            float money;
            cout << "Enter account ID: ";
            cin >> id;

            for(int i=0;i<total_acc;i++)
            {
                if(acc[i]->getid() == id)
                {
                    cout << "Enter amount: ";
                    cin >> money;
                    acc[i]->withdraw_money(money);
                }
            }
            break;
        }

        case 3:
        {
            int id;
            float money;
            cout << "Enter account ID: ";
            cin >> id;

            for(int i=0;i<total_acc;i++)
            {
                if(acc[i]->getid() == id)
                {
                    cout << "Enter amount: ";
                    cin >> money;
                    acc[i]->deposit_money(money);
                }
            }
            break;
        }

        case 4:
        {
            int id;
            cout << "Enter account ID: ";
            cin >> id;

            for(int i=0;i<total_acc;i++)
            {
                if(acc[i]->getid() == id)
                    acc[i]->display();
            }
            break;
        }

        case 5:
        {
            int id, year;
            float rate;

            cout << "Enter account ID: ";
            cin >> id;

            for(int i=0;i<total_acc;i++)
            {
                if(acc[i]->getid() == id)
                {
                    cout << "Enter rate: ";
                    cin >> rate;
                    cout << "Enter year: ";
                    cin >> year;

                    acc[i]->interest(rate, year);
                }
            }
            break;
        }
        }

    } while(ch != 6);
}
