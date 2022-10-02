// Implement constructor for class Power with default argument ’n=9’, ‘p=3’ and at outside the
// class call the function print() which displays ‘n power p’

#include<bits/stdc++.h>
using namespace std;

class Power
{
private:
    int n;
    int p;

public:
    void print()
    {
        cout << "\'" << n << " power " << p << "\' : " << pow(n,p) << endl;
    }
    Power() : n(9), p(3) { } 
};

int main() 
{
    Power p;
    p.print();
    return 0;
}