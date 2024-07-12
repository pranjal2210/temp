#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 4};
  int i = 0;

  for (int j = 1; j < arr.size(); j++)
  {
    if (arr[j] != arr[i])
    {
      arr[i + 1] = arr[j];
      i++;
    }
  }

  cout << "Size after removing duplicates: " << i + 1 << endl;

  return 0;
}