// Concatenate two strings using operator overloading.

#include <bits/stdc++.h>

#define MAX_SIZE 100
using namespace std;

class String
{
char str[MAX_SIZE];

public:
    String() { strcpy(str, " "); }

    String(char s[]) { strcpy(str, s); }

    String operator + (String s)
    {
        String temp;
        if(strlen(str) + strlen(s.str) < MAX_SIZE)
            {
                strcpy(temp.str, str);
                strcat(temp.str, s.str);
            }
        else
        {
            cout << "\nString Overflow : ";
            return temp;
        }
    }

    void display()
    {
        cout << str;
    }

    char* input()
    {
        cout << "\nEnter any String : ";
        cin.getline(str, MAX_SIZE);

        return str;
    }
};

int main()
{
    String s1 = s1.input();
    String s2 = s2.input();
    String s3;

    s3 = s1 + s2;
    s3.display();
    cout << endl;
    return 0;
}
