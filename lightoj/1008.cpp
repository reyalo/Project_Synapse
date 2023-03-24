#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i = 1, n, m, x, y, res, tt, qt;
  cin >> t;

  while (t--)
  {

    cin >> n;
    m = ceil(sqrt(n));
    if (n <= m * m - m)
    {
      x = m;
      y = n - (m - 1) * (m - 1);
    }
    else
    {
      x = m * m - n+1;
      y = m;
    }
    if (m%2==0)
    {
      swap (x,y);
    }
    
    cout << "Case " << i << ": " << x << " " << y << endl;
    i++;
  }
  return 0;
}