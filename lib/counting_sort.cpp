#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

vi counting_sort(vi array)
{
  int range = 10000;
  vi count(range + 1);
  vi resulting(array.size());
  for (int i = 0; array[i]; i++)
  {
    count[array[i]]++;
  }
  for (int i = 2; i <= range; i++)
  {
    count[i] += count[i - 1];
  }
  for (int i = 0; array[i]; i++)
  {
    resulting[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }
  return resulting;
}
int main()
{
}