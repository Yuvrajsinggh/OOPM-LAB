// Create a class called Dimension containing three float data and a constructor to accept values.
// Also declare a pure virtual function area in it to make it abstract class. Create three derived
// classes rectangle, Square and triangle each inheriting dimension as public. Define
// corresponding constructors and redefine virtual function area in each. Write a complete
// program and also print the version of virtual function used each time area is printed.

#include <bits/stdc++.h>
#define half 0.5

using namespace std;

class Dimension
{
protected:
    float x, y, z;

public:
    virtual void area() = 0;

    Dimension() 
    {
        cout << "\nEnter Data 1 : ";
        cin >> x;
        cout << "Enter Data 2 : ";
        cin >> y;
        cout << "Enter Data 3 : ";
        cin >> z;
    }
};

class rectangle : public Dimension
{
private:
    float length, width;

public:
    rectangle() : length(x), width(y) {}

    void area()
    {
        float area;
        area = length * width;
        cout << "Area of Rectangle of length " << length << " and breadth " << width << " is : " << area << endl;
    }
};

class square : public Dimension
{
private:
    float size;

public:
    square() : size(z) {}

    void area()
    {
        float area;
        area = pow(size, 2);
        cout << "Area of Square of size " << size << " is : " << area << endl;
    }
};

class traingle : public Dimension
{
private:
    float base, height;

public:
    traingle() : base(x), height(y) {}

    void area()
    {
        float area;
        area = half * base * height;
        cout << "Area of Traingle of base " << base << " and height " << height << " is : " << area << endl;
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
    cout << endl;
    cout << "For Traingle ->";
    traingle t;
    t.area();
    cout << endl;
    return 0;
}