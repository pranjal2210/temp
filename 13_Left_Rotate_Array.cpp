#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = arr.size();
  int k = 3;

  for (auto num : arr)
    cout << num << " ";
  cout << endl;

  k = k % n;

  // brute-
  // vector<int> temp;

  // for (int i = 0; i < k; i++)
  //   temp.push_back(arr[i]);

  // for (int i = k; i < n; i++)
  //   arr[i - k] = arr[i];

  // for (int i = n - k; i < n; i++)
  //   arr[i] = temp[i - (n - k)];

  // for (auto num : arr)
  //   cout << num << " ";
  // cout << endl;

  // optimal-
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
  reverse(arr.begin(), arr.end());

  for (auto num : arr)
    cout << num << " ";
  cout << endl;

  return 0;
}