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

char s[100050];
int segTree[400050];

void update(int node, int L, int R, int l, int r)
{
  if (L > r || R < l)
    return;
  if (L >= l && R <= r)
  {
    segTree[node]++;
    return;
  }
  int mid = (R + L) / 2;
  update(node * 2, L, mid, l, r);
  update(node * 2 + 1, mid + 1, R, l, r);
}

void query(int node, int L, int R, int pos)
{
  if (pos < L || pos > R)
    return;
  if (L == R)
  {
    if (segTree[node] % 2)
    {
      s[L] = 97 - s[L];
    }
    segTree[node] = 0;
    return;
  }
  if (L != R && segTree[node])
  {
    segTree[2 * node] += segTree[node];
    segTree[2 * node + 1] += segTree[node];
  }
  int mid = (L + R) / 2;
  query(node * 2, L, mid, pos);
  query(node * 2 + 1, L, mid, pos);
}

void solve()
{
  cout<<"Hello World";
  int a = 0^1;
  cout<<a<<endl;
}

int main()
{
  fastio;
  int tc, k = 0, q, a, b, pos;
  char ch;
  cin >> tc;
  while (tc--)
  {

    cin >> s;
    int len = strlen(s);
    memset(segTree, 0, sizeof(segTree));
    cin >> q;
    cout << "Case " << ++k << ":" << endl;
    while (q--)
    {
      cin >> ch;
      if (ch == 'I')
      {
        cin >> a >> b;
        update(1, 0, len - 1, a - 1, b - 1);
      }
      else
      {
        cin >> pos;
        query(1, 0, len - 1, pos - 1);
        cout << s[pos - 1] << endl;
      }
    }
  }
  return 0;
}
