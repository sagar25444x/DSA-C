#include <iostream>
using namespace std;
int main()
{
  int n;
  int m=(n+1)/2;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << " "; /* code */
    }
    for (int j = i; j < ; j++)
    {
      cout << "*"; /* code */
    }
  }
  cout << endl;
}