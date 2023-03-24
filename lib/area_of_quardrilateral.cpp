#include <bits/stdc++.h>
using namespace std;
void area()
{
  double a, b, c, d, e, f, t1, t2, t, s, area;
  cout << "Enter the four side\n";
  cin >> a >> b >> c >> d;
  cout << "Enter the angleSide:\n";
  cin >> e >> f;
  s = (a + b + c + d) / 2;
  t1 = acos((a * a + b * b - e * e) / (2 * a * b));
  t2 = acos((c * c + d * d - f * f) / (2 * c * d));
  cout << t1 << " " << t2 << endl;
  t = (t1 + t2) / 2;
  area = sqrt((s - a) * (s - b) * (s - c) * (s - d) - (a * b * c * d * cos(t) * cos(t)));
  cout << "The area is:" << area << " square feet\n";
}
int main()
{
  area();
  // cout << acos(0) * 180 / 3.141592;
}