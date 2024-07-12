#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "1a30z67";
  int sum = 0;
  string tempSum = "";

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
    {
      tempSum += str[i];
    }
    else
    {
      sum += stoi(tempSum);
      tempSum = "";
    }
  }
  sum += stoi(tempSum);

  cout << sum << endl;

  return 0;
}