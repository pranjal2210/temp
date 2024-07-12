#include <bits/stdc++.h>
using namespace std;

int countCommonSubsequences(string str1, string str2)
{
  int n1 = str1.length();
  int n2 = str2.length();
  int dp[n1 + 1][n2 + 1];

  for (int i = 0; i <= n1; i++)
  {
    for (int j = 0; j <= n2; j++)
    {
      dp[i][j] = 0;
    }
  }

  for (int i = 1; i <= n1; i++)
  {
    for (int j = 1; j <= n2; j++)
    {

      if (str1[i - 1] == str2[j - 1])
        dp[i][j] = 1 + dp[i][j - 1] + dp[i - 1][j];
      else
        dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1];
    }
  }

  return dp[n1][n2];
}

int main()
{
  string str1 = "abc";
  string str2 = "abc";

  int result = countCommonSubsequences(str1, str2);
  cout << "The number of common subsequences is: " << result << endl;

  return 0;
}
