#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "hellooo";
  // reverse(str.begin(), str.end());

  int i = 0, j = str.length() - 1;

  while (i <= j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }

  cout << str << endl;
  return 0;
}