#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "abcdxyz";

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'Z')
      str[i] = 'A';
    else if (str[i] == 'z')
      str[i] = 'a';
    else if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'z'))
      str[i]++;
  }

  cout << str << endl;

  return 0;
}