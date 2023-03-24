//! sort(arr,arr+n,cmp)
//if cmp ==1 then A should be placed before B.



#include <bits/stdc++.h>
using namespace std;
struct Point
{
  int x, y;
} point[100];

bool compare(Point A, Point B)
{
  //! Everyone use this away
  if (A.x != B.x)
    return A.x < B.x;
  return A.y < B.y;

  //! I think belows code more efficient because if A == B this function returns 1 that means order of A and B won't change.
  // if (A.x != B.x)
  //   return !(A.x > B.x);
  // return !(A.y > B.y);
}

int main()
{
  int n = 5;
  point[0] = {4, 2};
  point[1] = {4, 1};
  point[2] = {3, 3};
  point[3] = {4, 1};
  point[4] = {4, 2};
  sort(point, point + n, compare);  //! third parameter refers to "if it become 1 first argument should be placed before second argument"
  for (int i = 0; i < n; i++)
  {
    cout << point[i].x << " " << point[i].y << endl;
  }
}