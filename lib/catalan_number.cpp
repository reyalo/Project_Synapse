#include<bits/stdc++.h>
using namespace std;
//It is less efficient and time complexity is high
long long catalanNumber(int n){
  long long res = 0;

  if (n<=1)
  {
    return 1;
  }
  for (int i = 0; i < n; i++)
    {
      res += catalanNumber(i) * catalanNumber(n - i - 1);
    }
  return res;
}



long long ncr(int n,int r){
  long long ans = 1;
  if (r>n-r)
  {
    r=n-r;
  }
  for (int i = 1; i <= r; i++)
    {
      ans *= n - r + i;
      ans /= i;
    }
  
  return ans;

}
//It is most efficient and less time complexity
long long catalanNumber2(int n){
  
  return (ncr(2*n,n))/(1+n);
}

  int main()
  {
    cout << catalanNumber2(50) << endl;
    // cout<<ncr(5,1)<<endl;
  }