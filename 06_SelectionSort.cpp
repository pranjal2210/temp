#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int minIndex = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}

int main()
{
  int arr1[6] = {13, 46, 24, 52, 20, 9};

  selectionSort(arr1, 6);

  for (int i = 0; i < 6; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;

  return 0;
}