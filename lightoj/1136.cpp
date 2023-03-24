#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t, i = 1, n, m, count;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    count = 0;
    cin >> n >> m;
    if (n % 3 == 0 && m % 3 == 0)
    {
      count = ((m - n) / 3) * 2 + 1;
    }
    else if (n % 3 == 0 && m % 3 == 1)
    {
      count = ((m - n) / 3) * 2 + 1;
    }
    else if (n % 3 == 0 && m % 3 == 2)
    {
      count = ((m - n+1) / 3) * 2;
    }
    else if (n % 3 == 1 && m % 3 == 0)
    {
      count = ((m - n + 1) / 3) * 2;
    }
    else if (n % 3 == 1 && m % 3 == 1)
    {
      count = ((m - n) / 3) * 2;
    }
    else if (n % 3 == 1 && m % 3 == 2)
    {
      count = ((m - n) / 3) * 2 + 1;
    }
    else if (n % 3 == 2 && m % 3 == 0)
    {
      count = ((m - n) / 3) * 2 + 2;
    }
    else if (n % 3 == 2 && m % 3 == 1)
    {
      count = ((m - n + 1) / 3) * 2;
    }
    else if (n % 3 == 2 && m % 3 == 2)
    {
      count = ((m - n) / 3) * 2 + 1;
    }

    cout << "Case " << i << ": "
         << count << endl;

    i++;
  }
}