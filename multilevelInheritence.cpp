// Consider a class ‘Vehicle’ which has a derive class ‘Fourwheeler’ and ‘Fourwheeler’ also has a
// derived class ‘Car’. Class ‘Vehicle’ has data members category and reg_no. ‘Fourwheeler’ has
// data members model_no, isuue_year, and company. Compute the program to print their
// properties using multilevel inheritance.

#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    string category;
    long reg_no;

public:
    void getdata()
    {
        cout << "\nEnter Category : ";
        cin >> category;
        cout << "Enter Registration Number : ";
        cin >> reg_no;
    }
    void putdata()
    {
        cout << "\nCategory : " << category << endl;
        cout << "Registration Number : " << reg_no << endl;
    }
};

class Fourwheeler : public Vehicle
{
private:
    string model_no;
    int issue_year;
    string company_name;

public:
    void getdata()
    {
        Vehicle::getdata();
        cout << "Enter Model Number : ";
        cin >> model_no;
        cout << "Enter Issue Year : ";
        cin >> issue_year;
        cout << "Enter Company Name : ";
        cin >> company_name;
    }

    void putdata()
    {
        Vehicle::putdata();
        cout << "Model Number : " << model_no << endl;
        cout << "Issue Year : " << issue_year << endl;
        cout << "Company Name : " << company_name << endl;
    }
};

class Car : public Fourwheeler
{
public:
    void getdata()
    {
        Fourwheeler::getdata();
    }
    void putdata()
    {
        Fourwheeler::putdata();
    }
};

int main()
{
    Car c;
    cout << endl;
    cout << "Enter Vehicle Details -->";
    c.getdata();
    cout << endl;
    cout << "Vehicle Details are -->";
    c.putdata();
    return 0;
}