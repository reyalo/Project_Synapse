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

void solve()
{
}

int main()
{
  // fastio;
  int t, tt;
  cin >> t;
  tt = 1;
  while (t--)
  {
    int q, i, j, ii, sz;
    char flag;
    string num;
    vii arpair;
    cin >> num;
    cin >> q;
    cout << "Case " << tt << "\n";
    while (q--)
    {
      cin >> flag;
      if (flag == 'I')
      {
        cin >> i >> j;
        arpair.pb(mp(i, j));
        
      }
      else
      {
        cin >> ii;
        sz = arpair.size();
        int c=0;
        for (int k = 0; k < sz; k++)
        {
          if (arpair[k].first <= ii && ii <= arpair[k].second)
          {
            c++;
          }
        }
        
        if (c&1)
        {
          cout << static_cast<char>(97 - num[ii-1]) << "\n";
        }else
        {
          cout<<num[ii-1]<<"\n";
        }
        
        
      }
    }
    tt++;
  }
}
