#include <iostream>

using namespace std;

int main()
{
   int a;
    cout << "vasha zarplata ";
    cin >> a;

          if (a > 999)
          {
              if (a > 999999)
              {
                  cout << "Ti milioner! ";
              }
              if (a < 1000000)
              {
                  cout << "Hororho! ";
              }
          }

          if (a < 1000)
          {
              cout << "Robotai bolshe! ";
          }
          cout << "No ti molodec! ";

}
