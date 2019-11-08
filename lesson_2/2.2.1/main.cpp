#include <iostream>

using namespace std;

int main()
{
    int s;
    int mas[10];

    for(int i=0;i<10;i++)
    {
        cout << "Vvedi nomer kakoi-to shkolu: ";
        cin  >> mas[i];
        cout << endl;
    }

    cout << "A teper vvedi svoyu shkolu: ";
    cin  >> s;
    cout << endl;

    for(int i=0;i<10;i++)
    {
        if(mas[i]== s)
        {
            cout << "Ya znayu etu shkolu! \n";
        }
    }
}
