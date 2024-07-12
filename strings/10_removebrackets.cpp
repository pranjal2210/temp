#include <bits/stdc++.h>
using namespace std;

int main()
{
  // string str = "a+((b-c)+d)";
  string str = "(((a-b))+c)";

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '(' || str[i] == ')')
    {
      str = str.substr(0, i) + str.substr(i + 1);
      i--;
    }
  }

  cout << str << endl;

  return 0;
}