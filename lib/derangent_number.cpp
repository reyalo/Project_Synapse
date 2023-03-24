#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define NUMBER 22
ll dp[NUMBER+1];


ll factorial(ll n)
{
  ll mul = 1;
  for (ll i = 1; i <= n; i++)
    mul *= i;
  return mul;
}

ll ncr(ll n, ll r)
{
  long long ans = 1;
  if (r > n - r)
  {
    r = n - r;
  }
  for (ll i = 1; i <= r; i++)
  {
    ans *= n - r + i;
    ans /= i;
  }

  return ans;
}
//! Derengent number by inclusive exclusive principle
ll derengentNumber(ll n){
  ll der = 0;
  for (ll i = 0; i<=n; i++)
    {
      der += pow(-1,i)*ncr(n,i)*factorial(n-i);
    }
  return der;
}


//! Derengent number by recursive away
ll derengentNumber2(ll n){
  if(n==1)
    return 0;
  if(n==2)
    return 1;
  
  return (n-1)*(derengentNumber2(n-1)+derengentNumber2(n-2));
}

//! Derengent number by dynamic-recursive away
ll derengentNumber3(ll n)
{
  dp[1] = 0;
  dp[2] = 1;
  if (dp[n] != -1)
    return dp[n];

  dp[n] = (n - 1) * (derengentNumber2(n - 1) + derengentNumber2(n - 2));

  return dp[n];
}

int main()
{
  memset(dp, -1, sizeof(dp));
  // cout<<derengentNumber(4)<<endl;
  // cout<<derengentNumber2(4)<<endl;
  // cout<<derengentNumber3(22)<<endl;
}