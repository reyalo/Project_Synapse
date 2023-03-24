#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int value = arr[i];
    int j = i - 1;                   //! predecessor take
    while (j >= 0 && value < arr[j]) //predecessor is greater? checking
    {
      arr[j + 1] = arr[j]; // shifting 1 place right for taking space for insertion
      j--;
    }
    arr[j + 1] = value;
  }
}

int main()
{
  int n = 4;
  int arr[] = {4, 3, 2, 1};
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}