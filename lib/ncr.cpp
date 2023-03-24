#include <bits/stdc++.h>
using namespace std;

//most efficient ncr method
long long ncr(int n, int r)
{
  long long ans = 1;
  if (r > n - r)
  {
    r = n - r;
  }
  for (int i = 1; i <= r; i++)
  {
    ans *= n - r + i;
    ans /= i;
  }

  return ans;
}

int main()
{
  
  cout<<ncr(5,1)<<endl;
}