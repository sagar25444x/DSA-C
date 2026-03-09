#include <iostream>
using namespace std;

// no arguement and no return
void greet()
{
  cout << "good morning";
}
// no arguement and return
int substract()
{
  int a = 5;
  int b = 2; // JAHA JAHA REURN HORHA WAHA COUT HOYEGA
  int c = a - b;
}
// ARGUEMENT AND NO RETURN
void hello(string name)
{
  cout << "Hello" << name << endl;
}
// arguemetn and return
int add(int a, int b)
{
  int c = a + b;
  return c;
}

int main()
{

  greet();
  cout << substract << endl;
  hello("SAGAR");
  cout << add(10, 20) << endl;

  return 0;
}