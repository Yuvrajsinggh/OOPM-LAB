// Implement function overloading by overloading the print function which prints an int, char and
// double type.

#include <bits/stdc++.h>
using namespace std;

void print(int);
void print(char);
void print(double);

void print(int i)
{
    cout << "Displaying Integer -> ";
    cout << i << endl;
}

void print(char c)
{
    cout << "Displaying Character -> ";
    cout << c << endl;
}

void print(double d)
{
    cout << "Displaying Double -> ";
    cout << d << endl;
}

int main()
{
    int a;
    char b;
    double e;

    cout << "\nEnter Integer : ";
    cin >> a;
    print(a);

    cout << "\nEnter Character : ";
    cin >> b;
    print(b);

    cout << "\nEnter Double : ";
    cin >> e;
    print(e);

    return 0;
}