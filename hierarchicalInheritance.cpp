// Consider a class ‘Vehicle’ which has two derived classes ‘Fourwheeler’ and ‘Twowheeler’. Class
// ‘Vehicle’ has data members category and reg_no and derived classes has model_no, color,
// company_name. Compute the program to print their properties using hierarchical inheritance.

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
    string color;
    string company_name;

public:
    void getdata()
    {
        Vehicle::getdata();
        cout << "Enter Model Number : ";
        cin >> model_no;
        cout << "Enter Color : ";
        cin >> color;
        cout << "Enter Company Name : ";
        cin >> company_name;
    }

    void putdata()
    {
        Vehicle::putdata();
        cout << "Model Number : " << model_no << endl;
        cout << "Color : " << color << endl;
        cout << "Company Name : " << company_name << endl;
    }
};

class Twowheeler : public Vehicle
{
private:
    string model_no;
    string color;
    string company_name;

public:
    void getdata()
    {
        Vehicle::getdata();
        cout << "Enter Model Number : ";
        cin >> model_no;
        cout << "Enter Color : ";
        cin >> color;
        cout << "Enter Company Name : ";
        cin >> company_name;
    }

    void putdata()
    {
        Vehicle::putdata();
        cout << "Model Number : " << model_no << endl;
        cout << "Color : " << color << endl;
        cout << "Company Name : " << company_name << endl;
    }
};

int main()
{
    Fourwheeler f;
    Twowheeler t;
    cout << endl;
    cout << "\nEnter data for fourwheeler ";
    f.getdata();
    cout << endl;
    cout << "\nEnter data for twowheeler ";
    t.getdata();

    cout << endl;
    cout << "\nData on fourwheeler ";
    f.putdata();
    cout << endl;
    cout << "\nData on twowheeler ";
    t.putdata();

    return 0;
}