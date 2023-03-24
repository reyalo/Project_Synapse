#include <bits/stdc++.h>
using namespace std;

int k = 2, n = 3, c = 0;
int arr[20];

void combination1(int pos, int left)
{
  //! Method 1
  //! Note that: In this code, pos/at refers to the position of number array,though here we haven't used any number array,we have used direct number 1 to n ;
  // c++;
  // // c++;
  // if (pos > n)
  // {
  //   // c++;
  //   if (left)
  //     return;

  //   // c++;
  //   for (int i = 1; i <= k; i++)
  //   {
  //     cout << arr[i] << " ";
  //   }
  //   cout << endl;
  //   return;
  // }

  // // c++;
  // arr[k - left + 1] = pos;
  // combination1(pos + 1, left - 1);

  // combination1(pos + 1, left);

  //! Method 2
  // c++;
  // // c++;
  // if (!left)
  // {
  //   // c++;
  //   for (int i = 1; i <= k; i++)
  //   {
  //     cout << arr[i] << " ";
  //   }
  //   cout << endl;
  //   return;
  // }
  // // c++;
  // if(pos>n)return;

  // arr[k - left + 1] = pos;
  // // c++;
  // combination1(pos + 1, left - 1);

  // combination1(pos + 1, left);

  //! Method 3 more faster
  //In method 4 explained more details

  // if (left > n - pos + 1) return;

  // if (pos > n)
  // {
  //   for (int i = 1; i <= k; i++)
  //   {
  //     cout << arr[i] << " ";
  //   }
  //   cout << endl;
  //   return;
  // }

  // if (left)
  // {
  //   arr[k - left + 1] = pos;
  //   combination1(pos + 1, left - 1);
  // }

  // combination1(pos + 1, left);

  //! Method 4 most faster
  c++;
  c++;
  if (left > n - pos + 1) //! box e joto gulu ghor khali ache(left) tar ceye jodi oboshisto number er songka kom hoy tahole ekhan theki return neua vlo.karon eta kunodin milbe na.
    return;

  c++;
  if (!left) //! box e khali ghor 0 hoye gele(left = 0) pura box print kore dite hobe.
  {

    c++;
    for (int i = 1; i <= k; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    return;
  }

  c++;
  if (pos > n)
    return; //! box e khali ghor ache bt pos>n or all number dekha hoye geche

  c++;
  arr[k - left + 1] = pos;
  combination1(pos + 1, left - 1);
  // arr[k - left + 1] = 0;                      //! eta na dileu colbe.karon jokhon r ekta songkha ekhane bosbe tokhon eta emnitei replace hoye jabe.

  combination1(pos + 1, left);
}

//!###################################
void combination2(int pos, int last)
{
  //! Note that: In this code, pos/at refers to the position of box array;
  c++;
  if (pos > k)
  {
    for (int i = 1; i <= k; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    return;
  }

  for (int i = last + 1; i <= n - k + pos; i++) //! n-k+pos explained in brain
  {
    arr[pos] = i;
    combination2(pos + 1, i);
  }
}

int main()
{
  combination2(1, 0);
  cout << c << endl;
}