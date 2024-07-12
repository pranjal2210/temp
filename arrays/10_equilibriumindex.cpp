#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {2, 3, -1, 8, 4};
  int eqi = -1, sum = 0, n = arr.size();

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  int lsum = 0, rsum = sum;

  for (int i = 0; i < n; i++)
  {
    rsum -= arr[i];
    if (lsum == rsum)
    {
      eqi = i;
    }
    lsum += arr[i];
  }

  cout << eqi << endl;

  return 0;
}