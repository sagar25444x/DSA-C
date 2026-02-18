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
  for (int i = n - 1; i >= 0; i--) // value of int will be minus 1 coz one layer which is not common is alreay run into upper loop and i value will be cswaped to condition value  and sign od condition will be reversed and increment will chanegd to decrement.
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* " /* code */;
    }
    cout << endl;
  }
}