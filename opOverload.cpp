// Add two objects of a class distance with two data members ‘kilometer’ and ‘meter’ in its 3rd
// object using operator overloading.

#include <bits/stdc++.h>
using namespace std;

class Distance
{
private:
   int kilometer, meter;

public:
   Distance() : kilometer(0), meter(0) {}

   Distance(int k, int m) : kilometer(k), meter(m) {}

   void getdata()
   {
      cout << "\nEnter Kilometer : ";
      cin >> kilometer;
      cout << "Enter Meter : ";
      cin >> meter;
   }

   void putdata()
   {
      cout << kilometer << "Km " << meter << "m" << endl;
   }

   Distance operator+(Distance &d)
   {
   int k = kilometer + d.kilometer;
   int m = meter + d.meter;
   if (m >= 1000)
   {
      m -= 1000;
      k++;
   }
   return Distance(k, m);
   }
};

int main()
{
   Distance dist1, dist2, dist3;
   cout << "Data for Distance 1 -> ";
   dist1.getdata();
   cout << "Data for Distance 2 -> ";
   dist2.getdata();

   dist3 = dist1 + dist2;

   cout << "\ndist1 = ";
   dist1.putdata();
   cout << endl;
   cout << "dist2 = ";
   dist2.putdata();
   cout << endl;
   cout << "dist3 = ";
   dist3.putdata();
   cout << endl;

   return 0;
}