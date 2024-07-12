#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr1 = {1, 1, 2, 3, 4, 5};
  vector<int> arr2 = {2, 3, 4, 4, 5, 6, 7};
  int n = arr1.size();
  int m = arr2.size();

  int i = 0;
  int j = 0;

  vector<int> unionArr;

  while (i < n && j < m)
  {
    if (arr1[i] <= arr2[j])
    {
      if (unionArr.size() == 0 || unionArr.back() != arr1[i])
      {
        unionArr.push_back(arr1[i]);
      }
      i++;
    }
    else
    {
      if (unionArr.size() == 0 || unionArr.back() != arr2[j])
      {
        unionArr.push_back(arr2[j]);
      }
      j++;
    }
  }

  while (i < n)
  {
    if (unionArr.size() == 0 || unionArr.back() != arr1[i])
    {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  while (j < m)
  {
    if (unionArr.size() == 0 || unionArr.back() != arr2[j])
    {
      unionArr.push_back(arr2[j]);
    }
    j++;
  }

  for (auto num : unionArr)
    cout << num << " ";
  cout << endl;

  return 0;
}