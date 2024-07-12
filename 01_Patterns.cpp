#include <iostream>
using namespace std;

void print1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }
    cout << endl;
  }
}

void print2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }

    // for (int j = 2 * n - 1; j > i * 2; j--)
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }
    cout << endl;
  }
}

void print3(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i > n ? 2 * n - i : i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void print4(int n)
{
  for (int i = 0; i < n; i++)
  {
    int start = i % 2 == 0 ? 1 : 0;
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void print5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }

    for (int j = 0; j < 2 * (n - i); j++)
    {
      cout << "  ";
    }

    for (int j = i; j >= 1; j--)
    {
      cout << j << " ";
    }

    cout << endl;
  }
}

void print6(int n)
{
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << num++ << " ";
    }
    cout << endl;
  }
}

void print7(int n)
{
  for (int i = 1; i <= n; i++)
  {
    // char ch = 'A';
    // for (int j = 1; j <= i; j++)
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << ch << " ";
      // ch++;
    }
    cout << endl;
  }
}

void print8(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch < 'A' + n - i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void print9(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void print10(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    char ch = 'A';
    int breakPoint = (2 * i + 1) / 2;

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << ch << " ";
      j < breakPoint ? ch++ : ch--;
    }

    // for (char ch = 'A'; ch <= 'A' + i; ch++)
    // {
    //   cout << ch << " ";
    // }

    // for (char ch = 'A' + i - 1; ch >= 'A'; ch--)
    // {
    //   cout << ch << " ";
    // }

    cout << endl;
  }
}

void print11(int n)
{
  // for (int i = 1; i <= n; i++)
  // {
  //   for (char j = 'A' + n - i; j >= 'A'; j--)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  for (int i = 1; i <= n; i++)
  {
    for (char j = 'A' + n - i; j < 'A' + n; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void print12(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "* ";
    }
    for (int j = 0; j < 2 * i; j++)
    {
      cout << "  ";
    }
    for (int j = i; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 0; j < 2 * (n - i - 1); j++)
    {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void print13(int n)
{
  int spaces = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i > n ? 2 * n - i : i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j <= spaces; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    i < n ? spaces -= 2 : spaces += 2;
    cout << endl;
  }
}

void print14(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}

void print15(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i;
      int left = j;
      int right = (2 * n - 2) - j;
      int bottom = (2 * n - 2) - i;
      cout << (n - min(min(top, bottom), min(left, right))) << " ";
    }
    cout << endl;
  }
}

int main()
{
  // print1(5);
  // print2(5);
  // print3(5);
  // print4(5);
  // print5(5);
  // print6(5);
  // print7(5);
  // print8(5);
  // print9(5);
  // print10(5);
  // print11(5);
  // print12(5);
  // print13(5);
  // print14(5);
  print15(5);

  return 0;
}