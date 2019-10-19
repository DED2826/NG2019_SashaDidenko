#include <iostream>

using namespace std;

int main()
{
    int a, b, c, f, d;
     cout << "Your first salary ";
     cin  >> a;
     cout << "Your second salary ";
     cin  >> b;
     cout << "Your third salary ";
     cin  >> c;

    d = a;

    if (d < b) d = b;
    if (d < c) d = c;
     cout << " MAX salary " << d << endl;

}
