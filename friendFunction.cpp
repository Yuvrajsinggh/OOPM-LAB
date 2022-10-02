// Create a class Coordinate, declare two int variables in it, i.e., x, y, and create a constructor for
// inputs. Declare a friend function swap in it. Define the friend function outside the class scope by
// taking arguments as call by reference to pass the copy of Coordinate Object. Perform the swap
// operation in swap function to swap the coordinates.

#include <bits/stdc++.h>
using namespace std;

class Coordinate
{
private:
    int x, y;

public:
    Coordinate()
    {
        cout << "Enter the Coordinate : ";
        cin >> x;
        cout << "Enter another Coordiante : ";
        cin >> y;
    }
    friend void swap(Coordinate);
};

void swap(Coordinate co)
{
    int temp;
    temp = co.x;
    co.x = co.y;
    co.y = temp;
    cout << "Swapped Coordinates are ->\nx = " << co.x << " and y = " << co.y;
}

int main()
{
    cout << endl;
    Coordinate co;
    cout << endl;
    swap(co);
    return 0;
}