#include <bits/stdc++.h>
using namespace std;
#include <vector>
vector<int> divisors[1000002];

void divisor(int n)
{
  int i, j;
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j += i)
    {
      divisors[j].push_back(i);
    }
  }
}

int main()
{
  int n;

  cin >> n;
  divisor(n);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < divisors[i].size(); j++)
    {
      cout << divisors[i][j] << "\t";
    }
    cout << endl;
  }
}