#include "student.h"

// default constructor
student::student()
{
    roll_no = 4;
    name = "priya";
    m1 = 22.6;
    m2 = 56.7;
    m3 = 23.7;
}

// parameterized constructor
student::student(int a, string n, float m, float m4, float m5)
{
    roll_no = a;
    name = n;
    m1 = m;
    m2 = m4;
    m3 = m5;
}

float student::avg()
{
    return (m1 + m2 + m3) / 3;
}

void student::grades()
{
    if(avg() > 90)
        cout << "A+ grade\n";
    else if(avg() > 80)
        cout << "A grade\n";
    else if(avg() > 70)
        cout << "B+ grade\n";
    else if(avg() > 60)
        cout << "C grade\n";
    else
        cout << "Fail\n";
}

void student::display()
{
    cout << "\nStudent rollno: " << roll_no;
    cout << "\nStudent name: " << name;
    cout << "\nMarks1 = " << m1;
    cout << "\nMarks2 = " << m2;
    cout << "\nMarks3 = " << m3;
    cout << "\nAverage = " << avg() << endl;
}
