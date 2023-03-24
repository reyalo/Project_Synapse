#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){// a<b
  if (!a)
  {
    return b;
  }
  return gcd(b%a,a);
  
}



int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  cout <<gcd(20,15)<< endl;
  // cout<<15%20<<endl;

}