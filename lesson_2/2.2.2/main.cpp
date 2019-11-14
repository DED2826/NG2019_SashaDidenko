#include <iostream>

using namespace std;

int main()
{
    int mas[10];
    int n,i;

    for(int j=0;j<10;j++)
    {
        mas[j]=0;
        cout << mas[j] << " ";
    }

    for(int j=0;j<10;i++)
    {
        cout << "\nVvedi nomer kartochki: ";
        cin  >> n;

        switch(n)
        {
            case 1: cout << "\nSkolko polozhit: ";cin >> i;mas[0]=i+mas[0];
            cout <<"\n";break;

            case 2: cout << "\nSkolko polozhit: ";cin >> i;mas[1]=i+mas[1];
            cout <<"\n";break;

            case 3: cout << "\nSkolko polozhit: ";cin >> i;mas[2]=i+mas[2];
            cout <<"\n";break;

            case 4: cout << "\nSkolko polozhit: ";cin >> i;mas[3]=i+mas[3];
            cout <<"\n";break;

            case 5: cout << "\nSkolko polozhit: ";cin >> i;mas[4]=i+mas[4];
            cout <<"\n";break;

            case 6: cout << "\nSkolko polozhit: ";cin >> i;mas[5]=i+mas[5];
            cout << "\n";break;

            case 7: cout << "\nSkolko polozhit: ";cin >> i;mas[6]=i+mas[6];
            cout <<"\n";break;

            case 8: cout << "\nSkolko polozhit: ";cin >> i;mas[7]=i+mas[7];
            cout <<"\n";break;

            case 9: cout << "\nSkolko polozhit: ";cin >> i;mas[8]=i+mas[8];
            cout <<"\n";break;

            case 10: cout << "\nSkolko polozhit: ";cin >> i;mas[9]=i+mas[9];
            cout<<"\n";break;
            default: cout << "Enter number from 1-10!!!!\n";
        }
        cout <<mas[0]<<" "<<mas[1]<<" "<<mas[2]<<" "<<mas[3]<<" "<<mas[4]<<" "<<mas[5]<<" "<<mas[6]<<" "<<mas[7]<<" "<<mas[8]<<" "<<mas[9]<<" \n";
    }
}
