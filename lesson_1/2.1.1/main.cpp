#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "How many stars to withdraw? ";
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cout << "*";
    }
}
