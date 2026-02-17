#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n;
  int sum=0;
  int i=0;
  cout << "enter  number :  ";
  cin >> n;
  while(i<=n ){
    sum=sum+i;
    i++;
  }
  cout<<sum;
}