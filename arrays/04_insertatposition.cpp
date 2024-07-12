#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {10, 9, 14, 8, 20, 48, 16, 9};
  int n = arr.size();
  int pos = 5, val = 69;

  cout << "Before inserting:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  for (int i = n; i >= pos; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos - 1] = val;

  cout << "After inserting:" << endl;
  for (int i = 0; i <= n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}