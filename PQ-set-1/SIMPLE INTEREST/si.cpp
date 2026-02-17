#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float p, r, t;

  cout << "Enter Principal: ";
  cin >> p;
  cout << "Enter Rate of interest: ";
  cin >> r;
  cout << "Enter Time: ";
  cin >> t;

  float si = (p * r * t) / 100;

  cout << fixed << setprecision(2);
  cout << "Simple Interest = " << si;

  return 0;
}