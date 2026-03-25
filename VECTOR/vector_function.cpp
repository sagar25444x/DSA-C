#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  // for sorting
  vector<int> a = {1, 4, 3, 2, 5, 6, 9, 7, 8, 10};
  sort(a.begin(), a.end());
  cout << "sorted order ascending" << endl;
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  // sort in descending
  cout << "sorted order descending" << endl;
  sort(a.begin(), a.end(), greater<int>());
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
  cout << endl;

  // vector ke first index pe kya ho jab pata krna ho
  cout << "Front element : " << a.front() << endl; // batata hai vector mai konsaa first number hai

  // vector ke last index pe kya ho jab pata krna ho
  cout << "Last element: " << a.back() << endl; // batata hai vector mai konsaa last number konsa hai

  // jab hume koi particular index ka number pata krna hai
  cout << "particular index: " << a.at(2) << endl; // vector mai end index pe kinsa number hai batayega

  // hume jab ke vector ke bich mai number insert krna hai
  cout << "after inserting: " << endl;
  a.insert(a.begin() + 2, 100);
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  //agar 

  return 0;
}