#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "cbacdcbc";
  string ans = "";
  int freq[256] = {0};

  for (int i = 0; i < str.length(); i++)
  {
    if (freq[str[i]] == 0)
    {
      ans += str[i];
      freq[str[i]] = 1;
    }
  }

  cout << "After removing duplicates: " << ans << endl;
  return 0;
}