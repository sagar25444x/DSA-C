#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int row, col;
  cout << "Enter size of matrix";
  cin >> row >> col;

  vector<vector<int>> mat(row, vector<int>(col));

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> mat[i][j];
    }
  }

  // spiral matrix
  

  return 0;
}