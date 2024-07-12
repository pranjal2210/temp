#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "take u forward";
  int freq[256] = {0};

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != ' ')
      freq[str[i]]++;
  }

  for (int i = 0; i < str.length(); i++)
  {
    if (freq[str[i]] == 1 && str[i] != ' ')
      cout << str[i] << " ";
  }

  return 0;
}