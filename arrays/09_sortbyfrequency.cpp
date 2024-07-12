#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 2, 4, 3, 1, 2};
  unordered_map<int, int> mpp;

  for (auto num : arr)
  {
    mpp[num]++;
  }

  sort(arr.begin(), arr.end(), [&](int a, int b)
       {
         if (mpp[a] == mpp[b])
           return a < b;
         else
           return mpp[a] > mpp[b]; });

  for (auto num : arr)
  {
    cout << num << " ";
  }

  return 0;
}