#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
    return true;

  if (p1.second > p2.second)
    return false;

  if (p1.first > p2.first)
    return true;

  return false;
}

int main()
{
  cout << "PAIRS" << endl;
  pair<int, int> p1 = {1, 3};
  cout << p1.first << " " << p1.second << endl;
  pair<int, int> arr[] = {{1, 3}, {1, 5}, {3, 7}};
  for (int i = 0; i < 3; i++)
  {
    cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
  }

  cout << endl;
  cout << endl;

  cout << "VECTORS" << endl;
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.emplace_back(4); // similar to push_back but lil bit fast
  vector<pair<int, int>> v2;
  v2.push_back({1, 3});
  v2.emplace_back(2, 4);
  vector<int> v3(5, 100);
  vector<int> v4(5);

  vector<int>::iterator it1 = v1.begin();
  vector<int>::iterator it2 = v1.end();
  cout << "v1.begin() -> " << *it1 << endl;
  it2--;
  cout << "v1.end() -> " << *it2 << endl;

  for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = v3.begin(); it != v3.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it : v4)
  {
    cout << it << " ";
  }
  cout << endl;

  // v1.erase(v1.begin()+1); // will delete 2nd element of v1
  // v1.erase(v1.begin()+1, v1.begin()+4); // 1st position included 2nd not

  v1.insert(v1.begin(), 100); // will insert 100 at 1st position in v1

  cout << endl;

  cout << "LIST" << endl;
  list<int> ls;
  ls.push_back(1);
  ls.emplace_back(2);
  ls.push_front(3);
  ls.emplace_front(4);
  for (auto it : ls)
  {
    cout << it << " ";
  }

  cout << endl;
  cout << endl;

  cout << "DEQUE" << endl;
  deque<int> dq;
  dq.push_back(1);
  dq.emplace_back(2);
  dq.push_front(3);
  dq.emplace_front(4);
  dq.pop_back();
  dq.pop_front();
  cout << dq.front() << " " << dq.back() << endl;
  for (auto it : dq)
  {
    cout << it << " ";
  }

  cout << endl;
  cout << endl;

  cout << "STACK" << endl;
  stack<int> st;
  st.push(2);
  st.push(4);
  st.push(6);
  st.push(8);
  st.emplace(10);
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  cout << st.size() << endl;
  cout << st.empty() << endl;

  cout << endl;
  cout << endl;

  cout << "QUEUE" << endl;
  queue<int> Q;
  Q.push(1);
  Q.push(2);
  Q.emplace(4);
  Q.back() += 5;
  cout << Q.back() << " " << Q.front() << endl;
  Q.pop();
  cout << Q.back() << " " << Q.front() << endl;

  cout << endl;

  cout << "SET" << endl; // sorted and unique. multiset - only sorted not unique
  set<int> set;
  set.insert(4);
  set.emplace(3);
  set.insert(3);
  set.insert(3);
  set.insert(2);

  // auto it = set.find(3); // will return an iterator point to this 3
  // auto it = set.find(6); // will return an iterator point to after the end
  cout << set.count(3) << endl;

  // unordered_set  // stores unique but not sorted

  map<int, int> mp1; // unique keys in sorted order
  map<int, pair<int, int>> mp2;
  map<pair<int, int>, int> mp3;

  mp1[1] = 2;
  mp1.emplace(3, 1);
  mp1.insert({2, 4});
  mp3[{2, 3}] = 10;

  for (auto it : mp1)
  {
    cout << it.first << " " << it.second << endl;
  }

  // ALGORITHMS
  // pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  // sort(a, a + 3, comp);

  string str = "123";
  do
  {
    cout << str << " ";
  } while (next_permutation(str.begin(), str.end()));

  return 0;
}