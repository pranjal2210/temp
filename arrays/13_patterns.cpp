#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 5;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j < i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      cout << "  ";
    }
    for (int j = n; j >= i; j--)
    {
      cout << "* ";
    }
    for (int j = n; j > i; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j < i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      cout << "  ";
    }
    for (int j = n; j >= i; j--)
    {
      cout << "* ";
    }
    for (int j = n; j > i; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i < n; i++)
  {
    for (int j = n - i; j >= 1; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  int start = 1;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      start = 0;
    else
      start = 1;
    for (int j = 1; j <= i; j++)
    {
      cout << start << " ";
      start = 1 - start;
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    for (int j = 1; j <= (2 * n) - (2 * i); j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << i - j + 1 << " ";
    }
    cout << endl;
  }

  cout << endl;
  int idx = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << idx++ << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + n - i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << char('A' + i - 1) << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << "  ";
    }
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
    {
      cout << ch << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A' + n - i; ch <= 'A' + n - 1; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j <= 2 * i - 2; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 2 * n - 2; j >= 2 * i - 1; j--)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 2 * n - 2; j >= 2 * i - 1; j--)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j <= 2 * i; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= n - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j == 1 || i == 1 || i == n || j == n)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
    }
    cout << endl;
  }

  return 0;
}