#include <bits/stdc++.h>
using namespace std;
#include<cstdio>
#define pi acos(-1.0)

int main()
{

  int t, i = 1;
  double ax, ay, bx, by, cx, cy, dx, dy;
  double area, a, b, c,s,d;

  cin >> t;

  // cout<<pi;

  while (t--)
  {
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    dx = ax + (cx - bx);
    dy = ay + (cy - by);

    a = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    b = sqrt(pow(ax - dx, 2) + pow(ay - dy, 2));
    c = sqrt(pow(dx - bx, 2) + pow(dy - by, 2));
    area = a*b*cos((a*a+b*b-c*c)/(2.0*a*b));


    // s = (a + b + c) / 2.0;
    // d = sqrt(s * (s - a) * (s - b) * (s - c));
    // area = (2.0*d);
    // printf("Case %d: %.0lf %.0lf %.0lf\n", i, dx, dy, area);

    
    // s = (a + b + c) / 2.0;
    // area =2* sqrt(s * (s - a) * (s - b) * (s - c));

    cout << fixed << setprecision(0) << "Case " << i << ": " << dx << " " << dy << " " << area << endl;
    i++;
  }
}