/*
                                      ███████╗░██╗░░░██╗███████╗░
                                      ██╔════╝╗╚██╗░██╔╝██╔════╝╗
                                      █████╗░░║░╚████╔╝░█████╗░░║
                                      ██╔══╝░░║░░╚██╔╝░░██╔══╝░░║
                                      ███████╗║░░░██║░░░███████╗║
                                      ╚══════╝╝░░░╚═╝░░░╚══════╝╝

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<int, double> idd;
typedef pair<double, int> ddi;
typedef pair<ll, ll> llll;
typedef pair<ii, int> iii;
typedef pair<ii, int> iii;
typedef pair<int, string> is;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<llll> vll;
typedef vector<ii> vii;
typedef vector<idd> vid;
typedef vector<ddi> vdi;
typedef vector<is> vis;
typedef vector<iii> viii; // variable.fi.fi,variable.fi.se,variable.se
typedef vector<vi> vvi;   // 2d vector
typedef vector<vl> vvl;   // 2d vector
typedef vector<vii> vvii;
typedef map<int, int> mii;
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
#define ck "check-1"
#define ckk "check-2"
#define ckkk "check-3"
#define ckkkk "check-4"
#define ys "YES"
#define no "NO"
#define bn begin()
#define en end()
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
#define rfj(a, b) for (auto j = (a); (j) >= (b); --(j))
#define frk(a, b) for (auto k = (a); (k) < (b); ++(k))
#define FOR(a, b, c) for (auto a = (b); (a) < (c); ++(a))
#define F0R(a, b) FOR(a, 0, (b))

// testing for-loop default parameter
#define FUNC_CHOOSER(_f1, _f2, _f3, _f4, ...) _f4
#define FUNC_RECOMPOSER(argsWithParentheses) FUNC_CHOOSER argsWithParentheses
#define CHOOSE_FROM_ARG_COUNT(...) FUNC_RECOMPOSER((__VA_ARGS__, fric, fri, frin, ))
#define MACRO_CHOOSER(...) CHOOSE_FROM_ARG_COUNT(NO_ARG_EXPANDER __VA_ARGS__())
#define fi(...) MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__)

#define FUNC_CHOOSER_J(_fj1, _fj2, _fj3, _fj4, ...) _fj4
#define FUNC_RECOMPOSER_J(argsWithParentheses_j) FUNC_CHOOSER_J argsWithParentheses_j
#define CHOOSE_FROM_ARG_COUNT_J(...) FUNC_RECOMPOSER_J((__VA_ARGS__, frjc, frj, frjn, ))
#define MACRO_CHOOSER_J(...) CHOOSE_FROM_ARG_COUNT_J(NO_ARG_EXPANDER __VA_ARGS__())
#define fj(...) MACRO_CHOOSER_J(__VA_ARGS__)(__VA_ARGS__)


// end testing for-loop default parameter for

#define f_input freopen("input.txt", "r", stdin);
#define f_output freopen("output.txt", "w", stdout);
/**Define constant value**/
#define ERR 1e-9
#define pi (2 * acos(0))
#define PI 3.14159265358979323846
// ll mdl = 1000003;
// #define mdl 1000003;
#define mdl 10000007;

/**Define function and object**/
#define srt(vec) sort(vec.begin(), vec.end())
#define rsrt(vec) sort(vec.rbegin(), vec.rend())
#define csrt(vec, C) sort(vec.begin(), vec.end(), C)
#define rvrs(vec) reverse(vec.begin(), vec.end())
#define all(vec) (vec).begin(), (vec).end()
#define sqr(x) ((x) * (x))
#define find_dist(a, b) sqrt(sqr(a.x - b.x) + sqr(a.y - b.y))

/**Define Bitwise operation**/
#define cbit(n, pos) (n & (1 << (pos)))
// #define cbit(n, pos) (1 & (n >> (pos)))
#define bon(n, pos) (n | (1 << (pos)))
#define boff(n, pos) (n & ~(1 << (pos)))
#define btog(n, pos) (n ^ (1 << (pos)))

/**Define color**/
enum
{
  WHITE,
  GREY,
  BLACK
};

/**Debug tools**/
#define debt(x) cerr << (#x) << "=" << x << sp << sp  // watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4
#define deb(x) cout << (#x) << "=" << x << el << endl // watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4

// #####################################################################################################
//_______________________________THINK SYSTEMATIC AWAY_______________________________________
//_______________________________No need Optimize first_______________________________________
// #####################################################################################################
ll power(ll a,ll b){
  ll ans=1;
  while(b--)ans*=a;
  return ans;
}
#define m_prime 10010  // it provide <m*m all primes
vl primes;bool siv[m_prime];
void sieve()
{
    primes.pb(2);
    fric(ll(3),m_prime,2)if(!siv[i])frjc(i*i,m_prime,i+i)siv[j]=1;                // explain in cp_necessary
    fric(3,m_prime,2)if(!siv[i])primes.pb(ll(i));
    
    // fric(4,m_prime,2)siv[i]=1;                          // its for check a number is prime?
}


void solve1()
{
  ll n=1000000,sm=4,ans=4;
  vl mrk;
  mrk.pb(1);
  fi(n){
    mrk.pb(ans);
    mrk.pb(ans+1);
    sm+=4;
    ans+=sm;
  }
  cout<<mrk[mrk.sz-1]<<el;
  // fi(mrk.sz)cout<<mrk[i]<<sp;
  cout<<el;

}
void solve()
{
  ll l=0,r=INT_MAX,m,n;
  cin>>n;

  // while(l<=r){
  //   m=(l+r)/2;
  //   m*m<n?l=m+1:r=m-1;
  // }
  n--;
  while(l<=r){
    m=(l+r)/2;
    m *m > n ? r = m - 1:l = m + 1;
  }
  // cout<<n<<sp;
  // cout<<l<<sp<<m<<sp<<r<<el;
  cout<<l-1<<el;

}

int main()
{
  fastio;

#ifndef ONLINE_JUDGE
  f_input
  f_output
#endif
    // sieve();
      // clock_t z = clock();
    int _;cin >> _;while (_--){
    // int _;scanf("%d",&_);while (_--){

    solve();

    // cout << "Run Time : " << fixed << setprecision(6) << ((double)(clock() - z) / CLOCKS_PER_SEC);
  }
}
