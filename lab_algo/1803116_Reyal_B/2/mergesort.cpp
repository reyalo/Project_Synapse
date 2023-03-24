#include <bits/stdc++.h>
using namespace std;
int n = 8;
int temp[100];
int arr[] = {7, 5, 4, 1, 2, 3, 8, 9};

void mergesort(int arr[], int low, int high)
{
  if (low == high)
    return;
  int mid = (low + high) / 2;
  mergesort(arr, low, mid);
  mergesort(arr, mid + 1, high);
  
  int i = low, j = mid + 1, k = low;
  while (k <= high)
  {
    if (i > mid)
      temp[k++] = arr[j++];
    else if (j > high)
      temp[k++] = arr[i++];
    else if (arr[i] < arr[j])
      temp[k++] = arr[i++];
    else
      temp[k++] = arr[j++];
  }
  i = low;
  while (i <= high)
  {
    arr[i] = temp[i];
    i++;
  }
}

int main()
{
  mergesort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}