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

  // wave column print krna
  for (int j = 0; j < col; j++)
  {
    if (j % 2 == 0)
    {
      for (int i = 0; i < row; i++) // traversing row from top to bottom
      {
        cout << mat[i][j] << "  ";
      }
    }
    else
    {
      for (int i = row - 1; i >= 0; i--) // traversing bottom to up
      {
        cout << mat[i][j] << "  ";
      }
    }
  }

  return 0;
}