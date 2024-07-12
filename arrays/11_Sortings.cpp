#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int mini = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[mini];
    arr[mini] = temp;
  }
}

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int didSwap = 0;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1;
      }
    }
    if (didSwap == 0)
      break;
  }
}

void insertionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
}

void merge(int arr[], int low, int mid, int high)
{
  vector<int> v;
  int left = low;
  int right = mid + 1;

  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      v.push_back(arr[left]);
      left++;
    }
    else
    {
      v.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    v.push_back(arr[left]);
    left++;
  }

  while (right <= high)
  {
    v.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++)
  {
    arr[i] = v[i - low];
  }
}

void mergeSort(int arr[], int low, int high)
{
  if (low >= high)
    return;

  int mid = low + ((high - low) / 2);
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low, j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i < high)
    {
      i++;
    }
    while (arr[j] > pivot && j > low)
    {
      j--;
    }
    if (i < j)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  int temp = arr[low];
  arr[low] = arr[j];
  arr[j] = temp;

  return j;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
  }
}

bool isPresent(string sentence, string str)
{
  string temp = "";
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] != ' ')
    {
      temp += sentence[i];
    }
    else
    {
      if (temp == str)
      {
        return true;
      }
      temp = "";
    }
  }

  if (temp == str)
  {
    return true;
  }

  return false;
}

int isPresentIndex(string sentence, string str)
{
  string temp = "";
  int idx = -1;
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] != ' ')
    {
      temp += sentence[i];
    }
    else
    {
      if (temp == str)
      {
        idx = i - str.length();
        temp = "";
        break;
      }
      temp = "";
    }
  }

  if (temp == str)
  {
    idx = sentence.length() - str.length();
  }

  return idx;
}

int main()
{
  int n = 6;
  int arr[n] = {13, 46, 24, 52, 20, 9};

  // selectionSort(arr, n);
  // bubbleSort(arr, n);
  // insertionSort(arr, n);
  // mergeSort(arr, 0, n - 1);
  // quickSort(arr, 0, n - 1);

  // printArr(arr, n);

  return 0;
}