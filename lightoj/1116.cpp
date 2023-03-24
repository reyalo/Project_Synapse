#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long int t, j = 1, x = 0, y = 0, w, rt;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    cin >> w;

    if (w & 1)
    {
      cout << "Case " << j << ": "
           << "Impossible" << endl;
    }
    else
    {
      
      for (int i = 2; i <= w; i*=2)
      {
        if ((w / i)%2)
        {
          cout << "Case " << j << ": " << w / i << " " << i << endl;
          break;
        }
        
      }
      
      
    }

    j++;
  }
}