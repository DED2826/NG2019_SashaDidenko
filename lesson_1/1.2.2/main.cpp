#include <iostream>

using namespace std;

int main()
{
    int a, b, c, f, d, s;

    cout << "First salary ";
    cin  >> a;
    cout << "Second salary ";
    cin  >> b;
    cout << "Third salary ";
    cin  >> c;

    d = a;
    f = a;
    d - f;
    if (d < b) d = b;
    if (d < c) d = c;
    if (f > b) f = b;
    if (f > c) f = c;
    {
        cout << "MAX " << d << endl << endl;
        cout << "MIN " << f << endl << endl;
        s = d - f;
        cout << "DIFFERENCE " << s << endl;
    }
}
