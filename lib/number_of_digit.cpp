#include <bits/stdc++.h>
using namespace std;

//number of digit of factorial number
int numOfDigit(int n)
{ 
  double digit = 0;
  for (int i = 1; i <= n; i++)
  {
    digit += log10(i);
  }
  return floor(digit)+1;
}

int main(){
  cout<<numOfDigit(50)<<endl;
}