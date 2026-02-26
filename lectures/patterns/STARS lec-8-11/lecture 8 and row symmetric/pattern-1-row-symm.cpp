#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* " /* code */;
    }
    cout << endl;
  }
  for (int i = n; i >= 0; i--) // value of int adn condition will swap and sign will be reversed and increment decrement will be aslo reversed
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* " /* code */;
    }
    cout << endl;
  }
}