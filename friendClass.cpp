// Design a solution which accept the student detail such as name and 3 different marks by
// get_data() method and display the name and average of marks using display() method. Define a
// friend class for calculating the average of marks using the method mark_avg().

#include <bits/stdc++.h>
#define N 3
using namespace std;

class Student
{
private:
    string name;
    int m1, m2, m3;

public:
    Student() : name("N/A"), m1(0), m2(0), m3(0) {}

    void get_data()
    {
        cout << "\nEnter the Student Name : ";
        getline(cin, name);
        cout << "Enter Marks of Subject 1 : ";
        cin >> m1;
        cout << "Enter Marks of Subject 2 : ";
        cin >> m2;
        cout << "Enter Marks of Subject 3 : ";
        cin >> m3;
    }

    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Marks of Subject 1 : " << m1 << endl;
        cout << "Marks of Subject 2 : " << m2 << endl;
        cout << "Marks of Subject 3 : " << m3 << endl;
    }
    friend class Average;
};

class Average 
{
public:
    void mark_avg(Student st)
    {
        int sum = 0, avg = 0;
        sum = st.m1 + st.m2 + st.m3;
        avg = sum/N;
        st.display();
        cout << "\nAverage of Marks is : " << avg;
    }
};

int main()
{
    Student st;
    Average av;
    cout << endl;
    cout << "Getting Values ->";
    st.get_data();
    cout << endl;
    cout << "Displaying Values ->";
    st.display();
    cout << endl;
    cout << "Displaying Average Value ->";
    av.mark_avg(st);

    return 0;
}