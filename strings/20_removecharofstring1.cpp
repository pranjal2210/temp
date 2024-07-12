#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str1 = "abcdef";
  string str2 = "cefz";

  unordered_map<char, int> map;
  string ans = "";

  for (int i = 0; i < str2.length(); i++)
    map[str2[i]] = 1;

  for (int i = 0; i < str1.length(); i++)
  {
    if (map[str1[i]] != 1)
      ans += str1[i];
  }

  cout << ans << endl;

  return 0;
}