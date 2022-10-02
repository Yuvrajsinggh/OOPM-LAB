// Use copy constructor for class Coordinate to copy one object to another object

#include <bits/stdc++.h>
using namespace std;

class coordinate
{
private:
    float x, y, a, b;

public:
    void print()
    {
        cout << "x coordinate : " << a << endl;
        cout << "y coordinate : " << b << endl;
    }
    void getdata()
    {
        cout << "\nEnter x Coordinate : ";
        cin >> a;
        cout << "Enter y Coodinate : ";
        cin >> b;
    }

    coordinate() : x(a), y(b) {}

    coordinate(const coordinate& c)
    {
        a = c.a;
        b = c.b;
    }
};

int main()
{
    coordinate c;
    c.getdata();
    cout << "\nFor c : " << endl;
    c.print();
    coordinate c0 = c;
    cout << "\nFor c0 : " << endl;
    c0.print();
    return 0;
}