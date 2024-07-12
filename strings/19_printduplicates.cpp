#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "sinstriiintng";
  string ans = "";
  int freq[256] = {0};

  for (int i = 0; i < str.length(); i++)
  {
    if (freq[str[i]] == 0)
      ans += str[i];
    freq[str[i]]++;
  }

  for (int i = 0; i < ans.length(); i++)
  {
    if (freq[ans[i]] > 1)
      cout << ans[i] << " - " << freq[ans[i]] << endl;
  }

  return 0;
}