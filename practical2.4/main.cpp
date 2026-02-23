#include<iostream>
#include<cstring>
#include "items.h"
using namespace std;

int main()
{
    items i1[100];
    int ch, stock = 0;

    do
    {
        cout<<"\n====== ITEMS MENU ======\n";
        cout<<"1. Add item\n";
        cout<<"2. Increase stock\n";
        cout<<"3. Sell item\n";
        cout<<"4. Display item\n";
        cout<<"5. Low stock alert\n";
        cout<<"6. Exit\n";
        cin>>ch;

        switch(ch)
        {
        case 1:
            i1[stock].input();
            stock++;
            break;

        case 2:
        {
            char s_name[20];
            cout<<"Enter name: ";
            cin>>s_name;

            for(int i=0;i<stock;i++)
            {
                if(strcmp(s_name,i1[i].getname())==0)
                    i1[i].borrow();
            }
        }
        break;

        case 3:
        {
            char s_name[20];
            string ans;

            cout<<"Enter name: ";
            cin>>s_name;

            for(int i=0;i<stock;i++)
            {
                if(strcmp(s_name,i1[i].getname())==0)
                {
                    i1[i].sell();

                    cout<<"Type yes if sold: ";
                    cin>>ans;

                    if(ans=="yes")
                    {
                        float discount = (i1[i].getprice()*5)/100;
                        float newprice = i1[i].getprice() - discount;

                        cout<<"5% discount applied\n";
                        cout<<"Updated price: "<<newprice<<endl;
                    }
                }
            }
        }
        break;

        case 4:
        {
            int id;
            cout<<"Enter item id: ";
            cin>>id;

            for(int i=0;i<stock;i++)
            {
                if(id == i1[i].getid())
                    i1[i].display();
            }
        }
        break;

        case 5:
            for(int i=0;i<stock;i++)
            {
                if(i1[i].getquantity() < 5)
                {
                    cout<<"\nLow stock: "<<i1[i].getname();
                    cout<<" Quantity = "<<i1[i].getquantity()<<endl;
                }
            }
            break;

        case 6:
            cout<<"Exit\n";
            break;

        default:
            cout<<"Invalid choice\n";
        }

    }while(ch != 6);
}
