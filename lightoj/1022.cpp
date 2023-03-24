#include <bits/stdc++.h>
using namespace std;
double pi=2*acos(0.0);
int main()
{

  int t, i = 1;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    double n, tmp, sum = 0;
    cin >> n;
    sum = n*n*(4-pi);
    cout << fixed << setprecision(2) <<"Case " << i << ": " << sum << endl;
    i++;
  }
}