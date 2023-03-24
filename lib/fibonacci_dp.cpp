#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200
ll dp[MAX + 1];

ll fibonacci_dp(ll n)
{
  dp[0] = 0;
  dp[1] = 1;
  if (dp[n] != -1)
    return dp[n];
  dp[n] = fibonacci_dp(n - 1) + fibonacci_dp(n - 2);
  return dp[n];
}

int main()
{
  memset(dp, -1, sizeof(dp));
  cout<<fibonacci_dp(100)<<endl;
}