#include <bits/stdc++.h>
using namespace std;

class ShallowCopy
{
public:
  int *data;
  ShallowCopy(int val)
  {
    this->data = new int(val);
  }
  ShallowCopy(ShallowCopy &other)
  {
    this->data = other.data;
  }
  ~ShallowCopy()
  {
    delete data;
  }
};

class DeepCopy
{
public:
  int *data;
  DeepCopy(int val)
  {
    this->data = new int(val);
  }
  DeepCopy(DeepCopy &other)
  {
    this->data = new int(*other.data);
  }
  ~DeepCopy()
  {
    delete data;
  }
};

int main()
{
  ShallowCopy obj1(10);
  ShallowCopy obj2 = obj1;
  cout << *obj1.data << endl;
  cout << *obj2.data << endl;
  *obj1.data = 20;
  cout << *obj1.data << endl;
  cout << *obj2.data << endl;

  cout << endl;

  DeepCopy obj3(40);
  DeepCopy obj4 = obj3;
  cout << *obj3.data << endl;
  cout << *obj4.data << endl;
  *obj3.data = 50;
  cout << *obj3.data << endl;
  cout << *obj4.data << endl;

  return 0;
}