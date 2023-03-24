#include <bits/stdc++.h>
using namespace std;

int table_dp[1000][1000];

int knapsack_dp(int w, int weight[], int value[], int n)
{
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= w; j++)
    {
      if (i == 0 || j == 0)
      {
        table_dp[i][j] = 0;
      }
      if (weight[i] > j)
      {
        table_dp[i][j] = table_dp[i - 1][j];
      }
      else
      {
        table_dp[i][j] = max(value[i] + table_dp[i - 1][j - weight[i]], table_dp[i - 1][j]);
      }
    }
  }
  return table_dp[n][w];
}

int main()
{


  int val[] = {1, 6, 18, 22, 28};
  int wt[] = {1, 2, 5, 6, 7};
  int W = 6;
  int n = sizeof(val) / sizeof(val[0]) - 1;
  cout << knapsack_dp(W, wt, val, n) << endl;
  

  return 0;
}