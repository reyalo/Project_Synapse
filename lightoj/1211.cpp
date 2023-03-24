#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main()
{

  int t,tt, i = 1;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    int x1 = 1, y1 = 1, z1 = 1, x2 = 1000, y2 = 1000, z2 = 1000, volume, a, b, c, d, e, f;
    cin >> tt;
    for (int j = 0; j < tt; j++)
    {
      cin>>a>>b>>c>>d>>e>>f;
      x1 = max(a,x1);
      y1 = max(b,y1);
      z1 = max(c,z1);
      x2 = min(d,x2);
      y2 = min(e,y2);
      z2 = min(f,z2);
    }
    if (x2>x1&&y2>y1&&z2>z1)
    {
      volume = (x2 - x1) * (y2 - y1) * (z2 - z1);
    }
    else
    {
      volume =0;
    }
    
    
    

    
    cout << "Case " << i << ": " << volume << endl;

    i++;
  }
}