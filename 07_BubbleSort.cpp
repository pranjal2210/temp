#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main()
{
  int arr1[6] = {13, 46, 24, 52, 20, 9};

  bubbleSort(arr1, 6);

  for (int i = 0; i < 6; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;

  return 0;
}