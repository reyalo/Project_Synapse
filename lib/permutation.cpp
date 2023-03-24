#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int myints[] = {3, 1, 2};

  // do{
  //   cout << myints[0] << myints[1] << myints[2] <<endl;
  // }while (next_permutation(myints, myints+3));
  next_permutation(myints, myints+3);
  cout << myints[0] << myints[1] << myints[2] << endl;
  next_permutation(myints, myints+3);
  cout << myints[0] << myints[1] << myints[2] << endl;
  next_permutation(myints, myints + 3);
  cout << myints[0] << myints[1] << myints[2] << endl;

  return 0;
}