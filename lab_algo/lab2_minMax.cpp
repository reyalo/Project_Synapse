#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
#define fi first
#define se second

int c1, c2, c3;

ii min_max(int arr[], int l, int h) // Number of comparison = (3n/2)-2
{
  ii a, b, r,rt;
  //base case of recursion
  if (h - l <= 1)
  {
    if (h==l)
    {
      // if h==l no comparison occurred
      rt.fi = arr[l];
      rt.se = arr[l];
      return rt;
    }
    
    c1++; // for minmax check
    return minmax(arr[l], arr[h]);
  }
  //mid of range
  int m = (l + h) / 2;

  //minmax of left half
  a = min_max(arr, l, m);

  //minmax of right half
  b = min_max(arr, m + 1, h);

  //return part or merge part of recursion
  r.fi = min(a.fi, b.fi);
  r.se = max(a.se, b.se);
  c1 += 2; // for r.fi and r.se
  return r;
}

ii linearMinMax(int arr[], int n)  // Number of comparison = 2(n-2)+2
{

  ii r;
  r.fi = arr[0];
  r.se = arr[0];
  for (int i = 1; i < n; i++)
  {
    r.fi = min(r.fi, arr[i]);
    r.se = max(r.se, arr[i]);
    c3 += 2; // for r.fi and r.se
  }
  return r;
}

int main()
{
  int arr[] = {8, 2, 9, 3, 1, 6, 10, 8, 4, 15, 17, 11, 19, 13, 18, 12, 41, 34, 42};
  int n = sizeof(arr) / sizeof(arr[0]);
  ii a = min_max(arr, 0, n - 1);
  cout << a.fi << " " << a.se << endl;
  cout << c1 << endl;


  //Method 3
  ii b;
  b = linearMinMax(arr, n);
  cout << b.fi << " " << b.se << endl;
  cout << c3 << endl;
}