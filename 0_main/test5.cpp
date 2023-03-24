#include "bits/stdc++.h"

using namespace std;
#define f_input freopen("input.txt", "r", stdin);
#define f_output freopen("output.txt", "w", stdout);

#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  f_input
      f_output
#endif

      int t;
  cin >> t;
  while (t--)
  {

    

    ll n;
    cin >> n;
    cout<<n<<" ";

    ll lo = 0, hi = 2e9;
    while (lo != hi)
    {
      ll avg = (lo + hi) / 2;
      if ((avg + 1) * (avg + 1) >= n)
        hi = avg;
      else
        lo = avg + 1;
    }

    cout << lo << "\n";
  }
}