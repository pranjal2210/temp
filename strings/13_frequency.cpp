#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "takeuforward";
  int freq[256] = {0};

  for (int i = 0; i < str.length(); i++)
  {
    freq[str[i]]++;
  }

  for (int i = 0; i < 256; i++)
  {
    if (freq[i] != 0)
    {
      cout << (char)(i) << freq[i] << " ";
    }
  }

  return 0;
}