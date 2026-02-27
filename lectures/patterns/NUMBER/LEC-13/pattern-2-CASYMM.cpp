#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int count;
  for (int i = 1; i <= n; i++)
  {
    // for spaces
    for (int j = 0; j < n - i; j++)
    {
      cout << "\t";
    }
    // for left number
    for (int j = n - i; j < n - 1; j++)
    {
      cout << j+1 << "\t";
    }
    cout<<0<<"\t";
    for (int j = n - 1; j > n - i; j--)
    {
      cout << j << "\t";
    }
    cout << endl;
  }

  return 0;
}