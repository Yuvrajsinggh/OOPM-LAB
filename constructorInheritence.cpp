// Illustrate how the constructors are implemented and the order in which they are called when
// the classes are inherited. Use three classes named alpha, beta, gamma such that alpha, beta are
// base class and gamma is derived class inheriting alpha and beta.

#include <bits/stdc++.h>
using namespace std;

class alpha
{
private:
    string gender;
    int age;

public:
    alpha() : gender("N/A"), age(0) {}
    alpha(string gn, int ag) : gender(gn), age(ag) {}

    void print()
    {
        cout << "\nGender : " << gender << endl;
        cout << "Age : " << age << endl;
    }
};

class beta
{
private:
    string first_name;
    string last_name;

public:
    beta() : first_name("N/A"), last_name("N/A") {}
    beta(string fn, string ln) : first_name(fn), last_name(ln) {}

    void print()
    {
        cout << "First Name : " << first_name << endl;
        cout << "Last Name : " << last_name << endl;
    }
};

class gamma : public alpha, public beta
{
private:
    string highest_qualifiaction;

public:
    gamma() : alpha(), beta(), highest_qualifiaction("N/A\n") {}
    gamma(string gn, int ag, string fn, string ln, string hg) : alpha(gn, ag), beta(fn, ln), highest_qualifiaction(hg) {}

    void print()
    {
        alpha::print();
        beta::print();
        cout << "Highest Qualification : " << highest_qualifiaction << endl;
    }
};

int main()
{

    gamma g1;
    gamma g("Male", 19, "Raj", "Singh", "Graduate\n");
    cout << endl;
    cout << "Details for Paramaterized --> \n";
    g.print();

    cout << "Details for Default --> \n";
    g1.print();
    return 0;
}