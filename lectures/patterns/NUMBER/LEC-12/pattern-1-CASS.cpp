#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int cnt = 1;
  for (int i = 1; i <= n; i++)
  {
    // for spaces
    for (int j = 1; j <= n - i; j++)
    {
      cout << " \t"; /* code */
    }
    for (int j = 1; j <= i; j++)
    {
      cout << j << "\t";
    }
    for (int j = i-1; j >= 1; j--)
    {
     cout<<j<<"\t"; /* code */
    }
    
    cout << endl;
  }

  return 0;
}