#include <bits/stdc++.h>
using namespace std;

int n = 4;
int queen_pos[20], column[20], diagonal_minus[40], diagonal_plus[40];

void nQueen(int row)
{
  if (row > n)
  {
    for (int i = 1; i <= n; i++)
    {
      cout << i << queen_pos[i] << " ";
    }
    cout << endl;
    return;
  }

  for (int col = 1; col <= n; col++) 
  {
    if (column[col] || diagonal_minus[col - row + n] || diagonal_plus[col + row]) 
      continue;

    queen_pos[row] = col;
    column[col] = diagonal_minus[col - row + n] = diagonal_plus[col + row] = 1;

    nQueen(row + 1);
    column[col] = diagonal_minus[col - row + n] = diagonal_plus[col + row] = 0;
  }
}

int main()
{
  nQueen(1);
}