#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define vi vector<int>

vi bubbleSort(vi array)
{
  for (int i = 0; i < array.size() - 1; ++i)
  {
    for (int j = 0; j < array.size() - i - 1; ++j)
    {
      if (array[j] > array[j + 1])
      {
        swap(array[j], array[j + 1]);
      }
    }
  }
  return array;
}

vi counting_sort(vi array){
  int range = 10000;
  vi count(range+1);
  vi resulting(array.size());
  for (int i = 0; array[i]; i++)
  {
    count[array[i]]++;
  }
  for (int i = 2; i <=range; i++)
  {
    count[i] +=count[i-1];
  }
  for (int i = 0; array[i]; i++)
  {
    resulting[count[array[i]]-1] = array[i]; 
    count[array[i]]--;
  }
  return resulting;

}


int main()
{
  freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> array(n), res;
    for (int &i : array)
      cin >> i;

    auto start = high_resolution_clock::now();
    res = bubbleSort(array);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Bubble Sort: " << duration.count() << " ";

    start = high_resolution_clock::now();
    res = counting_sort(array);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Count Sort: " << duration.count() << "\n";
  }
}