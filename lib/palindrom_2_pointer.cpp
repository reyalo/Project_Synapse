/*

                                      ███████╗░██╗░░░██╗███████╗░
                                      ██╔════╝╗╚██╗░██╔╝██╔════╝╗
                                      █████╗░░║░╚████╔╝░█████╗░░║
                                      ██╔══╝░░║░░╚██╔╝░░██╔══╝░░║
                                      ███████╗║░░░██║░░░███████╗║
                                      ╚══════╝╝░░░╚═╝░░░╚══════╝╝


*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef vector<iii> viii; // variable.fi.fi,variable.fi.se,variable.se
typedef vector<vi> vvi;   // 2d vector
typedef vector<vl> vvl;   // 2d vector
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<char, int> mci;
typedef map<string, string> mss;
typedef map<int, int>::iterator mitr;
typedef map<ll, ll>::iterator mlitr;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
#define sp " "
#define bn begin()
#define en end()
#define fi first
#define se second
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define FOR(a, b, c) for (auto a = (b); (a) < (c); ++(a))
#define F0R(a, b) FOR(a, 0, (b))
// int a, b, c;
int dp[4001];
bool cmp(ii &a, ii &b)
{
  cout << "HE" << endl;
  return a.se < b.se;
}
bool is_pali(string s)
{
  int n, m;
  n = s.size();
  m = 1 + n >> 1;
  for (auto i = 0; i < m; i++)
  {
    if (s[i] != s[n - i - 1])
      return 0;
  }
  return 1;
}

int main()
{
  fastio;

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    int ans = n + 1;
    for (int c = 0; c < 26; ++c)
    {
      // main part started
      int l = 0, r = n - 1, cnt = 0;
      while (l <= r)
      {
        if (s[l] == s[r])
        {
          l++, r--;
        }
        else if (s[l] == char('a' + c))
        {
          cnt++, l++;
        }
        else if (s[r] == char('a' + c))
        {
          cnt++, r--;
        }
        else
        {
          cnt = n + 1;
          break;
        }
      }
      ans = min(ans, cnt);
      // main part ended
    }
    if (ans == n + 1)
      ans = -1;
    cout << ans << '\n';

  // cout << endl;
  done:;
  }
}
