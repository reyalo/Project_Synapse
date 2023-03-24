#include <bits/stdc++.h>
using namespace std;

void partial_st(int arr[], int st, int ed)
{
  //! Processing Part or Main Part

  vector<int> vt;

  for (int i = st; i <= ed; i++)
  {
    vt.push_back(arr[i]);
  }
  sort(vt.begin(), vt.end());

  for (int i = st, j = 0; i <= ed; i++, j++)
  {
    arr[i] = vt[j];
  }

  //! Print Part of array
  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int n = 11;
  int arr[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  // partial_st(arr, 1, 4);

  vector<int> vv(n);
  for (int i = 0; i < n; i++)
  {
    vv[i] = arr[i];
  }
  sort(vv.begin() + 1, vv.begin() + 7 + 1);

  for (int i = 0; i < n; i++)
  {
    cout << vv[i] << " ";
  }
  cout << endl;
}