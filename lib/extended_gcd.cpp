#include<bits/stdc++.h>
using namespace std;


int extenGcd(int a,int b,int &x,int &y){
  if (!a)
  {

    x = 0, y = 1;
    return b;
    }
    int x1,y1;
    int d = extenGcd(b%a,a,x1,y1);

    //main concept of this method
    x = y1-(b/a)*x1; // current y1 will be add with next x1.see my note. 
    y = x1;
    //
    return d;
}


int main(){
  int x, y;

  cout<<extenGcd(6,10,x,y)<<" "<<x<<" "<<y<<endl;

}