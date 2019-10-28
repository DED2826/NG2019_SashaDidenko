#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter number)) ";
    cin  >> a;
    cout << endl;

    for(int i=0;i<a;i++)
    {
        for(int s=0;s<a;s++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
