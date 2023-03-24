#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

// is_a_line_inside_a_line
int fn(int a, int b, int c, int d) //a=x1,b=y1,c=x2,d=y2
{
  if (a > b)
    swap(a, b);
  if (c > d)
    swap(c, d);

  if (c > a && c < b && (d > b || d < a))
    return 1;
  else if (d > a && d < b && (c > b || c < a))
    return 1;

  return 0;
}

// time calculating

int fn2(string s){
  int t;
  t = 600 * fn(s[0]) + 60 * fn(s[1]) + 10 * fn(s[3]) + fn(s[4]);
  return t;
}

//search array in range
int find(){
  vector<int> vec{10, 20, 30, 40};

  // Iterator used to store the position
  // of searched element
  vector<int>::iterator it;

  // Element to be searched
  int ser = 30;

  // find function call
  it = find(vec.begin(), vec.end(), ser);

  if (it != vec.end())
  {
    cout <<  ser << " found at position : ";
  }
  else
    cout << "Element not found.\n\n";

  return 0;
}
 // FInd in array a value
int main(){
  int c=91;
  int ar[] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
  
  if (find(begin(ar), end(ar), c) != end(ar))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}  
// point 3 theke point(1,2) er upor lombo bindur durtter borgo
double f(double x1, double y1, double x2, double y2, double x3, double y3)
{
  return (((x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3)) * ((x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3))) / ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
// point1 and 2 bindur durotto
double dt(double x1, double y1, double x2, double y2)
{
  return ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}



//! ____________________________________TWO POINTER______________________________________ 

//! 1.be careful in while(ix<n&&___condition___)
//! 2.at first dont code ix++/++ix, after accepted then transform in ix++/++ix,

void two_pointer1_bee_cha_method(){  // constant head propagate is more easy then constant tail
  
  //lrs=sum between left and right,cs=given condition sum,ans=INT_MIN/INT_MAX,a=sorter array;
  
  int l=0,r=0,ans=INT_MIN,cs=5;

  for (r = 0; r < n; r++)                              // head every time propagate but not tail
  {
    int lrs=a[r]-a[l];
    //! at first no l++ or ++l must not use
    //tail propagation   
    while (lrs>cs)lrs=a[r]-a[++l];                     // while (lrs>cs){l++;lr_sum=a[r]-a[l];}

    ans=max(ans,r-l+1);                                // taking answer.use either max() or min()
  }

  // constant tail
  fi(n){
    // it is more sensitive.be careful r<n check and lrs check inside while loop.
    lrs=a[r]-a[i];
    while(r+1<n && a[r+1]-a[i]<=k)r++;
    ans=max(ans,r-i+1);
    
  }
  cout<<ans<<endl;
}

void two_Pointer2(){
  int hi = 0, lo = 0;
  int mx = INT_MIN;
  for (int hi = 0; hi < n; hi++) // propagation of head
  {
    // calculating of between two pointer positions sum
    int ms = sum(lo, hi, b);

    // propagation of tail or lo.it is occur if for head propagation break the main condition(e.g.two pointer sum> given sum)
    if (ms > s)
    {
      while (ms != s)
      {
        lo++;
        ms = sum(lo, hi, b);
      }
    }
    // if two pointer fulfill the condition and two pointers difference is greater/less than previous recorded length
    // then also save two pointer position
    if (ms == s)
    {
      if (hi - lo + 1 > mx)
      {
        mx = hi - lo + 1;
        // here you can also save the position of max or mins two pointer position
      }
    }
  }
  cout << n - mx << endl;
}

void two_pointer_special(){
  ll l,r,ls=0,rs=0,ans=0,a[n];

  l=0,r=n-1;
  while(l-1<=r){  
    if(ls==rs){ans=max(ans,ls);ls+=a[l++],rs+=a[r--];}
    else {
      if(ls<rs)ls+=a[l++];
      else rs+=a[r--];
    }
  }
  //! this code also work
  while(l-1<=r){  
    if(ls==rs)ans=max(ans,ls);
    if(ls<rs)ls+=a[l++];
    else rs+=a[r--];
    
  }
}

void segment(){
  int n,a[n];

  fri(0, n - 1)
  {
    int j = i;

    while (++j < n - 1 && a[i] == a[j]){}

    if (a[j] - a[i] <= k && a[j] != a[i])ans += j - i;
      
    i = j - 1;
  }

  cout<<n-ans<<endl;
}

int product(int x)
{
  int prod = 1;
  while (x)
  {
    prod *= (x % 10);
    x /= 10;
  }
  return prod;
}

// The number which digit has max product
int findNumber(int l, int r)
{
  // Converting both integers to strings
  string a = to_string(l);
  string b = to_string(r);

  // Let the current answer be r
  int ans = r;
  for (int i = 0; i < b.size(); i++)
  {
    if (b[i] == '0')
      continue;

    // Stores the current number having
    // current digit one less than current
    // digit in b
    string curr = b;
    curr[i] = ((curr[i] - '0') - 1) + '0';

    // Replace all following digits with 9
    // to maximise the product
    for (int j = i + 1; j < curr.size(); j++)
      curr[j] = '9';

    // Convert string to number
    int num = 0;
    for (auto c : curr)
      num = num * 10 + (c - '0');

    // Check if it lies in range and its product
    // is greater than max product
    if (num >= l && product(ans) < product(num))
      ans = num;
  }

  return ans;
}

//! kathi method 

void kathi1(){
  ll n,mid,a;
  fri(0,n){
      int j=i;
      ll sum=0;
      while(j<n&&sum+a[j]<=mid)sum+=a[j],j++;
      c++;
      i=max(i,j-1);     //! it is great code to prevent infinite loop
    }
}

#define m 1000010
vi primes;
bool siv[m];
void sieve()
{
    ll i, j;
    for (i=3; i<m; i+=2)       // not work with even number
        if(!siv[i])            // siv[i]=0? then into 
            for (j=i*i; j<m; j+=i+i)  // j+=i+i why??, j always be odd,i always be odd,so(i+j)=even,but (j+i+i)odd,
                siv[j]=1;
    primes.pb(2);
    for (i=3;i<m;i+=2)          // not work with even number
        if(!siv[i])primes.pb(i); //siv[i]=0?then i=prime
    return;
}

int main()
{
  // fastio;
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int t;
  cin >> t;
  while (t--)
  {
    /*CODE*/;
  }
}