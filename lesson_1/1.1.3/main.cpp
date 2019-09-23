#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
        cout << "Say the first number \n";
     cin >> a;
        cout << "Say the second number \n";
     cin >> b;
        cout << "Say the third number FROM 1 TO 4 \n";
     cin >> c;


     while (c > 5)
        {
            cout << "I say no more than 5. ";
            cout << "Try again ";
            cin >> c;

        }
    if (c < 5)
     {

        if (c==1)
        {
             cout << "Your answer " <<(a+b);
        }
        else if  (c==2)
        {
             cout << "Your answer " <<(a-b);
        }
        else if (c==3)
        {
             cout << "Your answer " <<(a*b);
        }
        else if (c==4)
        {
             cout << "Your answer " <<(a/b);
        }
    }
}
