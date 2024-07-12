#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 213;
  string str = "";

  while (n > 0)
  {
    int temp = (n % 2);
    str = char(temp + '0') + str;
    n /= 2;
  }

  cout << str << endl;

  return 0;
}