#include <bits/stdc++.h>
using namespace std;

string result(string s)
{
  int left = 0;
  int right = s.length() - 1;

  string temp = "";
  string ans = "";

  while (left <= right)
  {
    char ch = s[left];
    if (ch != ' ')
    {
      temp += ch;
    }
    else if (ch == ' ')
    {
      if (ans != "")
        ans = temp + " " + ans;
      else
        ans = temp;
      temp = "";
    }
    left++;
  }

  if (temp != "")
  {
    if (ans != "")
      ans = temp + " " + ans;
    else
      ans = temp;
  }

  return ans;
}

int main()
{
  string st = "TUF is great for interview preparation";
  // istringstream iss(st);
  // string word;
  // string ans;

  // while (iss >> word)
  // {
  //   ans = word + " " + ans;
  // }

  // if (!ans.empty())
  //   ans.pop_back();

  // cout << ans << endl;

  cout << result(st) << endl;

  return 0;
}