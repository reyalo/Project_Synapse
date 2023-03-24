#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int failure[MAX];

void failure_table_generator(string pattern, int n)
{
  failure[0] = 0; //! it is empty string not first character.
  failure[1] = 0;
  for (int i = 2; i <= n; i++)
  {
    int j = failure[i - 1]; //! bortoman character er ager character tir failure table neua hoyeche.
    while (true)
    {
      if (pattern[i - 1] == pattern[j]) // pattern[j] is the next string of failure j length string. etar mane holo j = failure[i-1]. ekhon patter[j] dara poroborti character bujay.
      {
        failure[i] = j + 1;
        break;
      }
      if (j == 0)
      {
        failure[i] = 0;
        break;
      }
      j = failure[j]; //! bortoman character er ager character tir prefix er next character er sathe jehetu match khay ni tai prefix er abar prefix nilam.
    }
  }
}

bool kmp(string text, string pattern)
{
  int n = text.size();
  int m = pattern.size();
  failure_table_generator(pattern, m);
  int i = 0, j = 0;
  while (true)
  {
    if (j == n)
      return false;

    if (text[j] == pattern[i])
    {
      i++;
      j++;
      if (i == m)
        return true;
    }
    else
    {
      if (i == 0) //! jehutu pattern er first character match khay ni tai j++ kora hoyeche.
        j++;
      else
        i = failure[i]; //! jehutu ekhon match khay ni tai prefix use kora hoyeche.
    }
  }
  return false;
}

int main()
{
  ;
}