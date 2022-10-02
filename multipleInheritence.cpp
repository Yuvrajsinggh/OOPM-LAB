// Implement multiple inheritances with two base class person and employee and child class
// manager which inherit properties of person and employee class and have its own specific
// properties.

#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string gender;
    int age;

public:
    void getdata()
    {
        cout << "\nEnter Gender : ";
        cin >> gender;
        cout << "Enter Age : ";
        cin >> age;
    }
    void putdata()
    {
        cout << "\nGender : " << gender << endl;
        cout << "Age : " << age << endl;
    }
};

class Employee
{
protected:
    string first_name;
    string last_name;

public:
    void getdata()
    {
        cout << "Enter First Name : ";
        cin >> first_name;
        cout << "Enter Last Name : ";
        cin >> last_name;
    }
    void putdata()
    {
        cout << "First Name : " << first_name << endl;
        cout << "Last Name : " << last_name << endl;
    }
};

class Manager : public Person, public Employee
{
private:
    string title;

public:
    void getdata()
    {
        Person::getdata();
        Employee::getdata();
        cout << "Enter the Title (Vice-President) : ";
        cin >> title;
        // getline(cin, title);
    }
    void putdata()
    {
        Person::putdata();
        Employee::putdata();
        cout << "Title : " << title << endl;
    }
};

int main()
{
    Manager m;
    cout << endl;
    cout << "Enter the Details --> ";
    m.getdata();
    cout << "Details are --> ";
    m.putdata();
    return 0;
}