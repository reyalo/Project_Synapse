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
typedef pair<ii, int> iii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef vector<iii> viii; // variable.fi.fi,variable.fi.se,variable.se
typedef vector<vi> vvi;   // 2d vector
typedef vector<vl> vvl;   // 2d vector
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<char, int> mci;
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
#define fi first
#define se second
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define el '\n'
#define als(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define fri(a, b) for (auto i = (a); (i) < (b); ++(i))
#define fric(a, b,c) for (auto i = (a); (i) < (b); (i)+=(c))
#define frit(a) for (auto i = (a.bn); (i) != (a.en); ++(i))
#define rfi(a, b) for (auto i = (a); (i) >= (b); --(i))
#define frj(a, b) for (auto j = (a); (j) < (b); ++(j))
#define frjc(a, b,c) for (auto j = (a); (j) < (b); (j)+=(c))
#define rfj(a, b) for (auto j = (a); (j) >= (b); --(j))
#define frk(a, b) for (auto k = (a); (k) < (b); ++(k))
#define FOR(a, b, c) for (auto a = (b); (a) < (c); ++(a))
#define F0R(a, b) FOR(a, 0, (b))
#define f_input freopen("input.txt", "r", stdin);
#define f_output freopen("output.txt", "w", stdout);
/**Define constant value**/
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.14159265358979323846

/**Define function and object**/
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define csrt(v,C) sort(v.begin(),v.end(),C)
#define all(v) (v).begin(),(v).end()
#define sqr(x) ((x)*(x))
#define find_dist(a,b) sqrt(sqr(a.x-b.x)+sqr(a.y-b.y))

/**Define Bitwise operation**/
#define cbit(n, pos) (n & (1<<(pos)))
#define bon(n, pos) (n | (1<<(pos)))
#define boff(n, pos) (n & ~(1<<(pos)))
#define btog(n, pos) (n ^ (1<<(pos)))

/**Define color**/
enum {WHITE,GREY,BLACK};

/**Debug tools**/
#define watcht(x) cerr<<(#x)<<"="<<x<<sp<<sp//watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4 
#define watcho(x) cout<<(#x)<<"="<<x<<el<<endl//watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4 

/**Template**/

// template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
// template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}
// template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}
// template<class T>T multiplication(T n,T p,T m){if(p==0)return (T)0;T x=multiplication(n,p/2,m);x=(x+x)%m;if(p&1)x=(x+n)%m;return x;}
// template<class T>T my_pow(T n,T p){if(p==0)return 1;T x=my_pow(n,p/2);x=(x*x);if(p&1)x=(x*n);return x;} ///n to the power p
// template <class T> double getdist(T a, T b){return sqrt((a.x – b.x) * (a.x – b.x) + (a.y – b.y) * (a.y – b.y));}/// distance between a & b
// template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}/// extract words or numbers from a line
// template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}/// convert a number to string
// template<class T> inline T Mod(T n,T m) {return (n%m+m)%m;} ///For Positive Negative No.
// template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number
// template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number
// template <class T> void print_vector(T &v){int sz=v.size();if(sz)cout<<v[0];for(int i = 1; i < sz; i++)cout << ' '<<v[i];cout<<"\n";}/// prints all elements in a vector
// bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
// bool isConsonant(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}

// take before value a,after value b
// if cmp return false then swap
// bool cmp(ii &a, ii &b){return a.se < b.se;}
bool cmp(ii &a, ii &b){
  if(a.se!=b.se)return a.se<b.se;
    
  return a.fi>b.fi;
  }

/* primes List*/
#define m_prime 10000010  // it provide <m*m all primes
vl primes;bool siv[m_prime];
void sieve()
{
    primes.pb(2);
    fric(ll(3),m_prime,2)if(!siv[i])frjc(i*i,m_prime,i+i)siv[j]=1;                // explain in cp_necessary
    fric(3,m_prime,2)if(!siv[i])primes.pb(ll(i));
    
    // fric(4,m_prime,2)siv[i]=1;                          // its for check a number is prime?
}



int power_of_prime(ll p,ll n){  // p=prime number,n=for which number
  int cnt=0;
  while (n%p==0&&n>1){n/=p,cnt++;}
  return cnt;
}

ll divisor_number_single(ll n){
  ll ans=1,x;
  
  for(ll i=0;primes[i]*primes[i]<=n;i++){
    if(n%primes[i])continue;
    x=power_of_prime(primes[i],n);
    n/=int(pow(primes[i],x));
    ans*=(x+1);
  }

  if(n!=1)ans*=2; // if this number self is prime then it also a divisor
  return ans;
}


vii divisor_list;

void divisor_number_list(ll n){

  divisor_list.pb(mp(1,1));

  fri(2,n+1)divisor_list.pb(mp(i,divisor_number_single(i)));
  
}

void solve()
{
  ll n,a,b,ans=0;
  cin>>n;
  for (auto i = 0; primes[i]*2<=n; i++)
  {
    if(siv[n-primes[i]]==0)ans++;
  }


  cout<<ans<<endl;
}


int main()
{
  fastio;

#ifndef ONLINE_JUDGE
  f_input
  f_output
#endif
  // clock_t z = clock();
/**** CODE ****/



  sieve();







  
  int cs=1;
  int _;cin>>_;while (_--){
  // int _;scanf("%d",&_);while (_--){
    cout<<"Case "<<cs++<<": ";
    solve();
  done:;
    // cout << "Run Time : " << fixed << setprecision(6) << ((double)(clock() - z) / CLOCKS_PER_SEC);
  }
}
