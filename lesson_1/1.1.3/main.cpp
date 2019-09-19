#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
        cout << "Say the first number ";
     cin >> a;
        cout << "Say the second number ";
     cin >> b;
        cout << "Say the third number ";
     cin >> c;
    if (c>=1 && c<=5)
    {
         cout << "Your answer " <<(a+b);
    }
    else if (c>=6 && c<=10)
    {
        cout << "Your answer " <<(a-b);
    }
    else if (c>=11 && c<=15)
    {
        cout << "Your answer " <<(a*b);
    }
    else if (c>=16 && c<=20)
    {
        cout << "Your answer " <<(a/b);
    }
}
