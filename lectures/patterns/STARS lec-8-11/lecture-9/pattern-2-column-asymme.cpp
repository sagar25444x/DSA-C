// isme loop repeat hog for example we have 4 loop (a,b,c,d)then will gi in same but in(d,c,b,a)

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    // loop a
    for (int j = 0; j < n - i; j++)
    {
      cout << "  "; /* code */
    }
    // loop b
    for (int j = 0; j < i + 1; j++)
    {
      cout << "* "; /* code */
    }
    // loop b
    for (int j = 0; j < i - 1; j++)
    {
      cout << "* "; /* code */
    }
    // loop a
    for (int j = 0; j < n - i; j++)
    {
      cout << "  "; /* code */
    }

    cout << endl;
  }
}