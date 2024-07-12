#include <bits/stdc++.h>
using namespace std;

int sSmallest(vector<int> arr, int n)
{
  int ssm = INT_MAX;
  int sml = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < sml)
    {
      ssm = sml;
      sml = arr[i];
    }
    else if (arr[i] > sml && arr[i] < ssm)
    {
      ssm = arr[i];
    }
  }
  return ssm;
}

int sLargest(vector<int> arr, int n)
{
  int slar = INT_MIN;
  int lar = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > lar)
    {
      slar = lar;
      lar = arr[i];
    }
    else if (arr[i] < lar && arr[i] > slar)
    {
      slar = arr[i];
    }
  }
  return slar;
}

int main()
{
  // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
  // int n = arr.size();
  // int k = 3;
  // reverse(arr.begin(), arr.begin() + k);
  // reverse(arr.begin() + k, arr.end());
  // reverse(arr.begin(), arr.end());

  // vector<int> temp;
  // for (int i = 0; i < k; i++)
  //   temp.push_back(arr[i]);
  // for (int i = k; i < n; i++)
  //   arr[i - k] = arr[i];
  // int j = 0;
  // for (int i = n - k; i < n; i++)
  //   arr[i] = temp[j++];

  // reverse(arr.begin(), arr.end() - k);
  // reverse(arr.end() - k, arr.end());
  // reverse(arr.begin(), arr.end());

  // vector<int> temp;
  // for (int i = n - k; i < n; i++)
  //   temp.push_back(arr[i]);
  // for (int i = n - 1; i >= k; i--)
  //   arr[i] = arr[i - k];
  // int j = 0;
  // for (int i = 0; i < k; i++)
  //   arr[i] = temp[j++];

  // cout << sSmallest(arr, n) << endl;
  // cout << sLargest(arr, n) << endl;

  // vector<int> arr = {1, 1, 2, 3, 4, 4, 5, 5, 6, 7, 8, 9, 9};
  // int n = arr.size();
  // int i = 0;
  // for (int j = 1; j < n; j++)
  // {
  //   if (arr[i] != arr[j])
  //   {
  //     arr[i + 1] = arr[j];
  //     i++;
  //   }
  // }

  // vector<int> arr = {7, 6, 3, 2, 3, 3, 5, 3, 1, 1};
  // int n = arr.size();
  // int pos = 3;
  // int val = 99;

  // for (int i = n; i >= pos; i--)
  // {
  //   arr[i] = arr[i - 1];
  // }
  // arr[pos - 1] = val;

  // for (int i = 0; i <= n; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  int n = 7;
  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for (int i = 2; i < n; i++)
  {
    int curr = a + b;
    a = b;
    b = curr;
    cout << curr << " ";
  }
  return 0;
}