#include <bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3
int color[100], city, bridge;
int somporko[100][100];
vector<int> adj[100];

void visitDfs(int x)
{
  color[x] = GRAY;
  for (int i = 0; i < city; i++)
  {
    if (somporko[x][i] == 1)
    {
      if (color[i] == WHITE)
      {
        visitDfs(i);
      }
    }
  }
  color[x] = BLACK;
}


void visitDfs2(int x)
{
  color[x] = 1;
  for (int i = 0; i < adj[x].size(); i++)
  {
    if (color[i] != 1)
    {
      visitDfs2(i);
    }
  }
}



void dfs()
{
  for (int i = 0; i < city; i++)
  {
    color[i] = WHITE;
  }
  for (int i = 0; i < city; i++)
  {
    if (color[i] == WHITE)
    {
      visitDfs(i);
    }
  }
}

void dfs(int startingNode)
{
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
}
