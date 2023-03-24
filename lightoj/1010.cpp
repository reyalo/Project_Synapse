#include <iostream>
using namespace std;
int main()
{
  int t, i = 1, n, m, res, tt, qt;
  cin >> t;

  while (t--)
  {

    cin >> n >> m;
    if (n == 1 || m == 1)
    {
      res = m * n;
    }
    else if (n == 2 || m == 2)
    {

      tt = n * m;
      qt = (tt - 1) / 4;
      res = (qt % 2 == 0) ? (tt - 2 * qt) : 2 * (qt + 1);
    }
    else
    {
      res = (n * m) / 2 + (n * m) % 2;
    }

    cout << "Case " << i << ": " << res << endl;
    i++;
  }
  return 0;
}