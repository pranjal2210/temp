#include <bits/stdc++.h>
using namespace std;
int RepeatingCharacters(string str)
{
  int count[256] = {0};
  int cnt = 0;
  for (int i = 0; i < str.length(); i++)
  {
    count[str[i]]++;
  }
  for (int i = 0; i <= 256; i++)
  {
    if (count[i] > 1)
      cnt++;
  }
  return cnt;
}
int main()
{
  string str;
  getline(cin, str);
  int i = 0, j = 0;
  int maxrepeat = 0, curlength = 0, repeatchar = 0;
  int startind = 0, lastind = 0;
  while (j < str.length())
  {
    if (str[j] == ' ')
    {
      curlength = j - i;
      repeatchar = RepeatingCharacters(str.substr(i, curlength));
      if (maxrepeat < repeatchar)
      {
        startind = i;
        lastind = curlength;
        maxrepeat = repeatchar;
      }
      j++;
      i = j;
    }
    else
    {
      j++;
    }
  }
  curlength = j - i;
  repeatchar = RepeatingCharacters(str.substr(i, curlength));
  if (maxrepeat < repeatchar)
  {
    startind = i;
    lastind = curlength;
  }
  if (maxrepeat == 1)
    cout << -1;
  else
    cout << str.substr(startind, lastind);
}