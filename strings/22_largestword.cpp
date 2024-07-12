#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "Google Microsoft";
  istringstream iss(str);
  string word;
  string lword;

  // while (iss >> word)
  // {
  //   if (word.length() > lword.length())
  //     lword = word;
  // }

  for (char ch : str)
  {
    if (ch == ' ')
    {
      if (word.length() > lword.length())
        lword = word;

      word = "";
    }
    else
      word += ch;
  }

  if (word.length() > lword.length())
    lword = word;

  cout << lword << endl;

  return 0;
}