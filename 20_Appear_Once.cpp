#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
  int n = arr.size();

  // brute-
  // for (int i = 0; i < n; i++)
  // {
  //   int count = 0;
  //   for (int j = 0; j < n; j++)
  //   {
  //     if (arr[j] == arr[i])
  //       count++;
  //   }
  //   if (count == 1)
  //     cout << arr[i];
  // }

  // better-
  // int maxi = arr[0];
  // for (auto num : arr)
  //   maxi = max(maxi, num);

  // vector<int> hash(maxi + 1);

  // for (auto num : arr)
  //   hash[num]++;

  // for (auto num : arr)
  //   if (hash[num] == 1)
  //     cout << num << endl;

  // optimal-
  int XOR = 0;
  for (auto num : arr)
    XOR = XOR ^ num;

  cout << XOR << endl;

  return 0;
}
