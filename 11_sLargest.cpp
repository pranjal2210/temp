#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

  int lar = arr[0];
  int slar = -1;

  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] > lar)
    {
      slar = lar;
      lar = arr[i];
    }
    else if (arr[i] < lar && arr[i] > slar)
      slar = arr[i];
  }

  cout << "Second largest: " << slar << endl;

  return 0;
}