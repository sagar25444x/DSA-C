#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  // for sorting
  vector<int> a = {1, 4, 3, 2, 5, 6, 9, 7, 8, 10};
  sort(a.begin(), a.end());
  cout << "sorted order" << endl;
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  // for reverse
  vector<int> b = {1, 2, 3, 4, 5};
  reverse(b.begin(), b.end());
  cout << "Reversed order : " << endl;
  for (int i = 0; i < b.size(); i++)
  {
    cout << b[i] << " ";
  }
  return 0;
}