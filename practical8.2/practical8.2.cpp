#include<iostream>
#include<cmath>
using namespace std;

class NegativeNumberException
{
public:
    void message()
    {
        cout << "Negative number not allowed\n";
    }
};

int main()
{
    float num;

    cout << "Enter number: ";
    cin >> num;

    try
    {
        if(num < 0)
            throw NegativeNumberException();

        cout << "Square Root: " << sqrt(num) << endl;
    }
    catch(NegativeNumberException e)
    {
        e.message();
    }

    return 0;
}
