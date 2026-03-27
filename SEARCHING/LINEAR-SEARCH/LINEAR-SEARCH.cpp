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
  // linear search
  for (int i = 0; i < n; i++)
  {
    if (key == a[i])
    {
      cout << "The Index position is : " << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}