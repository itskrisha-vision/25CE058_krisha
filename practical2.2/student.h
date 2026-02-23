#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
using namespace std;

class student
{
public:
    int roll_no;
    string name;
    float m1, m2, m3;

    student();
    student(int, string, float, float, float);

    float avg();
    void grades();
    void display();
};

#endif
