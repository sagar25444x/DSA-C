#include <iostream>
using namespace std;

int main()
{ /// in phone camera 11:41

  int count;
  cin >> count;
  int m = (count + 1) / 2;
  for (int i = 0; i < m; i++)
  {
    cout << "  "; /* code */
  }
  for (int j = 0; j < 2 * m; j++)
  {
    cout << "* "; /* code */
  }
  cout << endl;
  return 0;
}