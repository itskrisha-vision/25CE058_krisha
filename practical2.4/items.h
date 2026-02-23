#ifndef ITEMS_H
#define ITEMS_H

#include<iostream>
using namespace std;

class items
{
private:
    int item_id;
    char name[20];
    float price;
    int quantity;

public:
    items();

    void input();
    void display();

    int getprice();
    int getid();
    int getquantity();
    char* getname();

    void sell();
    void borrow();
};

#endif
