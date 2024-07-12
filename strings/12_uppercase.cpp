#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "take u forward is awesome";
  int n = str.length();

  for (int i = 0; i < n; i++)
  {
    if (i == 0 || str[i - 1] == ' ' || (i != n - 1 && str[i + 1] == ' ') || i == n - 1)
      str[i] = str[i] - ('a' - 'A');
  }

  cout << str << endl;

  return 0;
}