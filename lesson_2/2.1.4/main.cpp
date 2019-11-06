#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter size of the Christmas tree: ";
    cin  >> n;
    cout << "\n";

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout << " ";
        }
        for(int j=1;j<i*2;j++)
        cout << "*";
        cout << "\n";
    }

    for (int s=0;s<n-1;s++)
    {
        cout << " ";
    }
    cout << "*" << "\n";
}
