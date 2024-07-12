#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 0, 2, 3, 0, 2, 0, 0, 4, 5, 0, 1};
  int n = arr.size();

  for (auto num : arr)
    cout << num << " ";
  cout << endl;

  // brute-
  // vector<int> temp;
  // for (int i = 0; i < n; i++)
  //   if (arr[i] != 0)
  //     temp.push_back(arr[i]);

  // for (int i = 0; i < temp.size(); i++)
  //   arr[i] = temp[i];

  // for (int i = temp.size(); i < n; i++)
  //   arr[i] = 0;

  // optimal-

  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }

  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }

  for (auto num : arr)
    cout << num << " ";
  cout << endl;

  return 0;
}