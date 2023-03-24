#include<bits/stdc++.h>
using namespace std;
int prime[300], nPrime,mark[1000002];


void sieve(int n){
  int limit = sqrt(n+1);
  for (int i = 4; i <= n; i+=2)
    {
      mark[i]= 1;
    }
    cout<<limit<<endl;
  prime[nPrime++] = 2;
  for (int i = 3; i <= n; i+=2)
    {
      if (mark[i]==0)
      {
        prime[nPrime++] = i;
        if (i<=limit)
        {
          for (int j = i * i; j <= n; j += 2 * i) //j = i * i use because prev numbers are divisible by smallest prime// j += 2 * i use for skip even number;
          {
            mark[j] = 1;
          }
        }
        



      }
      
    }
  
}
int main(){
  sieve();
  for (int i = 0; i < nPrime; i++)
    {
      cout<<prime[i]<<"\t";
    }
}