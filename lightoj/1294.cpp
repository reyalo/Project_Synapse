#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main()
{

  long long int t, i = 1,m,n;
  
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    cin >>n>>m;

    cout << "Case " << i << ": " << m*m*(n/(2*m)) << endl;
    i++;
  }
}