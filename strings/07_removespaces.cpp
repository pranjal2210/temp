#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "take u forward";
  int count = 0;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != ' ')
    {
      str[count] = str[i];
      count++;
    }
  }
  // str[count]='\0';
  str.resize(count);


  // for (int i = 0; i < str.length(); i++)
  // {
  //   if (str[i] == ' ')
  //   {
  //     str = str.substr(0, i) + str.substr(i + 1);
  //     i--;
  //   }
  // }

  cout << str << endl;

  return 0;
}