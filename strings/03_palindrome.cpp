#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "ABCDCBA";
  string temp = str;
  int i = 0, j = temp.length() - 1;

  while (i <= j)
  {
    swap(temp[i], temp[j]);
    i++;
    j--;
  }

  if (str == temp)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}