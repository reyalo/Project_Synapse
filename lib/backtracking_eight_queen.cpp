#include <bits/stdc++.h>
using namespace std;

int n = 8;
int queen_pos[20], column[20], diagonal_minus[40], diagonal_plus[40];

void eightQueen(int row)
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

  for (int col = 1; col <= n; col++)                                   //! Chase board left to right denote col and up to down denote row
  {
    if (column[col] || diagonal_minus[col - row + n] || diagonal_plus[col + row])  //! diagonal_minus array index can not be 0.so we add offset n.
      continue;

    queen_pos[row] = col;
    column[col] = diagonal_minus[col - row + n] = diagonal_plus[col + row] = 1;

    eightQueen(row + 1);
    column[col] = diagonal_minus[col - row + n] = diagonal_plus[col + row] = 0;
  }
}

int main()
{
  eightQueen(1);
}