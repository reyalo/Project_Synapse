#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
  int mul=1;
  for (int i = 1; i <= n; i++)
      mul*=i;
  return mul;
}

int main()
{
  cout<<factorial(6);
  // cout<<gcd(15,20);
}