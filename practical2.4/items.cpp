#include<iostream>
#include<cstring>
#include "items.h"
using namespace std;

items::items()
{
}

void items::input()
{
    cout<<"\nEnter item id: ";
    cin>>item_id;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter quantity: ";
    cin>>quantity;
}

void items::display()
{
    cout<<"\n----------- ITEM "<<item_id<<" -----------\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Quantity: "<<quantity<<endl;
}

int items::getprice()
{
    return price;
}

int items::getid()
{
    return item_id;
}

int items::getquantity()
{
    return quantity;
}

char* items::getname()
{
    return name;
}

void items::sell()
{
    if(quantity > 0)
    {
        quantity--;
        cout<<"Item sold successfully\n";
    }
    else
        cout<<"Out of stock\n";
}

void items::borrow()
{
    quantity++;
    cout<<"Stock increased. New quantity = "<<quantity<<endl;
}
