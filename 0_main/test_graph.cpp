#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef pair<int, double> idd;
typedef pair<double, int> ddi;
typedef pair<double, double> ddd;
typedef pair<ll, ll> llll;
// typedef pair<ii, int> iii;
typedef pair<int, ii> iii;
typedef pair<int, string> is;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<llll> vll;
typedef vector<ii> vii;
typedef vector<li> vli;
typedef vector<il> vil;
typedef vector<idd> vid;
typedef vector<ddi> vdi;
// typedef vector<is> vis;
typedef vector<iii> viii; // variable.fi.fi,variable.fi.se,variable.se
typedef vector<vi> vvi;   // 2d vector
typedef vector<vl> vvl;   // 2d vector
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<double, int> mdi;
typedef map<int, ii> miii;
typedef map<int, vi> mivi;
typedef map<ll, ll> mll;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<char, int> mci;
typedef map<char, char> mcc;
typedef map<string, string> mss;
typedef map<int, int>::iterator mitr;
typedef map<ll, ll>::iterator mlitr;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
#define sp " "
#define ck cout<<"check-1";
#define ckk cout<<"check-2";
#define ckkk cout<<"check-3";
#define ckkkk cout<<"check-4";
#define ys cout<<"YES"<<el;
#define Ys cout<<"Yes"<<el;
#define no cout<<"NO"<<el;
#define No cout<<"No"<<el;
#define bn begin()
#define en end()
#define bk back()
#define rbn rbegin()
#define ren rend()
#define sz size()
#define et empty()
#define ft first
#define sd second
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define el '\n'
#define als(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define frin(b) for (auto i = (0); (i) < (b); ++(i))
#define fri(a, b) for (auto i = (a); (i) < (b); ++(i))
#define fric(a, b, c) for (auto i = (a); (i) < (b); (i) += (c))
#define frit(a) for (auto i = (a.bn); (i) != (a.en); ++(i))
#define fritr(a) for (auto i = (a.rbn); (i) != (a.ren); ++(i))
#define rfi(a, b) for (auto i = (a); (i) >= (b); --(i))
#define frjn(b) for (auto j = (0); (j) < (b); ++(j))
#define frj(a, b) for (auto j = (a); (j) < (b); ++(j))
#define frjc(a, b, c) for (auto j = (a); (j) < (b); (j) += (c))
#define frkn(b) for (auto k = (0); (k) < (b); ++(k))
#define frk(a, b) for (auto k = (a); (k) < (b); ++(k))
#define frkc(a, b, c) for (auto k = (a); (k) < (b); (k) += (c))
#define rfj(a, b) for (auto j = (a); (j) >= (b); --(j))
#define FOR(a, b, c) for (auto a = (b); (a) < (c); ++(a))
#define F0R(a, b) FOR(a, 0, (b))
#define fx(a) for(auto x:a)

// testing for-loop default parameter
#define FUNC_CHOOSER(_fi1, _fi2, _fi3, _fi4, ...) _fi4
#define FUNC_RECOMPOSER(argsWithParentheses) FUNC_CHOOSER argsWithParentheses
#define CHOOSE_FROM_ARG_COUNT(...) FUNC_RECOMPOSER((__VA_ARGS__, fric, fri, frin, ))
#define MACRO_CHOOSER(...) CHOOSE_FROM_ARG_COUNT(NO_ARG_EXPANDER __VA_ARGS__())
#define fi(...) MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__)
// #define FUNC_CHOOSER(_f1, _f2, _f3, _f4, ...) _f4
// #define FUNC_RECOMPOSER(argsWithParentheses) FUNC_CHOOSER argsWithParentheses
// #define CHOOSE_FROM_ARG_COUNT(...) FUNC_RECOMPOSER((__VA_ARGS__, fric, fri, frin, ))
// #define MACRO_CHOOSER(...) CHOOSE_FROM_ARG_COUNT(NO_ARG_EXPANDER __VA_ARGS__())
// #define fi(...) MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__)

#define FUNC_CHOOSER_J(_fj1, _fj2, _fj3, _fj4, ...) _fj4
#define FUNC_RECOMPOSER_J(argsWithParentheses_j) FUNC_CHOOSER_J argsWithParentheses_j
#define CHOOSE_FROM_ARG_COUNT_J(...) FUNC_RECOMPOSER_J((__VA_ARGS__, frjc, frj, frjn, ))
#define MACRO_CHOOSER_J(...) CHOOSE_FROM_ARG_COUNT_J(NO_ARG_EXPANDER __VA_ARGS__())
#define fj(...) MACRO_CHOOSER_J(__VA_ARGS__)(__VA_ARGS__)

#define FUNC_CHOOSER_K(_fk1, _fk2, _fk3, _fk4, ...) _fk4
#define FUNC_RECOMPOSER_K(argsWithParentheses_k) FUNC_CHOOSER_K argsWithParentheses_k
#define CHOOSE_FROM_ARG_COUNT_K(...) FUNC_RECOMPOSER_K((__VA_ARGS__, frkc, frk, frkn, ))
#define MACRO_CHOOSER_K(...) CHOOSE_FROM_ARG_COUNT_K(NO_ARG_EXPANDER __VA_ARGS__())
#define fk(...) MACRO_CHOOSER_K(__VA_ARGS__)(__VA_ARGS__)








//#######################################################################################################
//#######################################################################################################




vector<int> g[100];
vi vis(100);


//!1.graph input
void gin(int n,int m){
  int x,y;
  while(m--){
    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
  }
}


//!2.graph show
void gshow(int n){
  for(int i=1;i<=n;i++){
    for(auto val:g[i]){
      cout<<val<<sp;
    }
    cout<<el;
  }
}

//!3.basic dfs
void dfs(int node){

  vis[node]=1;

  cout<<node<<sp;

  for(auto child:g[node]){
    
    if(vis[child]==0){

      dfs(child);      
    }
  }

}
//! dfs traversing and print

/*     /1       pre-order traversal
      /
     /
    /
  2__________3   
*/

void dfs(int node, vvi &g, vi &vis){

    vis[node] = 1;
    
    for(auto child:g[node]){

        if(vis[child] == 0){
            dfs(child, g, vis);
        }
    }

    cout << node << sp;

}




//!4.counting connected component
int con_comp(int n){

  int cnt=0;
  for(int i=1;i<=n;i++){

    if(vis[i]==0){
      cnt++;
      dfs(i);
    }

  }

  return cnt;

}

//!5 single source shortest path
vi dis(100);
void ssp(int node,int d){

  vis[node]=1;
  dis[node]=d;

  for(auto child:g[node]){
    if(child != node && vis[child] == 0){
      ssp(child, d + 1);
    }
  }

}

//! 6. bipartite_graph check;
vi col(100);
bool bp_check(int node, int c)
{
  // node self work
  vis[node] = 1;
  col[node] = c;
  // node self work finish


  // node child call
  for(auto child:g[node]){
    
    if(vis[child]==0){
      if(bp_check(child, c ^ 1)==false){       // if any recursive call return false then????
        return false;                          
      };
    }
    else {
      if(col[node]==col[child]){
        return false;
      }
    }

  }
  return true;
}

//! 7. cycle detection 

bool c_dfs(int node,int par){

  //self work
  vis[node] = 1;
  // end self work

  // child call
  for(auto child:g[node]){
    if(vis[child]==0){
      if(c_dfs(child, node)==false)
        return false;
    }else {
      if(child!=par)
        return false;
    }
  }
  return true;
}

//! 8. DFS in out time
vii timer(100);

void dfs_io(int node, int &tm)
{

  // self work before child call
  vis[node] = 1;
  timer[node].ft = tm++;

  // child call
  for(auto child:g[node]){
    if(vis[child]==0){
      dfs_io(child, tm);
    }
  }

  // self work after child call
  timer[node].sd = tm++;
}

//! dfs longest path (calling single shortest path for two times)

void lp_dfs(int node,int d){          // although this code is for single source shortest path
  
  //self work before child call
  vis[node] = 1;
  dis[node] = d;

  //child call
  for(auto child:g[node]){
    if(vis[child]==0){
      lp_dfs(child, d + 1);
    }
  }

}

vi cld(100);
int dfs_cnt(int node)
{

  vis[node] = 1;
  cld[node] = 1;

  // child call
  for(auto child:g[node]){
    if(vis[child]==0){
      cld[node] += dfs_cnt(child);
    }
  }

  return cld[node];
}

void show(queue<int> tp){
    while(!tp.empty()){
      cout << tp.front() << sp;
      tp.pop();
    }
    cout << el;
}

//! BFS my structure ( in this when node pop then mark vis[node]=1)
//! it provides some error

// void bfs(int node){

//   queue<int> q;
//   q.push(node);
//   // q.push(node);
//   // vis[node] = 1;
//   while (!q.empty())
//   {

//     // show(q);

//     int cur = q.front();
//     q.pop();
//     vis[cur] = 1;

//     for(auto child:g[cur]){
//       if(vis[child]==0){
//         q.push(child);
//       }
//     }
//   }
// }

//! BFS youtube (in this structure when node is push then mark vis[node]=1)
//! basic structure

void bfs(int node){

  queue<int> q;
  q.push(node);
  vis[node] = 1;

  while(!q.empty()){

    node = q.front();
    q.pop();
    cout << node << el;
    for (auto child : g[node]){
      
      if(vis[child]==0){
        q.push(child);
        vis[child] = 1;
      }
    }
  }
}

//! bfs distance source to every node

void bfs_dis(int node){

  queue<int> q;
  q.push(node);
  vis[node] = 1;

  while(!q.empty()){

    node = q.front();
    q.pop();

    for(auto child:g[node]){
      if(vis[child]==0){
        q.push(child);
        vis[child] = 1;

        dis[child] = dis[node] + 1;
      }
    }
  }
}

//! bridge finding dfs
//! eta porar somoy sathe figure ta open kore nibe;

vi in_time(100), low_time(100);
int tmm=1;
void bridge_dfs(int node,int par){

  // before child call task
  vis[node] = 1;
  in_time[node] = tmm;
  low_time[node] = tmm;
  tmm++;

  // child call
  for(auto child:g[node]){
    // if child is parent then no task;
    if(child==par)continue;

    // if child is visited but not parent then check ( ei child node ta ki parent agei mul vukhondo er sathe connected kina)
    // mul vukhonder sathe connected check korbo kemne??
    // just chek in_times of child that means update node low_time;
    if (vis[child] == 1){
      // if(vis[child]==1) er mane ei node ta, purbe visit kora kuno node er sathe jukto
      low_time[node] = min(low_time[node], in_time[child]);
    }


    // if child is not yet visited
    else {
      bridge_dfs(child, node);                          // recursive function median
      
      // bridge check,kemne?
      // node er path chara r kuno path ache ki ja node er agei vumite connected??
      // jodi connected thake tahole child er low_time node er in_time er soman/chuto hobe
      if(in_time[node]<low_time[child]){
        // jodi condition sotto hoy tar mane child ta ei node chara r purbe visit kora kuno child er sathe jukto na.
        cout << node << " -> " << child << el;
      }
      // update node low_time
      low_time[node] = min(low_time[node], low_time[child]);
      // uporer line diye asole node ta most earlier node er sathe jukto ache kina ta check kore ebong update kore
    }
  }
}

//! topological sort
vi ind(100),ans,task_end(100);

void top_sort(){
  int n, m,x,y;
  cin >> n >> m;
  fi(m){
    cin >> x >> y;
    g[x].pb(y);
    ind[y]++;
  }

  // gshow(n);
  queue<int> q;

  fi(1,n+1){
    if(ind[i]==0)q.push(i);
  }

  //bfs run
  while(!q.empty()){

    int node = q.front();
    q.pop();
    task_end[node] = 1;
    cout << node << sp;

    for(auto child:g[node]){
      if(task_end[child]==0){
        ind[child]--;
        if(ind[child]==0)q.push(child);
      }
    }
  }
}

//! longest path in directed path using top sort ans dp
int longest_path(int n){

  queue<int> q;
  fi(1,n+1){
    if(ind[i]==0){
      q.push(i);
    }
  }

  while(!q.empty()){
    
    int node=q.front();
    q.pop();

    for(auto child:g[node]){
      // why vis[] no need?? said that there is no cycle,so node->child exist,child->node not exist
      // so vis no need for parent node
      // normally in bfs vis[] must required, because of prevent duplicate push,
      // but in this case, when in[child]==0 then q.push(child),that means child is no more connected any other in node
      // or no node exist from which we can go child,

        ind[child]--;
        if(ind[child]==0)q.push(child);
        dis[child]=max(dis[child],dis[node]+1);     
    }
  }
  int ans=0;
  fi(1,n+1)ans=max(ans,dis[i]);

  cout<<ans<<el;
}

//! dfs number of child for every node

vi cld(200005);

void dfs_child_count(int node, vvi &g)
{
  vis[node] = 1;

  int cnt = 0;

  for(auto child : g[node]){

    if( vis[child] == 0){
      dfs_child_count(child, g);

      cnt += cld[child];
    }
  }

  cld[node] = cnt + 1;
}
//

//

//

//

//



//*********************************************************************************************************
//*** graph with parent array and one_directional



// node = 5;
// a = [2, 3, 2, 3, 4]
// 
// que1: cycle detection?
//sol_n: use top sort(in_degree), example (241661400)




int par_find(int node, vi &par){

    if(par[node] == node)
        return node;
    else {

        return par[node] = par_find(par[node], par); // update and adam find
    }
}

//! dsu

void dsu(int u, int v, vvi &g, vi &par){

        int pu = par_find(u, par);
        int pv = par_find(v, par);
        
        if(pu==pv) return;
        

        if(g[pu].sz < g[pv].sz)
            swap(pu, pv);

        // parent update
        par[pv] = pu;

        for(auto x: g[pv]){
            g[pu].pb(x);
        }
        g[pv].clear();

}



int main(){

  freopen("input_tree.txt","r",stdin);
  freopen("output.txt","w",stdout);

  
  int n,m,x,y;
  // cin>>n>>m;

  // gin(n,m);

  // gshow(n);
  // bridge_dfs(1, -1);

  top_sort();

  /*
  #
  #
  #
  #
  #
  #
  #
  */

}