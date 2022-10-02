// Create a class called Dimension containing three float data and a constructor to accept values.
// Also declare a pure virtual function area in it to make it abstract class. Create three derived
// classes rectangle, Square and triangle each inheriting dimension as public. Define
// corresponding constructors and redefine virtual function area in each. Write a complete
// program and also print the version of virtual function used each time area is printed.

#include <bits/stdc++.h>
#define half 1 / 2

using namespace std;

class Dimension
{
protected:
    float x, y, z;

public:
    virtual void area() = 0;
};

class rectangle : public Dimension
{
public:
    using Dimension::x;
    using Dimension::y;
    rectangle()
    {
        cout << "\nEnter length : ";
        cin >> x;
        cout << "Enter Breadth : ";
        cin >> y;
    }

    void area()
    {
        float area;
        area = x * y;
        cout << "Area of Rectangle of length " << x << " and breadth " << y << " is : " << area << endl;
    }
};

class square : public Dimension
{
public:
    using Dimension::x;
    square()
    {
        cout << "\nEnter size : ";
        cin >> x;
    }

    void area()
    {
        float area;
        area = pow(x, 2);
        cout << "Area of Square of size " << x << " is : " << area << endl;
    }
};

class traingle : public Dimension
{
public:
    using Dimension::x;
    using Dimension::y;
    traingle()
    {
        cout << "\nEnter Base : ";
        cin >> x;
        cout << "Enter Height : ";
        cin >> y;
    }

    void area()
    {
        float area;
        area = half * x * y;
        cout << "Area of Traingle of base " << x << " and height " << y << " is : " << area << endl;
    }
};

int main()
{
    cout << endl;
    cout << "For Rectangle ->";
    rectangle r;
    r.area();
    cout << endl;
    cout << "For Square ->";
    square s;
    s.area();
    return 0;
    cout << endl;
    cout << "For Traingle ->";
    traingle t;
    t.area();
    cout << endl;
}