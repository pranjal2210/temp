#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "take u forward";

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || (str[i - 1] == ' ' && str[i] == ' '))
    {
      str = str.substr(0, i) + str.substr(i + 1);
      i--;
    }
  }

  cout << str << endl;

  return 0;
}