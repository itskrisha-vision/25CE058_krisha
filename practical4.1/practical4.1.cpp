#include<iostream>
using namespace std;

class DynamicArray
{
    int *arr;
    int size;

public:
    DynamicArray()
    {
        arr = nullptr;
        size = 0;
    }

    void insertEnd(int value)
    {
        int *temp = new int[size + 1];

        for(int i = 0; i < size; i++)
            temp[i] = arr[i];

        temp[size] = value;

        delete[] arr;
        arr = temp;
        size++;
    }

    void deleteAt(int pos)
    {
        if(size == 0 || pos < 0 || pos >= size)
        {
            cout << "Invalid position\n";
            return;
        }

        int *temp = new int[size - 1];

        for(int i = 0, j = 0; i < size; i++)
        {
            if(i != pos)
                temp[j++] = arr[i];
        }

        delete[] arr;
        arr = temp;
        size--;
    }

    void display()
    {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~DynamicArray()
    {
        delete[] arr;
    }
};

int main()
{
    DynamicArray d;

    d.insertEnd(10);
    d.display();

    d.insertEnd(20);
    d.display();

    d.insertEnd(30);
    d.display();

    d.insertEnd(40);
    d.display();

    d.insertEnd(50);
    d.display();

    d.deleteAt(2);
    d.display();

    d.deleteAt(0);
    d.display();

    d.deleteAt(2);
    d.display();

    return 0;
}
