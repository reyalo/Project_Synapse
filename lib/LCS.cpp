#include<bits/stdc++.h>
using namespace std;
#define max_len 20
int dp[max_len][max_len];
string s1;

int lcs(int i, int j, string &s, string &w)
{
  int val1, val2;
  if (i == s.size() || j == w.size())
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];

  int ans = 0;
  if (s[i] == w[j])
  {
    s1 += s[i];
    ans = 1 + lcs(i + 1, j + 1, s, w);
  }
  else
  {
    val1 = lcs(i + 1, j, s, w);
    val2 = lcs(i, j + 1, s, w);
    ans = max(val1, val2);
  }
  dp[i][j] = ans;
  return dp[i][j];
}

//! It is same as lcs but here need more storage
int lcs2(string s, string w)
{
  if (s.length() == 0 || w.length() == 0)
    return 0;
  if (s[0] == w[0])
  {
    s.erase(0, 1);
    w.erase(0, 1);
    return 1 + lcs2(s, w);
  }
  else
  {
    string ts = s;
    string tw = w;
    ts.erase(0, 1);
    tw.erase(0, 1);
    int val1 = lcs2(s, tw);
    int val2 = lcs2(ts, w);
    return max(val1, val2);
  }
}

int lcs_self(int i, int j, string &s, string &w)
{
  if (i == s.size() || j == w.size())
    return 0;

  if (dp[i][j] != -1)
    return dp[i][j];

  if (s[i] == w[j])
    return 1 + lcs_self(i + 1, j + 1, s, w);

  return max(lcs_self(i, j + 1, s, w), lcs_self(i + 1, j, s, w)); //! if a return function is called inside if(),then no need to else
}

int main()
{
  memset(dp, -1, sizeof(dp));
  string s, w;
  s = "hellom";
  w = "hmrll";
  // cout << lcs(0, 0, s, w) << endl;
  cout << lcs_self(0, 0, s, w) << endl;
  cout << s1 << endl;
  // cout<<lcs2(s,w)<<endl;
}