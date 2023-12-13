#include <bits/stdc++.h>
using namespace std;
//it is not efficient but bigmod2 is efficient;
int bigmod2(int a, int b, int m)
{
  if (!b)
  {
    return 1;
  }
  if (b % 2 == 0)
  {
    return ((bigmod2(a, b / 2, m)) * (bigmod2(a, b / 2, m))) % m; //it is not efficient
  }
  else //it will work without else because here we use return statement and it will back if the if condition will be true
  {
    return ((bigmod2(a, b / 2, m)) * (bigmod2(a, b / 2, m)) * a) % m; //it is not efficient
  }
}

//it is more efficient.
//when it will be used replace int by ll
int bigmod(int a, int b, int m)
{
  if (!b)return 1;

  int ans = bigmod(a, b / 2, m);

  ans = (ans * ans) % m;

  if (b & 1)return (ans * a) % m;

  return ans;
}

//! same code as bigmod but here you can understand clearly whats happend
int bigmod0(int a, int exp, int mod)
{
  if (exp==0)
    return 1;

  int ans = bigmod0(a, exp / 2, mod);

  ans = (ans * ans) % mod;

  if (exp % 2==1)
    return (ans * a) % mod;

  return ans;
}

int main()
{

  cout << bigmod(32, 100, 13) << endl;
  
}
