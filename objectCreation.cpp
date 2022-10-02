#include<bits/stdc++.h>
using namespace std;
class student{
    private :
    string name;
    char rollno[100];
    int year;

    public :
    void get() {
        cout<<"Enter Student Name : "<<endl;
        getline(cin , name);
        cout<<"Enter Student Roll no : "<<endl;
        cin>>rollno;
        cout<<"Enter Student Year : "<<endl;
        cin>>year;
    }
    void display() {
        cout<<"Student details are : "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Year : "<<year<<endl;
    }
};

int main() {
    student s1;
    s1.get();
    s1.display();
    return 0;
}