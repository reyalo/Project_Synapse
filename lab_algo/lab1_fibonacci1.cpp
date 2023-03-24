// Nadem Mahmod Reyal(1803116)

#include <bits/stdc++.h>
using namespace std;

int c1, c2, c3;

int fibo(int n)
{
  if (n == 1)
  {
    c1 += 2; // for n==2 and return
    return 1;
  }

  if (n == 2)
  {
    c1 += 2; // for n==2 and return
    return 1;
  }
  c1++;    // for return
  c1 += 2; // for n-1 and n-2
  c1++;    // for function call
  return fibo(n - 1) + fibo(n - 2);
}

int fibo2(int n)
{
  int *arr = new int[n + 1];
  c2++; // for array init and n+1
  arr[0] = 0;
  arr[1] = 1;
  c2 += 2; // for arr[0] and arr[1]
  c2++;    // for i = 2
  for (int i = 2; i <= n; i++)
  {
    c2++; // for i <= n
    arr[i] = arr[i - 1] + arr[i - 2];
    c2+= 2; // for i-1 and i-2
    c2 += 2; // for aboves operation
    c2++;    // for i++
  }
  c2++; // for return
  return arr[n];
}
// int fibo3(int n)
// {
//   int a = 0, b = 1, r;
//   if (n == 1)
//   {
//     c3 += 3; // for n==1, return and function call
//     return 1;
//   }
//   c3++; // for i = 2
//   for (int i = 2; i <= n; i++)
//   {
//     c3++; // for i<=n
//     r = a + b;
//     a = b;
//     b = r;
//     c3 += 4; // for aboves operation
//     c3++;    // for i++
//   }
//   c3 += 2; // for return and function call
//   return r;
// }

int main()
{
  cout << fibo(13) << endl;
  cout << c1 << endl;
  cout << fibo2(13) << endl;
  cout << c2 << endl;
  
}