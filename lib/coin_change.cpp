#include <bits/stdc++.h>
using namespace std;
#define inf 999999
#define MAX_N 20
#define MAX_W 1000
int coin[MAX_N];
int nset[MAX_N];
int coinLimit[MAX_N];
int n, c; // number of coin
// int dp[MAX_N][MAX_W];

int f(int i, int w)
{
  if (w == 0) //! if w is 0 then this line should be end and we can find this line result by adding all ancestor result
    return 0;
  if (w < 0) //! w is already cross 0 and be negative
    return inf;
  if (i == n) //! if array is end
    return inf;

  //! this variation dp[][] no need

  int val1 = (1 + f(i + 1, w - coin[i])); //! By using i-th coin
  int val2 = f(i + 1, w);                 //! Without using i-th coin
  return min(val1, val2);                 // we need minimum of two result
}

int coin_limit(int i, int w)
{
  if (w == 0) //! if w is 0 then this line should be end and we can find this line result by adding all ancestor result
    return 0;
  if (w < 0) //! w is already cross 0 and be negative
    return inf;
  if (i == n) //! if array is end
    return inf;

  //! this variation dp[][] no need

  int val1 = (1 + coin_limit(i, w - coin[i])); //! By using i-th coin
  int val2 = coin_limit(i + 1, w);             //! Without using i-th coin
  return min(val1, val2);
}

int subset_sum(int i, int w)
{
  if (w == 0)
    return 1;
  if (i == n)
    return 0;

  int val1 = (subset_sum(i + 1, w - nset[i]));
  int val2 = (subset_sum(i + 1, w));
  return val1+val2;
}

void subset_sum_self(int i, int w)
{
  if (w == 0)
  {
    c++;
    return;
  }
  if (i == n)
    return;

  subset_sum_self(i + 1, w - nset[i]);
  subset_sum_self(i + 1, w);

  return;
}

int main()
{
  n = 5;
  coin[0] = 2;
  coin[1] = 5;
  coin[2] = 9;
  coin[3] = 13;
  coin[4] = 15;
  // coin[0] = 2;
  // coin[1] = 3;
  coinLimit[0] = 3;
  coinLimit[1] = 3;
  // coinLimit[2] = 3;
  // coinLimit[3] = 3;
  // coinLimit[4] = 3;
  // cout<<coin[5]<<endl;
  // cout << f(0, 6) << endl;
  // cout << coin_limit(0, 30) << endl;
  nset[0] = 5;
  nset[1] = 15;
  nset[2] = 3;
  nset[3] = 17;
  nset[4] = 12;
  subset_sum_self(0, 20);
  cout << c << endl;
  cout<<subset_sum(0, 20)<<endl;
}