#include <bits/stdc++.h>
using namespace std;
//it is not efficient but bigmod2 is efficient;
int bigmod(int a, int b, int m)
{
  if (!b)
  {
    return 1;
  }
  if (b % 2 == 0)
  {
    return ((bigmod(a, b / 2, m)) * (bigmod(a, b / 2, m))) % m; //it is not efficient
  }
  else //it will work without else because here we use return statement and it will back if the if condition will be true
  {
    return ((bigmod(a, b / 2, m)) * (bigmod(a, b / 2, m)) * a) % m; //it is not efficient
  }
}

//it is more efficient.
int bigmod2(int a, int b, int m)
{
  if (!b)
    return 1;

  int x = bigmod(a, b / 2, m);

  x = (x * x) % m;

  if (b & 1)
    return (x * a) % m;

  return x;
}

int main()
{

  cout << bigmod2(32, 100, 13) << endl;
  
}
