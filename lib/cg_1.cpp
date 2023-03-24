#include <bits/stdc++.h>
using namespace std;
int cn, n;
int possible[100];
int coin[100];

void solve_after()
{
  possible[0] = 1;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < cn; j++)
    {
      possible[i + coin[j]] |= possible[i];
      // cout<<i+coin[j]<<" "<<possible[i+coin[j]]<<endl;
    }
  }
}
void solve_before()
{
  possible[0] = 1;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j < cn; j++)
    {
      possible[i] |= possible[i-coin[j]];
      // cout<<i+coin[j]<<" "<<possible[i+coin[j]]<<endl;
    }
  }
}
int main()
{
  cin >> n;
  cn=3;
  coin[0]=2;
  coin[1]=5;
  coin[2]=10;
  solve_after();
  for (int i = 1; i < n; i++)
  {
    cout << possible[i] << " ";
  }
}