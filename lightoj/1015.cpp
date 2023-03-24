#include<bits/stdc++.h>
using namespace std;


int main(){

  int t,i=1;
  cin >> t;

  while (t--){
    int n,tmp,sum=0;
    cin >>n;
    for (int i = 0; i < n; i++)
    {
      cin>>tmp;
      if (tmp>=0)
      {
        sum+=tmp;
      }
      
    }
    cout << "Case " << i << ": " << sum << endl;
    i++;
    }
}