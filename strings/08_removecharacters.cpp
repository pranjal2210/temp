#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "take12% *&u ^$#forward";

  for (int i = 0; i < str.length(); i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      continue;

    str = str.substr(0, i) + str.substr(i + 1);
    i--;
  }

  cout << str << endl;

  return 0;
}