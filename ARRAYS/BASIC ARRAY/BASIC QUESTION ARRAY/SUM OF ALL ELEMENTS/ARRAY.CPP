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
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += a[i];
  }
  cout << "THE SUM ELEMENT OF ARRAY IS : " << ans << endl;
  return 0;
}