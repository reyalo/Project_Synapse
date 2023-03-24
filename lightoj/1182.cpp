#include <bits/stdc++.h>
using namespace std;
double pi = 2 * acos(0.0);

int binary(int n)
{
  int count = 0;
  while (n)
  {
    if (n % 2)
      count++;
    n = n / 2;
  }
  return count;
}

int main()
{

  int t, i = 1;
  cin >> t;
  // cout<<pi;

  while (t--)
  {
    int n;
    cin >> n;
    if(binary(n) % 2){
      cout << "Case " << i << ": " <<"odd" << endl;
    }else
    {
      cout << "Case " << i << ": "
           << "even" << endl;
    }
     
    i++;
  }
}