/*

                                    ███████╗░██╗░░░██╗███████╗░
                                    ██╔════╝╗╚██╗░██╔╝██╔════╝╗
                                    █████╗░░║░╚████╔╝░█████╗░░║
                                    ██╔══╝░░║░░╚██╔╝░░██╔══╝░░║
                                    ███████╗║░░░██║░░░███████╗║
                                    ╚══════╝╝░░░╚═╝░░░╚══════╝╝
author  : modhu_khalifa


*/
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
typedef vector<vd> vvd;
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
typedef unordered_map<int, int> umii;
typedef unordered_map<double, int> umdi;
typedef unordered_map<int, ii> umiii;
typedef unordered_map<ii, int> umii_i;
typedef unordered_map<int, vi> umivi;
typedef unordered_map<ll, ll> umll;
typedef unordered_map<int, string> umis;
typedef unordered_map<string, int> umsi;
typedef unordered_map<char, int> umci;
typedef unordered_map<char, char> umcc;
typedef unordered_map<string, string> umss;
typedef unordered_map<int, int>::iterator mitr;
typedef unordered_map<ll, ll>::iterator mlitr;
typedef priority_queue<int, vector<int>, greater<int>> prq_min;
typedef priority_queue<int> prq_max;
typedef priority_queue<ii> prqii_max;
typedef vector<set<int>> vseti;
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
#define nl cout<<el;
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


// end testing for-loop default parameter for

#define f_input freopen("input.txt", "r", stdin);
#define f_input2 freopen("input2.txt", "r", stdin);
#define f_output freopen("output.txt", "w", stdout);
/**Define constant value**/
#define ERR 1e-9
#define lmax 1e18
#define infl 1e18
#define lmin -1e18
#define imax 1e9
#define inf 1000000005
#define imin -1e9
#define pi (2 * acos(0))
#define PI 3.14159265358979323846
// ll mdl = 1000003;
#define mdl63 1000003
#define mdl77 10000007
#define mdl97 1000000007

/**Define function and object**/
#define rol(vec,d) rotate(vec.begin(),vec.begin() + d, vec.end())
#define ror(vec,d) rotate(vec.begin(),vec.begin() + (vec.sz-d), vec.end())
#define srt(vec) sort(vec.begin(), vec.end())
#define srts(vec) sort(vec.begin(), vec.end(), [](auto &l, auto &r) {return l.sd < r.sd;});
#define rsrt(vec) sort(vec.rbegin(), vec.rend())
#define rsrts(vec) sort(vec.begin(), vec.end(), [](auto &l, auto &r) {return l.sd > r.sd;});
// if C = 1 then no swap
#define csrt(vec, C) sort(vec.begin(), vec.end(), C) 
#define rvrs(vec) reverse(vec.begin(), vec.end())
#define nexp(vec) next_permutation(vec.begin(), vec.end())
#define tsm(vec) reduce(vec.begin(), vec.end())
#define all(vec) (vec).begin(), (vec).end()
#define sqr(x) ((x) * (x))
#define find_dist(a, b) sqrt(sqr(a.x - b.x) + sqr(a.y - b.y))
#define maxe(vec) *max_element(all(vec))
#define maxi(vec) max_element(all(vec))-vec.bn
#define mine(vec) *min_element(all(vec))
#define mini(vec) min_element(all(vec))-vec.bn
#define lobi(vec,b) lower_bound(vec.begin(), vec.end(), b) - vec.begin()-1  
// return -1 for no match
// return 1->strictly lower than index 2->0 base index
#define upbi(vec,b) upper_bound(vec.begin(), vec.end(), b) - vec.begin()   
// return n for no match
// return 1->strictly greater than index 2->0 base index



// or you can say lower_bound return strictly less than values 1 base index;
// upper_bound return strictly greater than values 0 base index
#define inp(a) fi(a.sz){cin >> a[i];}

/**Define Bitwise operation**/
#define cbit(n, pos) (n & (1 << (pos))) // return 0 or not 0
// #define cbit(n, pos) (1 & (n >> (pos)))
// #define bon(n, pos) (n | (1 << (pos)))
#define bon(n, pos) (n | (1LL << (pos)))
// #define boff(n, pos) (n & ~(1 << (pos)))
#define boff(n, pos) (n & ~(1LL << (pos)))
#define btog(n, pos) (n ^ (1 << (pos)))

/**Debug tools**/
#define debt(x) cerr << (#x) << "=" << x << sp << sp  // watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4
#define deb(x) cout << (#x) << "=" << x << el << endl // watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4


/**Define color**/
enum
{
    WHITE,
    GREY,
    BLACK
};
// vi month={31,28,31,30,31,30,31,31,30,31,30,31};

// is_in(given_val,match_val,match_val....)
template <typename First, typename... T>
bool is_in(First &&first, T &&...t) { return ((first == t) || ...); }


//data show
template < typename T > istream &operator >> (istream &in, vector < T > &v) {
    for (auto &x: v) in >> x;
    return in;
}
template < typename T > ostream &operator << (ostream &out, vector < T > &v) {
    for (auto &x: v) out << x << ' ';
    return out;
}

void show(int &a){cout<<a<<el;}
void show(ll &a){cout<<a<<el;}
void show(string &s){cout<<s<<el;}
void show(vi &a){fi(a.sz) cout << a[i] << sp;cout << el;}
void show(vd &a){fi(a.sz) cout << a[i] << sp;cout << el;}
void show(vvi &a){fi(a.sz){ fj(a[i].sz){cout << a[i][j] << sp;} cout << el;} }
void show(vvl &a){fi(a.sz){ fj(a[i].sz){cout << a[i][j] << sp;} cout << el;} }
// void show(vvi &a){int n=a.sz,m=a[0].sz;fi(n){ fj(m){cout << a[i][j] << sp;} cout << el;} }
void show(vl &a){fi(a.sz) cout << a[i] << sp;cout << el;}
void show(vii &a){fi(a.sz) cout << a[i].ft << sp<< a[i].sd <<el;cout << el;}
void show(vll &a){fi(a.sz) cout << a[i].ft << sp<< a[i].sd <<el;cout << el;}
void show(mii &a){for(auto x:a)cout<<x.ft<<sp<<x.sd<<el;}
void show(umii &a){for(auto x:a)cout<<x.ft<<sp<<x.sd<<el;}
void show(umll &a){for(auto x:a)cout<<x.ft<<sp<<x.sd<<el;}

// set
void show(set<int> &a){{for(auto x:a)cout<<x<<sp;}nl;}
void show(vseti &a){for(auto x:a){{for(auto y:x)cout<<y<<sp;}nl;}}
// queue
void show(queue<int> a){while(!a.empty()){cout<<a.front()<<sp;a.pop();}nl;}
void show(prq_min a){while(!a.empty()){cout<<a.top()<<sp;a.pop();}nl;}
void show(prq_max a){while(!a.empty()){cout<<a.top()<<sp;a.pop();}nl;}
void show(prqii_max a){while(!a.empty()){cout<<a.top().ft<<sp<<a.top().sd<<el;a.pop();}nl;}





//######################################################################################################


ll lcm(ll a,ll b){return (a*b)/__gcd(a,b);}

//set_bit_count
int bit_count(ll n){
    int cnt = 0;
    while(n){
        if(n&1)cnt++;
        n /= 2;
    }
    return cnt;
}


//! modular arithmetic

const ll MOD = (ll)1e9 + 7;
ll add(ll x, ll y) {
	x += y;
	if (x >= MOD) return x - MOD;
	return x;
}
ll sub(ll x, ll y) {
	x -= y;
	if (x < 0) return x + MOD;
	return x;
}
ll mult(ll x, ll y) {
	return (x * y) % MOD;
}
ll bin_pow(ll x, ll p) {
	if (p == 0) return 1;
	if (p & 1) return mult(x, bin_pow(x, p - 1));
	return bin_pow(mult(x, x), p / 2);
}
ll rev(ll x) {
	return bin_pow(x, MOD - 2);
}



// #####################################################################################################
//_______________________________THINK SYSTEMATIC AWAY_______________________________________
//_______________________________Non eedop timi zefi rst_______________________________________
// #####################################################################################################
int tc;

//! sign greater side greater value and less side smaller value
// bool cmp(int a,int b){return a>b;}

//***************************____START_NUMBER_THEORY____**************************


ll power(ll a,ll b){
    ll ans=1;
    while(b--)ans*=a;
    return ans;
}

#define m_prime 1000010  // it provide <m*m all primes
vl primes;bool siv[m_prime];
void sieve()
{
        primes.pb(2);
        fric(3LL, m_prime, 2){

        if(siv[i] == 0){
            frjc(i*i, m_prime, i + i) siv[j] = 1;
        }
        }                // explain in cp_necessary
        fric(3,m_prime,2)if(!siv[i])primes.pb(ll(i));
        
        // fric(4,m_prime,2)siv[i]=1;                          // its for check a number is prime?
}


int power_of_prime(ll p,ll n){  // p=prime number,n=for which number
    int cnt=0;
    while (n%p==0&&n>1){n/=p,cnt++;}
    return cnt;
}
ll combi(ll n,ll k)
{
    ll ans=1;
    k=k>n-k?n-k:k;
    ll j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)ans*=n/j;
        else if(ans%j==0)ans=ans/j*n;
        else ans=(ans*n)/j;
    }
    return ans;
}


//? presum array always take 1 indexes;

void presum(vi &a){
    fi(1,a.sz)a[i]+=a[i-1];
}
void presum(vl &a){
    fi(1,a.sz)a[i]+=a[i-1];
}

ll decimalToOctal(ll n)
{
    ll remainder;
    ll octal = 0, i = 1;

    while (n != 0)
    {
            remainder = n % 9;
            n = n / 9;
            octal = octal + (remainder * i);
            i = i * 10;
    }
    return octal;
}

ddd quadratic_root(ll a,ll b,ll c){
    ddd ans;
    double d=sqrt(1.0*b*b-1.0*4*a*c);
    ans.ft=(-b+d)/(1.0*2*a);
    ans.sd=(-b-d)/(1.0*2*a);
    return ans;
}

int sum_of_digit(string s){
    int sum=0;
    fi(s.sz){
        sum+=s[i]-'0';
    }
    return sum;
}
int sum_of_digit(ll n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

ll log2_ceil(ll n){
    ll i;
    for (i = 0; (1ll << i) < n; i++);
    return i;
}
// inclusive
bool inside(int a,int b,int ix){
    if(a<=ix&&ix<=b)return true;

    return false;
}
// exclusive
bool inside_ex(int a,int b,int ix){
    return (a < ix && ix < b)?true:false;
}
//--------
//  ------
// this case return 1;
bool intersect_in(int ref_x,int ref_y,int gvn_x,int gvn_y){
    return (max(ref_x,gvn_x)<=min(ref_y,gvn_y)?true:false);
}
//--------
//  ------
// this case return 0;
bool intersect_m(int x,int y,int xx,int yy){
    if(x>y)swap(x,y);
    if(xx>yy)swap(xx,yy);
    return (inside_ex(xx, yy, x) && yy < y) || ((inside_ex(xx, yy, y) && x < xx));
}

ii intersect_range(int ref_x,int ref_y,int gvn_x,int gvn_y){

    int l = max(ref_x, gvn_x);
    int r = min(ref_y, gvn_y);

    return ii(l, r);
}


ll total(vi &a){
    ll n=a.sz,ttl=0;
    fi(n)ttl+=a[i];
    return ttl;
}
ll total(vl &a){
    ll n=a.sz,ttl=0;
    fi(n)ttl+=a[i];
    return ttl;
}

ll factorial(ll n)
{
    ll fact = 1;
    while (n)
        fact *= n--;
    return fact;
}
ll factorial(ll n, ll mod)
{
    ll fact = 1;
    while (n){
        fact *= n--;
        fact %= mod;
    }
    return fact;
}
bool isPrime(ll x) {
	if (x < 2) return false;
	for (ll y = 2; y * y <= x; y++)
		if (x % y == 0)
			return false;
	return true;
}
void prime_fact(ll n,vii &ans){        //! it is too fast
        for(ll i=2;i*i<=n;i++){
        int cnt=0;
        while(n>0&&n%i==0){
        n/=i;cnt++;
        }
        if(cnt>0)ans.pb(mp(i,cnt));

    }
        if(n>1)ans.pb(mp(n,1));
}



ll bigmod(ll base, ll power, ll m)
{
    if (!power)return 1;

    ll ans = bigmod(base, power / 2, m); // 5 = clac(1) * calc(2) * clac(2);

    ans = (ans * ans) % m;

    if (power & 1)return (ans * base) % m;

    return ans;
}

ll mod_inverse(ll a,ll mod){      // also known as multiplicative inverse
    return bigmod(a, mod - 2, mod);
}

ll ncr_frac(ll n, ll r, ll mod){

    ll nn, rr, nr, rr_inverse, nr_inverse, ans;

    nn = factorial(n, mod);
    rr = factorial(r, mod);
    nr = factorial(n-r, mod);

    rr_inverse = bigmod(rr, mod - 2, mod); // a^-1 = a^(m-2)%m
    nr_inverse = bigmod(nr, mod - 2, mod);

    ans = ((nn * rr_inverse) % mod * nr_inverse) % mod;

    return ans;
}





//***************************____END_NUMBER_THEORY____**************************









// it return maximum possible book read;
// In valid range i=left index,r=right index+1;
int two_pointer1(vi &a,int ref){ 
    int r=0,ans=0,n=a.sz;          
    ll sum=0;
    fi(n){
        if(i>0)sum-=a[i-1];  // sub prev value

        while(r<n&&sum+a[r]<=ref)sum+=a[r++];  

        ans=max(ans,r-i);
    }
    return ans;
}

ll ceil_(ll dividend,ll divisor){
    return (dividend+divisor-1)/divisor;
}

// ll abs_c(ll a){
//   if(a<0)return a+INT64_MAX;
//   return a;
// }
int leader_finder(vi &ar,int x){
    if(ar[x]==x)return x;

  return ar[x]=leader_finder(ar,ar[x]); // it make ar[x]=leader
}



bool is_subsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    /*If i reaches end of s1,that mean we found all
    characters of s1 in s2,
    so s1 is subsequence of s2, else not*/
    return i == n;
}


long long ncr(int n, int r)
{
    if(n<r)return 0;

    long long ans = 1;
    if (r > n - r)
    {
        r = n - r;
    }
    for (int i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}
ll string_to_num(string s){
    ll ans=0;
    int n=s.sz;
    fi(n){
        ans=ans*10+s[i]-'0';
    }
    return ans;
}

string rmv_dup_char(string s){
    int n = s.sz;
    unordered_map<char,int> mm;
    fi(n) {
        mm[s[i]]++;
    }
    string ans;
    for(auto ch:mm){
        ans += ch.ft;
    }
    return ans;
}

int cx[4]={1,-1,0,0};
int cy[4]={0,0,1,-1};
// int vis[100][100];

// void bfs(int x,int y,vs &s,vii &a){
//     int n;
//     n=s.sz;
//     // deb(n);
//     vvi vis(100,vi(100));
//     queue<int> p;


//     vis[x][y]=1;
//     p.push(mp(x,y));

//     while(!p.empty()){
//       ii xy=p.front();
//       p.pop();

//       a.pb(xy);

//       // deb(xy.ft),deb(xy.sd);

//       fi(4){
//         int xx=xy.ft+cx[i];
//         int yy=xy.sd+cy[i];
//         // deb(xx),deb(yy);
//         if(inside(0,n-1,xx)&&inside(0,n-1,yy)&&vis[xx][yy]==0&&s[xx][yy]=='0'){
//           // ck
//           vis[xx][yy]=1;
//           p.push(mp(xx,yy));
//         }
//       }
//     }


// }




ll cl(ll a,ll b){
    return (a-1)/b+1;
}



string palindrome_prefix(const string& s)
{
    int c=0,n;

    string a = s;
    rvrs(a);
    a = s + "#" + a;
    n = a.sz;
    vi pref(n + 5);

    for (int i = 1; i < n; i++){

        while (c != 0 && a[c] != a[i])
        c = pref[c - 1];
        if (a[c] == a[i])
        c++;
        pref[i] = c;
    }

    return s.substr(0, c);
}

void graph_inp(vvi &g,int edge){
    int x,y;

    while(edge--){
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
}
void graph_inp(vector<set<int>> &g,int edge){
    int x,y;

    while(edge--){
        cin >> x >> y;
        g[x].insert(y);
        g[y].insert(x);
    }
}


ll seg_xor(vi &a,int l,int r){
    return a[l-1] ^ a[r];
}

ii ratio_int(int a,int b){
    int g = __gcd(a, b);
    a /= g;
    b /= g;
    return ii(a, b);
}

void reset(vi &a,int n){
    fi(n) a[i] = 0;
}

/*

//

//

//


//

//

//

//


//

//

//


//


//


//


//


//


//


//


*/





void solve(){

    
}

/*

author  : modhu_khalifa
created : 2024.02.08 00:06:41

*/
int main()
{













    fastio;

    #ifndef ONLINE_JUDGE
        // f_input
        f_input2
        f_output
    #endif



    int _=1;

    cin >> _;

    for (tc = 1; tc <= _; tc++)
    {

        solve();

        // cout << fixed << setprecision(6) ;
    }
}