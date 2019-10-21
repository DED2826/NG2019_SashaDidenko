#include <iostream>

using namespace std;

int main()
{
    int a ,b ,c;

    cout << "Say first number ";
    cin  >> a;
    cout << "Say second number ";
    cin  >> b;
    cout << "Say third number ";
    cin  >> c;

    if (a * b == c || a * c == b || c * b == a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
