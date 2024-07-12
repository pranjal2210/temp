#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "1011";
  
  // 1
  int n = str.length();
  int ans = 0;

  for (int i = n - 1; i >= 0; i--)
  {
    ans += (str[i] - '0') * pow(2, n - i - 1);
  }

  cout << ans << endl;

  // 2
  cout << stoi(str, 0, 2) << endl;

  return 0;
}