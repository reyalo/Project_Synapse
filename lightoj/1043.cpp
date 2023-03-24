#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
#define fi first
#define se second
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define FOR(a, b, c) for (auto a = (b); (a) < (c); ++(a))
#define F0R(a, b) FOR(a, 0, (b))

double area_triangle_s(double a, double b, double c)
{
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

double ratio_triangle(double ad, double ab, double ac, double bc)
{
  double rt, h, de, ae, bd, ce;
  rt = ad / ab;
  bd = ab - ad;
  ae = rt * ac;
  ce = ac - ae;
  de = rt * bc;
  h = (2 * area_triangle_s(bd, ce, bc - de)) / (bc - de);
  rt = area_triangle_s(ad, de, ae) / (h * (de + bc) / 2);

  return rt;
}

int main()
{
  fastio;
  int t,tt;
  cin >> t;
  tt=t;
  while (t--)
  {
    double ab, bc, ac, ad, adn, bd, ae, ce, de, rt, rtn;
    cin >> ab >> bc >> ac >> rt;
    ad = ab;
    adn = ab / 2;
    rtn = ratio_triangle(adn, ab, ac, bc);
    // cout<<rtn<<endl;
    while (abs(rt-rtn)>0.0000001)
    {
      if(rtn<rt){
        adn = (adn+ad)/2;
        rtn = ratio_triangle(adn, ab, ac, bc);
      }
      else
      {
        ad = adn;
        adn = ad/2;
        rtn = ratio_triangle(adn, ab, ac, bc);
      }
    }
    cout<<"Case "<<tt-t<<": "<< setprecision(10) << adn << endl;
  }
}
