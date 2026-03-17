#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 1 create array jisme size pata hai lekin number nhi
  int a[5];

  // 2 create array jisem size nhi pata lekin number pata hai
  int b[] = {1, 2, 3, 4, 5};
  // array ke elements ka size
  int n = sizeof(b) / sizeof(int);
  cout << n << endl;
  // 3
  return 0;
}