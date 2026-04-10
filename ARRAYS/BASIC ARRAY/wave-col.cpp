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

  // wave row print krna
  for (int i = 0; i < col; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < row; j++) // traversing row from top to bottom
      {
        cout << mat[i][j] << "  ";
      }
    }
    else
    {
      for (int j = row - 1; j >= 0; j--) // traversing bottom to up
      {
        cout << mat[i][j] << "  ";
      }
    }
  }

  return 0;
}