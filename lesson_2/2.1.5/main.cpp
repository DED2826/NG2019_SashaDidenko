#include <iostream>

using namespace std;

int main()
{
    char n ,a ,b ,c;

    cout << "Enter letter a ,b or c: ";
    cin  >> n;

    if(n=='a')
    {
        for(int i=1;i<=5;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

    if(n=='b')
    {
        for(int i=0;i<=5;i++)
        {
            for(int j=5;j>i;j--)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

    if(n=='c')
    {for(int i=1;i<=5;i++)
        {
            for(int j=5;j>i;j--)
            {
                cout << " ";
            }
            for(int j=1;j<i*2;j++)
            cout << "*";
            cout << "\n";
        }
    }
}
