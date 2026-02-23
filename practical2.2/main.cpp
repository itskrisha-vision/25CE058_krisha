#include "student.h"

int main()
{
    int ch;

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "1. Default value for testing\n";
        cout << "2. User provided input value\n";
        cout << "3. Exit\n";
        cout << "Enter your choice = ";
        cin >> ch;

        switch(ch)
        {
        case 1:
        {
            student s1;
            s1.display();
            break;
        }

        case 2:
        {
            int i, n;
            float maximum = 0;
            int index = 0;

            cout << "\nEnter number of students: ";
            cin >> n;

            student s4[10];

            for(i = 0; i < n; i++)
            {
                int r;
                string name;
                float a, b, c;

                cout << "\nEnter roll no: ";
                cin >> r;

                cout << "Enter name: ";
                cin >> name;

                cout << "Enter 3 marks: ";
                cin >> a >> b >> c;

                if(a>0 && a<100 && b>0 && b<100 && c>0 && c<100)
                {
                    s4[i] = student(r, name, a, b, c);

                    s4[i].display();
                    s4[i].grades();

                    if(s4[i].avg() > maximum)
                    {
                        maximum = s4[i].avg();
                        index = i;
                    }
                }
                else
                {
                    cout << "Invalid marks\n";
                }
            }

            cout << "\nHighest average student:\n";
            s4[index].display();

            break;
        }

        case 3:
            cout << "Exit\n";
            break;

        default:
            cout << "Enter valid value!!\n";
        }

    } while(ch != 3);
}
