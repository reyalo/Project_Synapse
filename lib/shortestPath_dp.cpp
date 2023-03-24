#include <bits/stdc++.h>
using namespace std;
#define city 5
int dp[city];
int nodelist[city][city]; //city = number of node or max_n.nodelist = w[max_n][max_n](shafayet vai)

int shortestPath_dp(int u, int n) // u= starting node,n= ending node
{
  if (u == n - 1)
    return 0;
  //dp[n-1] = 0; //! alternate away of base case if(u==n-1)return 0;

  //! Retrive data from dynamic array 
  if (dp[u] != -1)
    return dp[u];

  //Recursive Part
  int ans = INT_MAX;
  for (int v = 0; v < n; v++) //! here check minmum distance from u to u's all adjecency node
  {
    if (nodelist[u][v])
      ans = min(ans, nodelist[u][v] + shortestPath_dp(v, n)); //! nodelist[u][v] = distance or cost(u-->v)
  }
  dp[u] = ans;  //! save the result of f(u) to dp list which can be use next time
  return dp[u]; //! returning result of f(u)
}

int main()
{
  memset(dp, -1, sizeof(dp));
}