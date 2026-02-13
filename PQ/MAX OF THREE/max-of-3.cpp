#include <iostream>
using namespace std;
int main()
{
  // int num1;
  // int num2;
  // int num3;
  // cout << "Enter three numbers : " << endl;
  // cin >> num1;
  // cin >> num2;
  // cin >> num3;
  // if (num1 > num2 && num1 > num3)
  // {
  //   cout << "First number is greater. ";
  // }
  // else if (num2 > num1 && num2 > num3)
  // {
  //   cout << "Second number is greater. ";
  // }
  // else if (num3 > num1 && num3 > num2)
  // {
  //   cout << "third number is greater. ";
  // }

  // else
  // {
  //   cout << "All number are equal";
  // }

  // second approach
  int num1;
  int num2;
  int num3;
  cin >> num1;
  cin >> num2;
  cin >> num3;

  int greatest = num1;

  if (num2 > greatest)
    greatest = num2;

  if (num3 > greatest)
    greatest = num3;

  cout << "Greatest number is: " << greatest;
}
