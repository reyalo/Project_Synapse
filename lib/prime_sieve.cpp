#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7 + 10;
vector<int> primes;

// void prime_sieve(int n)
// {
//   bool prime[n + 1];
//   memset(prime, true, sizeof(prime));
//   for (int i = 2; i * i <= n; i++)
//   {
//     if (prime[i])
//     {
//       for (int j = i * i; j <= n; j += i)
//       {
//         prime[j] = false;
//       }
//     }
//   }
//   for (int i = 2; i <= n; i++)
//   {
//     if (prime[i])
//     {
//       primes.push_back(i);
//     }
//   }

//   // cout << prime[0]<<" "<<prime[1];
// }



//! Method 1: here isPrime[i]==1 hole Prime hobe
bool isPrime[MAXN];
void makePrime()
{
memset(isPrime, true, sizeof(isPrime));
  for (int i = 2; i * i <= MAXN; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= MAXN; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
}

//! Method 2: here isPrime[i]==0 hole Prime hobe
bool isPrime2[MAXN];
void makePrime2()
{
  isPrime2[1]=true;
  for (int i = 2; i * i <= MAXN; i++)
  {
    if (!isPrime2[i])
    {
      for (int j = i * i; j <= MAXN; j += i)
      {
        isPrime2[j] = true;
      }
    }
  }
}
//! Method 2: here isPrime[i]==0 hole Prime hobe
bool isPrime2[MAXN];
void makePrime3_optimize()
{
  isPrime2[1]=true;
  isPrime2[2]=false;
  for (int i = 3; i * i <= MAXN; i+=2)
  {
    if (!isPrime2[i])
    {
      for (int j = i * i; j <= MAXN; j += i+i)
      {
        isPrime2[j] = true;
      }
    }
  }
}
//! Prime Checker Direct Function, no need to understand
// !Space Complexity Very low
bool isPrimeF(int n)
{
  // Corner cases
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  // This is checked so that we can skip
  // middle five numbers in below loop
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

int main()
{
  makePrime2();
  // if (!isPrime2[7])
  // {
  //   cout<<"TYes"<<endl;
  // }
  cout<<MAXN<<endl;
  
}