#include <bits/stdc++.h>
using namespace std;
int phi[1000061], mark[1000061];
void sievePhi(int n)
{
  // int i,j;

  for (int i = 1; i <= n; i++)
  {
    phi[i] = i;
  }
  phi[1] = 1;
  mark[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    if (!mark[i])
    {
      for (int j = i; j <= n; j += i)
      {
        mark[j] = 1;
        phi[j] = phi[j] / i * (i - 1);
      }
    }
  }
}

int normPhi(int n)
{
  int ret = n;
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      while (n % i == 0)
      {
        n /= i;
      }
      ret -= ret / i;
    }
  }
  if (n>1)
  {
    ret-= ret/n;
  }
  return ret;
  
}

int main()
{
  // sievePhi(10);
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << phi[i] << "\t";
  // }
  cout<<normPhi(9)<<endl;
}