#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a=0, int b=0)
    {
        x = a;
        y = b;
    }

    Point& move(int dx, int dy)
    {
        x += dx;
        y += dy;
        return *this;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    float distance()
    {
        return sqrt(x*x + y*y);
    }

    void reset()
    {
        x = 0;
        y = 0;
    }
};

void updatePoint(Point *p)
{
    p->move(5, -3);
}

int main()
{
    Point p(2,3);

    p.move(2,3).move(-1,4).move(3,-2);
    p.display();

    updatePoint(&p);
    p.display();

    cout << "Distance: " << p.distance() << endl;

    p.reset();
    p.display();

    return 0;
}
