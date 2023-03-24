#include <bits/stdc++.h>
using namespace std;
void backtrac_permutation(string s, int l, int h)
{
  if (l == h) // base
  {
    cout << s << endl;
    return;
  }
  for (int i = l; i <= h; i++)
  {
    swap(s[l], s[i]);
    backtrac_permutation(s, l + 1, h);
    swap(s[l], s[i]);
  }
}

int main()
{
  string s = "abc";
  int n = s.length();
  backtrac_permutation(s, 0, n - 1);
}