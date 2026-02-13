#include <iostream>
using namespace std;
int main()
{
  int num1;
  int num2;
  cout << "Enter two numbers : " << endl;
  cin >> num1;
  cin >> num2;
  if (num1 < num2)
  {
    cout << "greater number is : " << num2;
  }
  else if (num1 > num2)
  {
    cout << "greater number is : " << num1;
  }
  else
  {
    cout << "Both number are equal";
  }
}