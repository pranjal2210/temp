#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<pair<int, int>> arr = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
  int n = arr.size();
  unordered_map<int, int> mpp;

  for (int i = 0; i < n; i++)
  {
    int first = arr[i].first;
    int second = arr[i].second;

    if (mpp.find(second) != mpp.end() && mpp[second] == first)
    {
      cout << "(" << first << " " << second << ")"
           << " ";
    }
    else
    {
      mpp[first] = second;
    }
  }

  return 0;
}