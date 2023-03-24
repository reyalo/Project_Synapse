#include <bits/stdc++.h>
using namespace std;
long long arr[32768];
void fl()
{
  arr[0] = 0;
  arr[1] = 1;
  int ptr = 2;
  for (int i = 1; i < 15; i++)
  {
    long long power = pow(26, i);
    int k = ptr;
    for (int j = 0; j < ptr; j++, k++)
    {
      arr[k] = arr[j] + power;
    }
    ptr = k;
  }
}

// long long f(int a)
// {
//   long long ans;
//   for (int i = 0; i < a; i++)
//   {
//     // if(i==13) continue;
//     ans += pow(26, i);
//   }
//   return ans;
// }

int main()
{
  // cout << f(14) << endl;
  // long long a;
  // a = pow(26,14);
  // cout << a << endl;
  fl();
  // // cout << arr[17000];
  for (int i = 0; i < 16385; i++)
    {
      cout<<i<<" "<<arr[i]<<endl;
    }
}