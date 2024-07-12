#include <iostream>
#include <unordered_map>
using namespace std;

// int arr[1e7] declared globally
// int arr[1e6] declared inside main

int main()
{
  int arr[5] = {1, 3, 2, 1, 3};
  // if max size is 12
  int hashArr[13] = {0};

  for (int i = 0; i < 5; i++)
  {
    hashArr[arr[i]]++;
  }

  int find = 2;

  cout << hashArr[find] << endl;

  // character hashing

  string str = "abcdabefc";
  int hashCharArr[26] = {0};
  // int hashCharArr[256] = {0};      for all characters and symbols

  for (int i = 0; i < str.length(); i++)
  {
    hashCharArr[str[i] - 'a']++;
    // hashCharArr[str[i]]++;         for all characters and symbols
  }

  char findChar = 'b';

  cout << hashCharArr[findChar - 'a'] << endl;
  // cout << hashCharArr[findChar] << endl;   for all characters and symbols

  // USING MAP

  int mapArr[8] = {1, 3, 2, 1, 3, 2, 1, 4};
  // map<int, int> mpp;   // TC -> map uses O(log(N)) in all cases
  unordered_map<int, int> mpp;   // TC -> unordered_map uses O(1) in storing and O(N) in fetching x

  for (int i = 0; i < 8; i++)
  {
    mpp[mapArr[i]]++;
  }

  int mapFind = 1;

  cout << mpp[mapFind] << endl;

  return 0;
}