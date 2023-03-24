#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  int mul = 1;
  for (int i = 1; i <= n; i++)
    mul *= i;
  return mul;
}


int main()
{
  int arr[] ={1,2,3,4,5,6,7,8,9,10,11,12};
  int n = sizeof(arr)/4;
  int fn = factorial(n);
  int c=0;
  for (int i = 0; i < fn; i++)
  {
    // cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    int bf = arr[0];
    for (int i = 1; i < n; i++)
    {
      bf = gcd(bf,arr[i]*(i+1));
    }
    // cout<<bf<<endl;
    if (bf>1)
    {
      c++;
    }
    
    next_permutation(arr,arr+n);
  }
  cout<<c<<endl;
}