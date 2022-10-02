#include<bits/stdc++.h>
using namespace std;
class Box {
    float length;
    float width;

    public : 
    float get_x() {
        return length;
    }

    float get_y() {
        return width;
    }


    Box(float a , float b) : length(a) , width(b) { cout << "\nConstructor Has been called \n"; }
};
int main() {
    float x , y;
    cout << "Enter x : ";
    cin>>x;
    cout << "Enter y : ";
    cin>>y;


    Box b1(x, y);
    cout<<b1.get_x()<<"\n";
    cout<<b1.get_y()<<"\n";
    return 0;
}