#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr, int n)
{
  int lar = INT_MIN;
  int slar = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > lar)
    {
      slar = lar;
      lar = arr[i];
    }
    else if (arr[i] > slar && arr[i] != lar)
    {
      slar = arr[i];
    }
  }

  return slar;
}

int secondSmallest(vector<int> arr, int n)
{
  int sml = INT_MAX;
  int ssm = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < sml)
    {
      ssm = sml;
      sml = arr[i];
    }
    else if (arr[i] < ssm && arr[i] != sml)
    {
      ssm = arr[i];
    }
  }

  return ssm;
}

int main()
{
  vector<int> arr = {1, 2, 4, 7, 7, 5};
  int n = arr.size();

  int sm = secondSmallest(arr, n);
  int sl = secondLargest(arr, n);

  cout << sm << " " << sl << endl;

  double sum = 0;
  sum = accumulate(arr.begin(), arr.end(), sum);

  cout << sum << endl;

  double average = sum / n;
  cout << "The average is " << setprecision(3) << average << endl;

  return 0;
}