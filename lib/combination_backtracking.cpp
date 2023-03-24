#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
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

int n, r; //! n=total symbol,r=how many symbol has been taken
int number[10];

void solve(int pos, int prev_used)
{
  if (pos >= r)
  {
    for (int i = 0; i < r; i++)
    {
      cout << number[i] << " ";
    }
    cout << endl;
    return;
  }
  for (int i = prev_used + 1; i <= n; i++)
  {
    number[pos] = i;
    solve(pos + 1, i);
  }
}

void solve2(int pos_symbol, int left) //! 104 page(shanto vai)
{
  if (left > n - pos_symbol + 1)
  {
    return;
  }

  // if (left == 0 || pos_symbol > n)
  if (left == 0)
  {
    for (int i = 0; i < r; i++)
    {
      cout << number[i] << " ";
    }
    cout << endl;
    return;
  }

  solve2(pos_symbol + 1, left);

  number[r - left] = pos_symbol;
  solve2(pos_symbol + 1, left - 1);
}

void solve3(int pos, int j)
{
  
  if (j==2)
  {
    for (int i = 0; i < r; i++)
    {
      cout << number[i] << " ";
    }
    cout << endl;
    return;
  }
  if (pos>n)
    return;

  for (int i = 0; i < r; i++)
  {
    if (j == 2 && i == 1)
    {
      solve3(pos + 1, j);
    }
    else
    {
      if (i)
      {
        number[j] = pos;
        solve3(pos + 1, j + 1);
      }
      else
      {
        solve3(pos + 1, j);
      }
    }
  }
}

int main()
{
  n = 4;
  r = 2;
  // solve(0, 0);
  // solve2(1, r);
  solve3(1, 0);
}
