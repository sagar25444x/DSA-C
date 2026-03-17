#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cout << "ENTER SIZE OF ARRAY: ";
  cin >> n;
  int a[n];
  int ans = a[0];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (ans < a[i])
    {
      ans = a[i];
    }
  }
  cout << "THE MAX ELEMENT OF ARRAY IS : " << ans << endl;
  return 0;
}