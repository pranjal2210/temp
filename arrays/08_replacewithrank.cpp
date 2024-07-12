#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {20, 15, 26, 2, 2, 98, 6};
  vector<int> temp = arr;

  sort(temp.begin(), temp.end());
  unordered_map<int, int> mpp;

  int j = 1;
  for (int i = 0; i < temp.size(); i++)
  {
    if (mpp[temp[i]] == 0)
      mpp[temp[i]] = j++;
  }

  for (int i = 0; i < arr.size(); i++)
  {
    arr[i] = mpp[arr[i]];
  }

  for (int num : arr)
  {
    cout << num << " ";
  }

  return 0;
}