#include <iostream>

using namespace std;

int main()
{
    int a, b, c, f, d;
     cout << "First number ";
      cin >> a;
     cout << "Second number ";
      cin >> b;
     cout << "Third number ";
      cin >> c;
    d = a;
    if (d < b) d = b;
    if (d < c) d = c;
    cout << d;

}
