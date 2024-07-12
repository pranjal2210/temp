#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, -3, 0, -4, -5};
  int n = arr.size();

  int pre = 1, suf = 1;
  int ans = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (pre == 0)
      pre = 1;
    if (suf == 0)
      suf = 1;

    pre = pre * arr[i];
    suf = suf * arr[n - i - 1];
    ans = max(ans, max(pre, suf));
  }

  cout << "The maximum product subarray is: " << ans << endl;

  return 0;
}