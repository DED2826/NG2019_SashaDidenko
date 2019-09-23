#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;


    cout << "Enter a ";
     cin >> a;
    cout << "Enter b ";
     cin >> b;
    cout << "Enter c ";
     cin >> c;


     if ((b*b - 4*a*c ) >= 0)

        {
            x = ( -1*b + sqrt(b*b - 4*a*c)) / (2*a);
     cout  << " The first root is " << x << endl;
            x = ( -1*b - sqrt(b*b - 4*a*c)) / (2*a);
     cout << " The second root is " << x << endl;
        }

     else

        {
            cout << " Discriminant less 0 ";
        }

}
