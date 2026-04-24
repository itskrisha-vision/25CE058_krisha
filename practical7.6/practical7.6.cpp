#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor\n";
    }

    ~Base()
    {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base
{
    int *data;

public:
    Derived()
    {
        data = new int[5];
        cout << "Derived Constructor (Memory Allocated)\n";
    }

    ~Derived()
    {
        delete[] data;
        cout << "Derived Destructor (Memory Freed)\n";
    }
};

int main()
{
    Base *b = new Derived();
    delete b;

    cout << "\n--- After Virtual Destructor ---\n";

    class Base2
    {
    public:
        Base2()
        {
            cout << "Base2 Constructor\n";
        }

        virtual ~Base2()
        {
            cout << "Base2 Destructor\n";
        }
    };

    class Derived2 : public Base2
    {
        int *data;

    public:
        Derived2()
        {
            data = new int[5];
            cout << "Derived2 Constructor\n";
        }

        ~Derived2()
        {
            delete[] data;
            cout << "Derived2 Destructor\n";
        }
    };

    Base2 *b2 = new Derived2();
    delete b2;

    return 0;
}
