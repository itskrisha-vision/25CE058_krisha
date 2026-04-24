#include<iostream>
#include "Hierarchy.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    Manager *dynamicManagers = new Manager[n];

    for(int i = 0; i < n; i++)
    {
        string name, dept;
        int age, id;

        cout << "\nEnter details for Manager " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Employee ID: ";
        cin >> id;
        cout << "Department: ";
        cin >> dept;

        dynamicManagers[i] = Manager(name, age, id, dept);
    }

    cout << "\nAll Managers:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nManager " << i + 1 << endl;
        dynamicManagers[i].displayManager();
    }

    int searchID;
    cout << "\nEnter Employee ID to search: ";
    cin >> searchID;

    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(dynamicManagers[i].getID() == searchID)
        {
            cout << "\nManager Found:\n";
            dynamicManagers[i].displayManager();
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Manager not found\n";
    }

    delete[] dynamicManagers;

    const int SIZE = 2;
    Manager staticManagers[SIZE] = {
        Manager("Alice", 40, 101, "HR"),
        Manager("Bob", 45, 102, "IT")
    };

    cout << "\nStatic Managers:\n";
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nManager " << i + 1 << endl;
        staticManagers[i].displayManager();
    }

    return 0;
}
