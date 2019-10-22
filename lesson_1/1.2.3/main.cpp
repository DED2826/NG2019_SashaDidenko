#include <iostream>

using namespace std;

int main()
{
     int a, b, c, f, d;

     cout << "Your first number ";
     cin  >> a;
     cout << "Your second number ";
     cin  >> b;
     cout << "Your third number ";
     cin  >> c;

     d = a;
     if (d < b) d = b;
     if (d < c) d = c;
     cout << "MAX number " << d << endl << endl;
}
