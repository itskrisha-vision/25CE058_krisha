#include "wallet.h"

int main()
{
    int ch;
    wallet w1;

    w1.getdata();

    do
    {
        cout << "\n===== DIGITAL WALLET SYSTEM =====\n";
        cout << "1. Load money\n";
        cout << "2. Transfer money\n";
        cout << "3. Check balance\n";
        cout << "4. Transaction history\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1: w1.loading_money(); break;
        case 2: w1.transferring_money(); break;
        case 3: w1.check_balance(); break;
        case 4: w1.transaction_history(); break;
        case 6: cout << "Exit\n"; break;
        default: cout << "Invalid choice\n";
        }

    } while (ch != 6);

    return 0;
}
