#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {4, 3, 9, 2, 4, 1, 10, 10, 2, 4};
  int n = arr.size();

  unordered_map<int, int> mpp;

  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  for (auto it : mpp)
  {
    if (it.second > 1)
    {
      cout << it.first << " ";
    }
  }

  return 0;
}