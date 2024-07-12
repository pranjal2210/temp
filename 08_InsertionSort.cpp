#include <iostream>
using namespace std;

// void insertionSort(int arr[], int n)
// {
//   for (int i = 0; i <= n - 1; i++)
//   {
//     int pivot=i;
//     for (int j = i; j >= 0; j--)
//     {
//       if (arr[j] > arr[pivot]){
//         swap(arr[pivot], arr[j]);
//         pivot--;
//       }
//     }
//   }
// }

// optimized
void insertionSort(int arr[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}

int main()
{
  int arr[7] = {14, 9, 15, 12, 6, 8, 13};

  insertionSort(arr, 7);

  for (int i = 0; i < 7; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}