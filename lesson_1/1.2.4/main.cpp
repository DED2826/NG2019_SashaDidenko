#include <iostream>

using namespace std;

int main()
{
  int a ,b ,c;

    cout << "Say first number ";
     cin >> (a);
    cout << "Say second number ";
     cin  >> (b);
    cout << "Say third number ";
     cin >> (c);

     if (a * b == c)
     {
        cout << "YES";
     }

     else if (a * c == b)
     {
        cout << "YES";
     }

     else if (c * b == a)
     {
        cout << "YES";
     }

     else
     {
        cout << "NO";
     }
}
