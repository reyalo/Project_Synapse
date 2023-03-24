#include <bits/stdc++.h>
using namespace std;
#define max_n 20
int dp[max_n];             // for dynamic recursive version 
int dp_iterative[max_n];   //for iterative recursive version
int path[max_n];           // for path printing


//! function for recursive of dynamic
int f(int i, vector<int> &A)
{
  if (dp[i])                    // if f(i) already calculated
    return dp[i];

  int ans = 0;                   
  for (int j = i + 1; j < A.size(); j++) // main part
  {
    if (A[i] < A[j])
    {
      // ans = max(ans, f(j, A)); //! if haven't show path

      int temp = f(j, A);    //{
      if (ans < temp)
      {                          //! this part only for path save
        ans = temp;
        path[i] = j;         //}
      }
    }
  }
  dp[i] = ans + 1;
  return dp[i];
}

int lis(vector<int> A)
{
  int ans = 0;
  int starting_node = -1;
  memset(path, -1, sizeof(path)); //! path memset by -1 because path[] value can be 0.

  for (int i = 0; i < A.size(); i++)
  {
    // ans = max(ans, f(i, A));     //! if only max number of lis;

    int temp = f(i, A);       //{
    if(ans<temp){                 //! this part only for path starting node
      ans = temp;                     
      starting_node = i;       //}
    }
  }
  

  //Printing of path
  while (starting_node!=-1)
  {
    cout<<A[starting_node]<<" ";
    starting_node = path[starting_node];
  }
  cout<< endl;
  
  return ans;
}


//!iterative version of LIS
int lis_iterative(vector<int> A)
{
  for (int i = A.size() - 1; i >= 0; i--)  //! calculating from right to left
  {
    int ans = 0;
    for (int j = i + 1; j < A.size(); j++)  //! it is same as f(i). it calculating from left to right like f(i).
    {
      if (A[i] < A[j])
        ans = max(ans, dp_iterative[j]);   //! dp_iterative[j] already calculated because main for loop calculate from right to left
    }
    dp_iterative[i] = ans + 1;
  }
  int result = 0;
  for (int i = 0; i < A.size(); i++)
  {
    result = max(result, dp_iterative[i]);  //! retriving max of dp_iterative[].
  }
  return result;
}

int lis_nlogn(){
  vector<int> vi;
  int n,num;
  cin>>n;
  int path[n];    //! for path printing
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin>>num;
      cin>>arr[i];
      vector<int>::iterator iv;
      iv = lower_bound(vi.begin(),vi.end(),num);
      if (iv==vi.end())
      {
        vi.push_back(num);
      }
      else
      {
        vi[iv-vi.begin()] = num;
      }
      
      
    }
    // cout<<vi.size()<<endl;
    return vi.size();
}

int main()
{
  // vector<int> A;
  // A.push_back(5);
  // A.push_back(0);
  // A.push_back(9);
  // A.push_back(2);
  // A.push_back(7);
  // A.push_back(3);
  // A.push_back(4);
  // cout << lis(A) << endl;
  // cout << lis_iterative(A) << endl;

  cout<<lis_nlogn()<<endl;

}