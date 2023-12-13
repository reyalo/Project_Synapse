
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, double> idd;
typedef pair<double, int> ddi;
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
typedef vector<idd> vid;
typedef vector<ddi> vdi;
typedef vector<is> vis;
typedef vector<iii> viii;
typedef vector<vi> vvi;   
typedef vector<vl> vvl;  
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<int, ii> miii;
typedef map<int, vi> mivi;
typedef map<ll, ll> mll;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<char, int> mci;
typedef map<char, char> mcc;
typedef map<string, string> mss;
#define sp " "
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
#define pb push_back
#define mp make_pair
#define el '\n'
#define SZ(x) (int)(x).size()
#define frin(b) for (ll i = (0); (i) < (b); ++(i))
#define fri(a, b) for (ll i = (a); (i) < (b); ++(i))
#define fric(a, b, c) for (ll i = (a); (i) < (b); (i) += (c))
#define frit(a) for (auto i = (a.bn); (i) != (a.en); ++(i))
#define fritr(a) for (auto i = (a.rbn); (i) != (a.ren); ++(i))
#define rfi(a, b) for (ll i = (a); (i) >= (b); --(i))
#define frjn(b) for (ll j = (0); (j) < (b); ++(j))
#define frj(a, b) for (ll j = (a); (j) < (b); ++(j))
#define frjc(a, b, c) for (ll j = (a); (j) < (b); (j) += (c))
#define rfj(a, b) for (ll j = (a); (j) >= (b); --(j))
#define frk(a, b) for (ll k = (a); (k) < (b); ++(k))
#define fx(a) for(auto x:a)



#define ERR 1e-9
#define pi (2 * acos(0))
#define PI 3.14159265358979323846

#define mod_number 10000007;

/**Define function and object**/
#define srt(aaaaa) sort(aaaaa.begin(), aaaaa.end())
#define rsrt(aaaaa) sort(aaaaa.rbegin(), aaaaa.rend())
#define csrt(aaaaa, C) sort(aaaaa.begin(), aaaaa.end(), C)
#define rvrs(aaaaa) reverse(aaaaa.begin(), aaaaa.end())
#define all(aaaaa) (aaaaa).begin(), (aaaaa).end()
// #define rsrt(vec) sort(vec.rbegin(), vec.rend())


/**Define Bitwise operation**/
#define cbit(n, pos) (n & (1 << (pos)))
// #define cbit(n, pos) (1 & (n >> (pos)))
#define bon(n, pos) (n | (1 << (pos)))
#define boff(n, pos) (n & ~(1 << (pos)))
#define btog(n, pos) (n ^ (1 << (pos)))

//! 1.
bool cmp(ii &a, ii &b){return a.sd < b.sd;}
bool cmp2(const ii &a, const ii &b)
{
  if (a.ft == b.ft)
    return a.sd < b.sd;
  return a.ft > b.ft;
}
//! 2.
// string ans = "";
string multiply_string_int(string a, int b)
{
  int carry = 0;
  string ans = "";
  for (int i = 0; i < a.size(); i++)
  {
    carry = ((a[i] - '0') * b + carry);
    ans += carry % 10 + '0';
    carry /= 10;
  }
  while (carry != 0)
  {
    ans += carry % 10 + '0';
    carry /= 10;
  }
  return ans;
}
//! 3.
ll factorial(ll n)
{
  ll fact = 1;
  while (n)
    fact *= n--;
  return fact;
}
//! 3.2.1
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
//! 3.2.2
long combi(int n,int k)
{
    long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)ans*=n/j;
        else if(ans%j==0)ans=ans/j*n;
        else ans=(ans*n)/j;
    }
    return ans;
}

ll power(ll a,ll b){
  ll ans=1;
  while(b--)ans*=a;
  return ans;
}
//! 4.
string decimal_to_binary(int num)
{
  string str;
  int n = 31;
  while (n--)
  {
    str=num&1?'1' + str:'0' + str;
    num >>= 1; // Right Shift by 1
  }
  return str;
}

string dec_to_bin(int n) {
    string ret = "";
    for (int i = 30; i >= 0; i--) {
        int k = 1 << i;
        ret += (n & k)? '1' : '0';
    }
    return ret;
}

int bin_to_dec(string s) {  // more fast
    int ret = 0;
    for (int i = 0; i < 31; i++) 
        ret = (2*ret) + s[i] - '0';    // interesting
    return ret;
}
int bin_to_dec2(string s){  // it is more correct
  int ans=0;
  rvrs(s);
  frin(31){ans+=pow(2,i)*(s[i]-'0');}
  return ans;
}

//! 5.
/* primes List*/
#define m_prime 10010  // it provide <m*m all primes
vl primes;bool siv[m_prime];
void sieve()
{
    primes.pb(2);
    fric(ll(3),m_prime,2)if(!siv[i])frjc(i*i,m_prime,i+i)siv[j]=1;                // explain in cp_necessary
    fric(3,m_prime,2)if(!siv[i])primes.pb(ll(i));
    
    // fric(4,m_prime,2)siv[i]=1;                          // its for check a number is prime?
}

//! 6.
int power_of_prime(ll p,ll n){  // p=prime number,n=for which number
  int cnt=0;
  while (n%p==0&&n>1){n/=p,cnt++;}
  return cnt;
}
//! 7.
int power_of_prime1(ll p,ll n){  // 
  int cnt=1;
  while (n%p==0&&n>1){n/=p,cnt*=p;}
  return cnt;
}
//! 9
void prime_fact_psm(){
  fri(2,101){
    
  }
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

void eye() {

  
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

    int test_case;cin >> test_case;while (test_case--){
    eye();
  }
}