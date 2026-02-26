                                    // in phone camera 10:22
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < i + 1; j++)
    {
      if (j%2==0)
      {
        cout << "* ";
      }
      else
      cout<<"! ";/* code */
    }
    for (int j = 0; j < i; j++)
    {
      if (i%2==0)
      {
        cout<<"! ";/* code */
      }
      else
      cout << "* ";
    }
    for (int j = 0; j < n; j++)
    {
      cout << "  ";
    }
    cout << endl;
  }
}

