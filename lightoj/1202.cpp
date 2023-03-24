#include <bits/stdc++.h>
using namespace std;
double pi = 2 * acos(0.0);



int main()
{

  int t, i = 1,r1,c1,r2,c2;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    
    cin >>r1>>c1>>r2>>c2;
    if ((r1 % 2 + c1 % 2)%2 == (r2 % 2 + c2 % 2)%2)
    {
      if (abs(r1-r2)==abs(c1-c2))
      {
        cout << "Case " << i << ": "
             << 1 << endl;
      }else
      {
        cout << "Case " << i << ": "
             << 2 << endl;
      }
      
      
    }
    else
    {
      cout << "Case " << i << ": "
           << "impossible" << endl;
    }
    
    
      

    i++;
  }
}