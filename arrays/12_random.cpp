#include <iostream>
#include <climits>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int largestElement(int arr[], int n)
{
  int largest = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
      largest = arr[i];
  }
  return largest;
}

int smallestElement(int arr[], int n)
{
  int smallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < smallest)
      smallest = arr[i];
  }
  return smallest;
}

int secondLargestElement(int arr[], int n)
{
  int lar = INT_MIN, slar = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > lar)
    {
      slar = lar;
      lar = arr[i];
    }
    else if (arr[i] < lar && arr[i] > slar)
    {
      slar = arr[i];
    }
  }
  return slar;
}

int secondSmallestElement(int arr[], int n)
{
  int sml = INT_MAX, ssmal = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < sml)
    {
      ssmal = sml;
      sml = arr[i];
    }
    else if (arr[i] > sml && arr[i] < ssmal)
    {
      ssmal = arr[i];
    }
  }
  return ssmal;
}

void reverseArray(int arr[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void frequencyOfEachElement(int arr[], int n)
{
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }
  for (auto it : mpp)
  {
    cout << it.first << "->" << it.second << " ";
  }
  cout << endl;
}

int sumOfAllElements(int arr[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}

void leftRotate(int arr[], int n, int k)
{
  k = k % n;
  // reverse(arr, arr + k);
  // reverse(arr + k, arr + n);
  // reverse(arr, arr + n);

  vector<int> temp;
  for (int i = 0; i < k; i++)
    temp.push_back(arr[i]);
  for (int i = k; i < n; i++)
    arr[i - k] = arr[i];
  for (int i = n - k; i < n; i++)
    arr[i] = temp[i - (n - k)];
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void rightRotate(int arr[], int n, int k)
{
  k = k % n;
  // reverse(arr, arr + n - k);
  // reverse(arr + n - k, arr + n);
  // reverse(arr, arr + n);

  vector<int> temp;
  for (int i = n - k; i < n; i++)
    temp.push_back(arr[i]);
  for (int i = n - 1; i >= k; i--)
    arr[i] = arr[i - k];
  for (int i = 0; i < k; i++)
    arr[i] = temp[i];
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void average(int arr[], int n)
{
  double avg = 0;
  for (int i = 0; i < n; i++)
    avg += arr[i];
  cout << avg / n << endl;
}

void median(int arr[], int n)
{
  sort(arr, arr + n);
  if (n % 2 == 0)
  {
    int ind1 = (n / 2) - 1;
    int ind2 = (n / 2);
    cout << (double)(arr[ind1] + arr[ind2]) / 2;
  }
  else
  {
    cout << arr[(n / 2)];
  }
  cout << endl;
}

void removeDuplicatesSorted(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      i++;
      arr[i] = arr[j];
    }
  }
  for (int j = 0; j <= i; j++)
  {
    cout << arr[j] << " ";
  }
  cout << endl;
}

void removeDuplicatesUnsorted(int arr[], int n)
{
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    if (mpp.find(arr[i]) == mpp.end())
    {
      cout << arr[i] << " ";
      mpp[arr[i]]++;
    }
  }
  cout << endl;
}

void addElement(int arr[], int n, int pos, int val)
{
  for (int i = n; i >= pos; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos - 1] = val;
  for (int i = 0; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void findRepeating(int arr[], int n)
{
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }
  for (auto it : mpp)
  {
    if (it.second > 1)
    {
      cout << it.first << " ";
    }
  }
  cout << endl;
}

void binarySearch(int arr[], int n, int k)
{
  sort(arr, arr + n);
  int pos = -1;
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] < k)
    {
      low = mid + 1;
    }
    else if (arr[mid] > k)
    {
      high = mid - 1;
    }
    else
    {
      pos = mid;
      break;
    }
  }
  cout << pos << endl;
}

void palindromeOrNot(int n)
{
  int temp = n;
  int rev = 0;
  while (temp != 0)
  {
    rev = (10 * rev) + (temp % 10);
    temp /= 10;
  }
  if (rev == n)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

void primeOrNot(int n)
{
  int count = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;
      if (n / i != i)
      {
        count++;
      }
    }
  }
  if (count == 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

void armstrongOrNot(int n)
{
  int temp = n;
  int digits = 0;
  while (temp != 0)
  {
    digits++;
    temp /= 10;
  }
  temp = n;
  int armstrong = 0;
  while (temp != 0)
  {
    int d = temp % 10;
    armstrong += pow(d, digits);
    temp /= 10;
  }
  if (armstrong == n)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main()
{
  int arr[] = {8, 14, 12, 3, 9, 6, 14, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << largestElement(arr, n) << endl;
  cout << smallestElement(arr, n) << endl;
  cout << secondLargestElement(arr, n) << endl;
  cout << secondSmallestElement(arr, n) << endl;
  reverseArray(arr, n);
  frequencyOfEachElement(arr, n);
  cout << sumOfAllElements(arr, n) << endl;
  leftRotate(arr, n, 3);
  rightRotate(arr, n, 3);
  average(arr, n);
  median(arr, n);
  removeDuplicatesSorted(arr, n);
  removeDuplicatesUnsorted(arr, n);
  int arr2[] = {8, 14, 12, 3, 9, 6, 14, 1, 1};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  addElement(arr2, n2, 4, 88);
  findRepeating(arr2, n2 + 1);
  binarySearch(arr2, n2 + 1, 3);

  palindromeOrNot(121);
  primeOrNot(11);
  armstrongOrNot(407);

  return 0;
}