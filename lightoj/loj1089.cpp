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
typedef pair<ll, ll> llll;
typedef pair<ii, int> iii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<llll> vll;
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
#define frin(b) for (auto i = (0); (i) < (b); ++(i))
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

// testing for-loop default parameter
#define FUNC_CHOOSER(_f1, _f2, _f3, _f4, ...) _f4
#define FUNC_RECOMPOSER(argsWithParentheses) FUNC_CHOOSER argsWithParentheses
#define CHOOSE_FROM_ARG_COUNT(...) FUNC_RECOMPOSER((__VA_ARGS__, fric, fri, frin, ))
#define MACRO_CHOOSER(...) CHOOSE_FROM_ARG_COUNT(NO_ARG_EXPANDER __VA_ARGS__())
#define frri(...) MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__)

// end testing for-loop default parameter for


#define f_input freopen("input.txt", "r", stdin);
#define f_output freopen("output.txt", "w", stdout);
/**Define constant value**/
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.14159265358979323846
ll mdl = 1000003;
// #define mdl 1000003;
#define mdl 10000007;

/**Define function and object**/
#define srt(vec) sort(vec.begin(),vec.end())
#define rsrt(vec) sort(vec.rbegin(),vec.rend())
#define csrt(vec,C) sort(vec.begin(),vec.end(),C)
#define rvrs(vec) reverse(vec.begin(), vec.end())
#define all(vec) (vec).begin(),(vec).end()
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
#define debt(x) cerr<<(#x)<<"="<<x<<sp<<sp//watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4 
#define deb(x) cout<<(#x)<<"="<<x<<el<<endl//watch(pow(n,exponent));output: pow(n,exponent) is 16 //watch(n); //output : n is 4 

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
ll prm[101][101];
//##############################################################################################



//###############################################################################################
//! 1.
bool cmp(ii &a, ii &b){return a.se < b.se;}
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
  frri(31){ans+=pow(2,i)*(s[i]-'0');}
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
//! 8.
void prime_factorization(ll n){
  ll m=n,x;

  for(int i=0;primes[i]*primes[i]<=m;i++){
      //_______________extra code for pre_sum prime factorization
      // prm[j][primes[i]]+=prm[j-1][primes[i]];

      if(n%primes[i])continue;
      x=power_of_prime(primes[i],n);
      n/=int(pow(primes[i],x));
      
      //__________extra code for track prime fact number______________
      prm[m][primes[i]]+=x;
    }

    if(n>1)prm[m][n]++;              //this line no need when fri(int i=0;primes[i]<=j;i++)
}
//! 9
void prime_fact_psm(){
  fri(2,101){
    prime_factorization(i);
  }
}

//! 10
ll divisor_number_single(ll n){
  ll ans=1,x;
  
  for(ll i=0;primes[i]*primes[i]<=n;i++){
    if(n%primes[i])continue;
    x=power_of_prime(primes[i],n);
    n/=int(pow(primes[i],x));

    //__________extra line for calculate (k1+1)(k2+1)....... 
    ans*=(x+1);
  }

  if(n!=1)ans*=(1+1); // if this number self is prime then it also a divisor
  return ans;
}

//!11
vi LPS(string s) {
    int pos = 0,i=1;
    vi lps(s.sz);

    // for(int i=1;i<s.sz) {
    while(s[i]) {
        if (s[i] == s[pos]) lps[i] = pos + 1, pos++, i++;
        else { 
            // jodi na mile tahole pos ek komiye tar(lps) value ta nibo and setai hobe new pos
            if (pos != 0) pos = lps[pos - 1];

            //pos=0,that means matching first character and s[i] character,still no match then value for lps[i]=o;  
            else lps[i] = 0, i++;  // if pos already 0 then lps[pos-1] invalid
        }
    }
    return lps;
}
//!12
ll big_mod(ll x,ll p){
  ll ans=1;
  while(p){
    if(p&1)ans=(ans*x)%mdl;      // it make the power even ans calc last (ans*x)%mdl
    x=(x*x)%mdl;
    p=p>>1;    // at last p always will be 1
  }
  return ans;
}
double area(double r , double angle)
{
    return 0.5*r*r*angle ;
}

double angle(double opp_A, double opp_B, double opp_C)
{
    return acos( ( (opp_B*opp_B)+(opp_C*opp_C)-(opp_A*opp_A) ) / (2*opp_B*opp_C) ) ;
}





// #define m 1000001
// double psm[m];

// void log_10_pre_sum(){
//   fri(1,m)psm[i]=psm[i-1]+log10(i);
// }


//#####################################################################################################
//#####################################################################################################





// vl fact(mdl);
// void m_fact(){
//   fact[0]=1;
//   fri(ll(1),mdl)fact[i]=(fact[i-1]*i)%mdl;
// }




void KMP(string text, string pattern) {
    bool found = false;
    int tlen=text.sz,plen=pattern.sz;
    vector<int> lps = LPS(pattern);
    int j = 0, i = 0;

    // i --> text, j --> pattern
    while (i < tlen) {
        if (text[i] == pattern[j]) ++i, ++j;
        else {
            if (j != 0) j = lps[j - 1];
            else ++i;
        }

        if (j == plen) {
            // cout << "found match at : " << (i - pattern.length()) << endl;
            // c++; 
            j = lps[j-1];
            found = true;
        }
    }

    // if (!found) cout << "not found" << endl;
    // c++;
}
#define mx 1000001
// ll arr[mx];
// ll tree[mx * 3];
int prop[mx * 3];
// ii tree2[mx*3];



//! lazy propagation 
// init same as before 
// cl=current_left gl=given_left
ll query_lazy_sum(int node, int cl, int cr, int gl, int gr,ll carry=0)
{
    if (gl > cr || gr < cl)
        return 0; //বাইরে চলে গিয়েছে
        // return 0; //বাইরে চলে গিয়েছে
    if (cl >= gl && cr <= gr){
        // cout<<cl<<sp<<cr<<sp<<node;
        // deb(carry);
        return prop[node]+carry; //রিলেভেন্ট সেগমেন্ট
    }

    int Left = (node<<1), Right = (node<<1 | 1), mid = (cl+cr)>>1;

    ll p1 = query_lazy_sum(Left, cl, mid, gl, gr,carry+prop[node]);
    ll p2 = query_lazy_sum(Right, mid + 1, cr, gl, gr, carry + prop[node]);

    return p1+p2; 
    // return query_lazy_sum(Left, cl, mid, i, j,carry+prop[node])+query_lazy_sum(Right, mid + 1, e, i, j, carry + prop[node]); //বাম এবং ডান পাশের যোগফল
}

void update_lazy_sum(int node, int cl, int cr, int gl, int gr, ll newvalue)
{
    if (gl > cr || gr < cl)
        return; //বাইরে চলে গিয়েছে
    if (cl >= gl && cr <= gr) { //রিলেভেন্ট সেগমেন্ট
        // tree[node] +=(cr-cl+1)* newvalue; //nicher gulare total eto taka dilam //! why this calculate inspite of prop value?? ans: jodi ei node kuno somoy na duke upor theke maan niye fire jay
        prop[node] += newvalue; //nicher gulare jon proti eto taka nij value er ceye extra dilam
        return;
    }

    // jodi uporei given range mile jay taholw sekhan thekei fire jabe otherwise
    // etake abar dui vaaj korbo. eg. 4=2+2,3=2+1 (4 = current node successor,2= left node successor,1 = right node successor,)
    int Left = (node<<1), Right = (node<<1 | 1), mid = (cl+cr)>>1;

    update_lazy_sum(Left, cl, mid, gl, gr, newvalue);
    update_lazy_sum(Right, mid + 1, cr, gl, gr, newvalue);
    // tree[node] = tree[Left]+tree[Right]+(cr-cl+1)*prop[node];  // upore uthar somoy jodi prop thake
}
//! segment tree 
//! loj1112,loj1083
//! lazy prop2 loj1080,loj1087,loj1089


void solve()
{
  frri(mx*3)prop[i]=0;
  cout<<el;
  int n,q,x,y,nn=mx;
  cin>>n>>q;
  vii aa(n);
  vi bb(q);
  mii mmp, mmm;

  frri(n){
    cin>>aa[i].fi>>aa[i].se;
    mmp[aa[i].fi]=mmp[aa[i].se]=1;
    
  }
  frri(q){cin>>bb[i];mmp[bb[i]]=1;}

  int idx=1;
  frit(mmp)mmm[i->fi]=idx++;
  // frit(mmm)cout<<i->fi<<sp<<i->se<<el;

  frri(n){
    x=aa[i].fi;
    y=aa[i].se;
    update_lazy_sum(1,1,nn,mmm[x],mmm[y],1);


  }
  frri(q){
    x=bb[i];
    cout<<query_lazy_sum(1,1,nn,mmm[x],mmm[x])<<el;


  }
  

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

  

  int cs=1;
  int _;cin>>_;while (_--){
  // int _;scanf("%d",&_);while (_--){
    cout<<"Case "<<cs++<<": ";
    solve();
  done:;
    // cout << "Run Time : " << fixed << setprecision(6) << ((double)(clock() - z) / CLOCKS_PER_SEC);
  }
}
