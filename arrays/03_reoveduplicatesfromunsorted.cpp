#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {4, 3, 9, 2, 4, 1, 10, 10, 2};
  int n = arr.size();

  unordered_map<int, int> mpp;

  for (int i = 0; i < n; i++)
  {
    if (mpp.find(arr[i]) == mpp.end())
    {
      cout << arr[i] << " ";
      mpp[arr[i]]++;
    }
  }

  return 0;
}