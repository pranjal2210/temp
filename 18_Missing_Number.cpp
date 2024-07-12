#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 4, 5};
  int n = arr.size();

  int XOR1 = 0;
  int XOR2 = 0;

  for (int i = 0; i < n - 1; i++)
  {
    XOR1 = XOR1 ^ (i + 1);
    XOR2 = XOR2 ^ arr[i];
  }

  XOR1 = XOR1 ^ n;

  int missing = XOR1 ^ XOR2;
  cout << missing << endl;

  return 0;
}
