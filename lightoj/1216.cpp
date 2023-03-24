#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main()
{

  int t, i = 1;
  double r1,r2,h,p,ratio,radius,volume;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    cin >> r1>>r2>>h>>p;
    ratio = (r1-r2)/h;
    r1 = (r2+p*ratio);
    // cout<<r1<<endl;

    volume = (pi * p * (r1 * r1 + r1 * r2 + r2 * r2)) / 3.0;

    cout << fixed << setprecision(9) << "Case " << i << ": " << volume << endl;

    i++;
  }
}