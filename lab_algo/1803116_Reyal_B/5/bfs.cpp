#include <bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3
int color[100], city, bridge;
int somporko[100][100], abbaAmma[100], durotto[100];

void bfs(int startingNode)
{
  for (int i = 1; i <= city; i++)
  {
    color[i] = WHITE;
    durotto[i] = INT_MIN;
    abbaAmma[i] = -1;
  }
  durotto[startingNode] = 0;
  abbaAmma[startingNode] = -1;
  queue<int> q;
  q.push(startingNode);
  while (!q.empty())
  {
    int x;
    x = q.front();
    q.pop();
    color[x] = GRAY;
    for (int i = 1; i <= city; i++)
    {
      if (somporko[x][i] == 1)
      {
        if (color[i] == WHITE)
        {
          abbaAmma[i] = x;
          q.push(i);
          durotto[i] = durotto[x] + 1;
        }
      }
    }
    color[x] = BLACK;
  }
}

int main()
{
  cin >> city >> bridge;
  int v1, v2;
  for (int i = 0; i < bridge; i++)
  {
    cin >> v1 >> v2;
    somporko[v1][v2] = 1;
    somporko[v2][v1] = 1;
  }
  bfs(1);
  cout << abbaAmma[5] << endl;
  cout << durotto[6] << endl;
}