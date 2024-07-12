#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "takeuforward";
  char ans = str[0];
  int maxi = 0;
  int freq[256] = {0};

  for (int i = 0; i < str.length(); i++)
  {
    freq[str[i]]++;
    if (freq[str[i]] > maxi)
    {
      maxi = freq[str[i]];
      ans = str[i];
    }
  }

  cout << "Maximum occurring character is " << ans << endl;
  return 0;
}