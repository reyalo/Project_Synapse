#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];
int table_dp[1000][1000];
int c;

int knapSack(int w, int weight[], int value[], int n)
{
  if (n == 0 || w == 0)
  {
    return 0;
  }

  if (weight[n] > w) //! we have used weight[n-1] for n-th value
  {
    return knapSack(w, weight, value, n - 1);
  }
  else
  {
    return max(value[n] + knapSack(w - weight[n], weight, value, n - 1), knapSack(w, weight, value, n - 1)); //! we have used weight[n-1] for n-th value
  }
}

int knapSack2(int w, int weight[], int value[], int n)
{
  if (n <= 0 || w <= 0) //! w<=0 this condition no nedd because of weight[n] > w
    return 0;

  c++;
  if (dp[n][w] != -1)
  {
    return dp[n][w];
  }

  if (weight[n] > w) //! we have used weight[n-1] for n-th value
  {
    dp[n][w] = knapSack2(w, weight, value, n - 1);
  }
  else
  {
    dp[n][w] = max(value[n] + knapSack2(w - weight[n], weight, value, n - 1), knapSack2(w, weight, value, n - 1)); //! we have used weight[n-1] for n-th value
  }
  return dp[n][w];
}
//! This code is very important for understanding dynamic programming.If you don't understand please check notebook.
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
  // memset(dp, -1, sizeof dp);
  // cout<<dp[5][5];

  int val[] = {0, 1, 4, 6};
  int wt[] = {0, 2, 3, 4,5};
  int W = 6;
  int n = sizeof(val) / sizeof(val[0]) - 1;
  // cout << knapSack(W, wt, val, n) << endl;
  // cout<<knapSack2(W,wt,val,n)<<endl;
  cout << knapsack_dp(W, wt, val, n) << endl;
  // cout<<c<<endl;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      cout<<table_dp[i][j]<<"\t ";
    }
    cout<<endl;
    cout<<endl;
  }

  return 0;
}