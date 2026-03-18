#include <iostream>
#include <vector>
using namespace std;

int main()
{

  // Create vector with defined size
  vector<int> a(5);

  // Create vector with defined elements
  vector<int> b = {1, 2, 3, 4, 5};

  // Create vector with undefined size and elements
  vector<int> c;

  // create vector with user input size
  int n;
  cin >> n;
  vector<int> d(n);

  c.push_back(10);
  c.push_back(20);
  c.push_back(30);
  c.push_back(40);
  


  for (int val : a)
  {
    cout << val;
  }

  return 0;
}