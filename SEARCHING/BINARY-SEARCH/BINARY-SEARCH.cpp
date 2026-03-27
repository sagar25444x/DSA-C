#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int key;
  cout << "enter key to find : ";
  cin >> key;
  // binary key
  int st = 0;
  int e = n - 1;
  while (st <= e)
  {
    int m = st + (e - st) / 2;
    if (key == a[m])
    {
      cout << m << endl;
      return 0;
    }
    else if (key < a[m])
    {
      e = m - 1;
    }
    else
    {
      st = m + 1;
    }
  }
  cout << -1 << endl;
  return 0;
}