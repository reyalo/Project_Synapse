#include <bits/stdc++.h>
using namespace std;
#include<vector>
vector<vector<int>> primeAna;

void primeAnalysis(int n)
{
  int c;
  for (int i = 2; i * i <= n; i++)
  {
    c = 0;
    vector<int> row;
    if (n % i==0)
    {
      while (n % i==0)
      {
        n /= i;
        c++;
      }
      row.push_back(i);
      row.push_back(c);
    }
    
    primeAna.push_back(row);
  }
  if (n>1)
  {
    vector<int> row;
    row.push_back(n);
    row.push_back(1);
    primeAna.push_back(row);
  }
  
}
int main(){
  // int n;
  // cin >> n;
  primeAnalysis(1675);
  for (int i = 0; i < primeAna.size(); i++)
    {
      for (int j = 0; j < primeAna[i].size(); j++)
        {
          cout<<primeAna[i][j]<<"\t";
        }
      cout << endl;
    }
}