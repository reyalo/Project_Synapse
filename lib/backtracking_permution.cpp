#include <bits/stdc++.h>
using namespace std;
int used[20], number_set[20];
// int n= 3;

void backtracking_permutation(int pos, int n)
{
  //! if all block/cell are fillupd then show this number_set.
  if (pos == n)
  {
    for (int i = 0; i < n; i++)
    {
      cout << number_set[i] << " ";
    }
    cout << endl;
    return;
  }

  //! It is main part of algorithm. HSC e te jevabe hate kolome permution kortam sevabe ekta ekta kore number bosate hobe abar sese uthiye felte hobe.
  for (int i = 0; i < n; i++)
  {
    if (!used[i])
    {
      used[i] = 1;
      number_set[pos] = i;
      backtracking_permutation(pos + 1, n);
      used[i] = 0;
    }
  }
}

int main()
{
  backtracking_permutation(0, 3);
}