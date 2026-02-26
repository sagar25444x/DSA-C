#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "num : ";
  cin >> n;
  for (int i = 0; i <= n - 1; i++)
  {
    for (int j = 0; j <= i; j++)   // for SPACE
    {
      cout << "  ";
    }
    for (int j = 0; j < n - i; j++)  // for star
    {
      cout << "* ";
    }
    cout << endl;
  }
}