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

  // optimal-
  reverse(arr.begin(), arr.end() - k);
  reverse(arr.end() - k, arr.end());
  reverse(arr.begin(), arr.end());

  for (auto num : arr)
    cout << num << " ";
  cout << endl;

  return 0;
}