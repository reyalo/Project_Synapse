#include <bits/stdc++.h>
using namespace std;
//with comp function

bool comp(string s1, string s2)
{
  if (s1.size() == s2.size())
  {
    return s1 < s2;
  }
  else
  {
    return s1.size() < s2.size();
  }
}

vector<string> unsorted = {
    "6",
    "31415926535897932384626433832795",
    "1",
    "3",
    "10",
    "3",
    "5",
    "15"};
// sorting
sort(unsorted.begin(), unsorted.end(), comp);

// now the vector looks like:
//   1
//   3
//   3
//   5
//   10
//   15
//   31415926535897932384626433832795

int main()
{
  /* CODE */
}