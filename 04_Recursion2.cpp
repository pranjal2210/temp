#include <iostream>
using namespace std;

void reverseArr(int arr[], int i, int n)
{
  if (i >= n / 2)
    return;

  swap(arr[i], arr[n - i - 1]);
  reverseArr(arr, i + 1, n);
}

bool checkPalindrome(string str, int n, int i)
{
  if (i >= n / 2)
    return true;

  if (str[i] != str[n - i - 1])
    return false;

  return checkPalindrome(str, n, i + 1);
}

int fibo(int n)
{
  if (n <= 1)
    return n;

  return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  int n = 5;
  int arr[n] = {1, 2, 3, 4, 5};
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  reverseArr(arr, 0, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  string str = "LEVEL";
  if (checkPalindrome(str, str.length(), 0))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  cout << fibo(n) << endl;

  return 0;
}