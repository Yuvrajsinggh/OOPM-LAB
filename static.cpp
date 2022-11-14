// Define a class with constructor and destructor and a static variable count. Increment the count
// in constructor and decrement the count in destructor. Print the no. of objects whenever an
// object created or destroyed.

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
        cout << "\nObjects "<< count << " is created :) ";
    }

    int getcount()
    {
        return count;
    }

    ~Student()
    {
        count--;
        cout << "\nObjects " <<  count << " is Destroyed :( ";
    }
};

int Student :: count = 0;

int main()
{
    Student s1, s2, s3, s4;
    return 0;
}