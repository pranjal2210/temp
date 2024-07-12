#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> arr, int n, long long k)
{
  map<long long, int> preSumMap;
  long long sum = 0;
  int len = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum == k)
    {
      len = max(len, i + 1);
    }
    long long rem = sum - k;
    if (preSumMap.find(rem) != preSumMap.end())
    {
      int lenArr = i - preSumMap[rem];
      len = max(len, lenArr);
    }
    if (preSumMap.find(sum) == preSumMap.end())
      preSumMap[sum] = i;
  }
  return len;
}

int longestSubArray2(vector<int> arr, int n, long long k)
{
  int left = 0;
  int right = 0;
  long long sum = arr[0];
  int maxLen = 0;

  while (right < n)
  {
    while (left <= right && sum > k)
      sum -= arr[left++];

    if (sum == k)
      maxLen = max(maxLen, right - left + 1);

    if (right < n)
      sum += arr[++right];
  }

  return maxLen;
}

int main()
{
  vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
  int n = arr.size();

  long long k = 3;

  // brute-
  // int len = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   int sum = 0;
  //   for (int j = i; j < n; j++)
  //   {
  //     sum += arr[j];
  //     if (sum == k)
  //       len = max(len, j - i + 1);
  //   }
  // }

  // cout << len << endl;

  // better-
  // cout << longestSubArray(arr, n, k);

  // optimal-
  cout << longestSubArray2(arr, n, k);

  return 0;
}
